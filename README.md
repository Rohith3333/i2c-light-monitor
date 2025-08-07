# I2C Light Monitoring System using ESP8266 and LDR

This project is a simple yet effective light monitoring system built using an **ESP8266**, **LDR (Light Dependent Resistor)**, and an **I2C-based 16x2 LCD display**. It reads the ambient light intensity and displays whether the environment is **BRIGHT** or **DARK** on the LCD screen. It's ideal for smart environment sensing, home automation, or educational purposes.

---

## 🔧 Features

- Real-time ambient light monitoring
- I2C LCD for efficient data display
- ESP8266-based, suitable for IoT integration
- Compact and low-power design

---

## 🧰 Components Used

| Component        | Description                 |
|------------------|-----------------------------|
| ESP8266 (NodeMCU)| Wi-Fi enabled microcontroller |
| LDR              | Light Dependent Resistor (sensor) |
| I2C 16x2 LCD     | Display module with I2C backpack |
| 10k Resistor     | Pull-down resistor for LDR   |
| Jumper Wires     | For connections              |
| Breadboard       | For prototyping              |

---

## 🗂️ Circuit Diagram

- **LDR Setup**: Connect one end of the LDR to **3.3V**, and the other end to **A0** and a **10k resistor to GND**.
- **I2C LCD**:  
  - `SDA` → `D2` (GPIO4)  
  - `SCL` → `D1` (GPIO5)  
  - `VCC` → `3.3V`  
  - `GND` → `GND`  

---

## 💻 Code Overview

- Reads analog light intensity from `A0`
- Compares the value against a threshold
- Displays "BRIGHT" or "DARK" on the I2C LCD
- Also displays the raw LDR value (optional)

---


