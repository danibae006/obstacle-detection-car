# 🚗 Obstacle Detection Car

An Arduino-based obstacle detection system that automatically stops a moving car when an object is detected within a set distance, using an ultrasonic sensor, relay module, and buzzer alert.

## 📌 How It Works

An HC-SR04 ultrasonic sensor continuously measures the distance to objects ahead. If an obstacle is detected within **15 cm**, the relay module cuts power to the BO motors (stopping the car) and triggers a buzzer alert. When the path is clear, the motors resume and the buzzer turns off.

- **Distance < 15 cm** → Relay ON (motors stop) + Buzzer ON
- **Distance ≥ 15 cm** → Relay OFF (motors run) + Buzzer OFF

## 🔧 Components

| Component         | Quantity |
|-------------------|----------|
| Arduino Uno       | 1        |
| Ultrasonic Sensor (HC-SR04) | 1 |
| Relay Module (5V) | 1        |
| BO Motor          | 2        |
| Wheels            | 4        |
| Buzzer            | 1        |
| Jumper Wires      | As required |

## 📐 Wiring

| Component         | Arduino Pin |
|-------------------|-------------|
| Ultrasonic TRIG   | Pin 9       |
| Ultrasonic ECHO   | Pin 10      |
| Relay Module      | Pin 7       |
| Buzzer            | Pin 8       |

## 🚀 Getting Started

1. Clone this repository:
   ```bash
   git clone https://github.com/YOUR_USERNAME/obstacle-detection-car.git
   ```
2. Open `obst.ino` in the [Arduino IDE](https://www.arduino.cc/en/software).
3. Connect components according to the wiring table above.
4. Upload the sketch to your Arduino Uno.

## ⚙️ Configuration

Adjust the detection threshold in the code:

```cpp
if (distance < 15) {  // Change 15 to your preferred stop distance (cm)
```

## 📄 License

MIT License — feel free to use and modify for your own projects.
