// ============================================
// Project  : Obstacle Detection Car
// Author   : Daniel
// GitHub   : https://github.com/danibae006
// Repo     : https://github.com/danibae006/obstacle-detection-car
//
// For wiring & connections, visit the repo
// above and read the README file.
// It contains full wiring diagrams,
// component list, and setup instructions.
// ============================================

#define trigPin  9
#define echoPin  10
#define relayPin 7
#define buzzer   8

long duration;
int distance;

void setup() {
  pinMode(trigPin,  OUTPUT);
  pinMode(echoPin,  INPUT);
  pinMode(relayPin, OUTPUT);
  pinMode(buzzer,   OUTPUT);

  digitalWrite(relayPin, LOW); // Start with motor OFF (safe default)
}

void loop() {
  // Trigger ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Calculate distance
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (distance < 15) {
    digitalWrite(relayPin, HIGH); // Object detected → motor ON (stop car via relay)
    digitalWrite(buzzer,   HIGH); // Buzzer ON (alert)
  } else {
    digitalWrite(relayPin, LOW);  // No object → motor OFF
    digitalWrite(buzzer,   LOW);  // Buzzer OFF
  }

  delay(200);
}
