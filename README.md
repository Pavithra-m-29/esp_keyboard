# NodeMCU ESP8266 1x5 Push Button Keyboard Matrix Interfacing

## Project Overview
This project demonstrates the interfacing of a **1x5 Tactile Matrix Keyboard/Keypad Module** with a **NodeMCU ESP8266 (ESP-12E)** development board. The system reads individual keypress signals from a 5-button switch array and transmits corresponding digital log data to the computer via serial communication.

---

## Components Used
* **NodeMCU ESP8266 (ESP-12E Module)** (Microcontroller)
* **1x5 Tactile Push Button Keyboard Module** (5-Key Matrix Array)
* **Breadboard & Jumper Wires**
* **Laptop / PC** (For serial monitor logging output)

---

## Circuit Configuration

| Keyboard Module Pin | NodeMCU Pin | Description |
|---------------------|-------------|-------------|
| **KEY1 (Button 1)** | D1          | Dedicated Input Pin for First Switch |
| **KEY2 (Button 2)** | D2          | Dedicated Input Pin for Second Switch |
| **KEY3 (Button 3)** | D3          | Dedicated Input Pin for Third Switch |
| **KEY4 (Button 4)** | D4          | Dedicated Input Pin for Fourth Switch |
| **KEY5 (Button 5)** | D5          | Dedicated Input Pin for Fifth Switch |
| **GND** | GND         | Tied to common ground terminal rail |

*Note: The NodeMCU pins are configured utilizing internal microchip **Pull-Up Resistors (`INPUT_PULLUP`)**. This software configuration holds the input lines high (`HIGH`) at baseline, dropping directly to ground logic (`LOW`) only when a tactile button completes the respective physical path loop on press.*

---

## Features
* **Internal Pull-Up Management:** Eliminates the necessity for messy external mechanical resistors on the breadboard layer by using software-driven pull-ups.
* **Real-time Serial Telemetry:** Streams active character and key identification codes directly to the PC console layer at real-time speeds with minimal delay loops (`delay(200)`).
* **Multi-Button Scalability:** Serves as a modular baseline for configuring menus, custom hardware macro shortcuts, password lock gates, or localized embedded system controls.

---

## Software Requirements
* **Arduino IDE** (With configured ESP8266 core software framework)
* **Serial Monitor Console** (Set to matching data transmission baud rate)

---

## How to Set Up and Run
1. Wire up the 1x5 keyboard matrix header pins to the corresponding NodeMCU GPIO channels using the circuit matrix specification.
2. Launch your control project software script (`.ino`) file within the **Arduino IDE**.
3. Compile and upload the binary program files directly onto your connected NodeMCU board.
4. Open up the **Serial Monitor** tab inside the IDE window interface, setting the baud rate to sync parameters (e.g., `115200` or matching setup value).
5. Press the physical keys indexed across the matrix board panel to see the dynamic automated readout feedback update immediately across the screen.

---

## Simulation & Hardware Preview
Below is the hardware operational setup captured during development verification:

![Circuit Schematic](WhatsApp%20Video%202026-07-02%20at%2010.09.46%20AM.mp4)

---

## Author
Pavithra M
