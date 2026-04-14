# 🎞️ NodeMCU OLED Animation

## 📖 Description

This project displays simple animations (video/GIF-like frames) on an OLED screen using NodeMCU (ESP8266).

The animation is created by sending a sequence of frames to the OLED, resulting in a smooth visual effect similar to a GIF.

---

## ✨ Features

* Display animation on OLED screen
* Frame-by-frame rendering
* Compatible with common OLED displays (SSD1306)
* Lightweight and runs on ESP8266

---

## 🧰 Hardware

* NodeMCU (ESP8266)
* OLED Display (SSD1306 - I2C)
* Jumper wires

---

## 🔌 Wiring (I2C)

| OLED | NodeMCU |
| ---- | ------- |
| VCC  | 3.3V    |
| GND  | GND     |
| SDA  | D2      |
| SCL  | D1      |

---

## 💻 Software

* Arduino IDE
* Required libraries:

  * Adafruit SSD1306
  * Adafruit GFX

---

## ⚙️ How It Works

The animation is created by storing multiple frames and displaying them rapidly on the OLED screen.

Each frame is drawn sequentially to simulate motion, similar to how a GIF works.

---

## 🚀 How to Use

1. Connect the OLED display to NodeMCU (see wiring above)
2. Install required libraries in Arduino IDE
3. Upload the `.ino` file to your NodeMCU
4. Power the board

👉 The animation will start automatically on the OLED screen.

---

## 📂 Project Structure

```id="4p4hql"
NodeMCU-OLED-Animation/
├── src/
│   └── oled_animation/
│       └── oled_animation.ino
│       └── frame.h
├── assets/
└── README.md
```

---

## 📌 Notes

* Animation speed depends on frame delay and OLED refresh rate
* Large or complex frames may reduce performance
* And you can change the animations by change the code in frame.h to your animation

---

## 🚀 Future Improvements

* Optimize frame rendering for better FPS
* Add support for larger displays (TFT)
* Load animation from external storage
