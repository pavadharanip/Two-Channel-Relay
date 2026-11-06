# ⚡ Arduino-Based Two-Channel Relay Module

# 📌 Project Overview

The Arduino-Based 2-Channel Relay Module project demonstrates how to control two independent electrical devices using an Arduino board. The relay module acts as an electrically controlled switch that allows Arduino to turn devices ON and OFF through digital signals.

This project helps understand relay operation, digital output control, and basic automation using Arduino.

## 🎯 Project Objectives

- To understand the working principle of a relay module.
- To control two relay channels independently.
- To interface a 2-channel relay module with Arduino.
- To learn digital output operations.
- To understand basic electrical switching and automation.

## ✨ Features

- **Two-Channel Control:** Controls two relay channels independently.
- **Turn ON Function:** Activates the selected relay.
- **Turn OFF Function:** Deactivates the selected relay.
- **Arduino Integration:** Uses digital output pins for relay control.
- **Simple Automation:** Demonstrates basic device switching.

## 🛠️ Hardware Components Required

| Component | Quantity |
|---|---|
| Arduino UNO | 1 |
| 2-Channel Relay Module | 1 |
| Jumper Wires | As required |
| Breadboard | 1 |

## 🔌 Pin Connections

| Relay Module | Arduino UNO |
|---|---|
| IN1 | Digital Pin 7 |
| IN2 | Digital Pin 8 |
| VCC | 5V (if supported) |
| GND | GND |

## ⚙️ Working Principle

1. Arduino sends digital signals to the relay module.
2. The first relay channel controls the first output.
3. The second relay channel controls the second output.
4. When a relay is activated, its contacts change state.
5. When deactivated, the contacts return to their normal state.
6. Both channels can be controlled independently.

## 💻 Software Requirements

- Arduino IDE
- Arduino C/C++ Programming
- [View Arduino Code](./relay.ino)

## 📟 Output

- Relay 1: TURN ON / TURN OFF
- Relay 2: TURN ON / TURN OFF

The relay indicator LEDs show the switching status.

![Two Channel Relay](./2%20channel%20relay.jpeg)

## 🚀 Applications

- Home automation
- Automatic lighting systems
- Water pump control
- Electrical device switching
- Embedded automation projects

## 📚 Learning Outcomes

Through this project, I learned:

- Basics of relay modules.
- Interfacing a 2-channel relay with Arduino.
- Digital output programming.
- Independent control of two relay channels.
- Basic automation and switching concepts.

## ⭐ Acknowledgement

This project was developed as a hands-on embedded systems learning activity to understand relay interfacing and Arduino-based automation.
