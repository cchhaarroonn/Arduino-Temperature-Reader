# Temperature Reader using Arduino Uno and TMP36 Temperature Sensor

This project implements a temperature reader using an Arduino Uno, TMP36 temperature sensor, LCD, resistor, and potentiometer. The sensor reads the temperature in the environment and displays it on an LCD screen. The user can adjust the contrast of the LCD using the potentiometer.

## Components

- Arduino Uno
- TMP36 Temperature Sensor
- Breadboard
- LCD Display (16x2)
- 1k Ohm Resistor
- 10k Ohm Potentiometer
- Jumper Wires

## Scheme & Showcase

![image](https://user-images.githubusercontent.com/90192366/225772368-ce828899-6927-413a-94b7-75e0a870385b.png)
https://user-images.githubusercontent.com/90192366/225454441-dff82d21-24fa-4bef-abcd-c132847b1577.mp4

# Instructions

## Hardware Setup



## Software Setup

1. Install the Arduino IDE on your computer if you haven't already done so.
2. Open the Arduino IDE and create a new project.
3. Copy and paste the code from the code.cpp file in this repository into the project.
4. Upload the project to the Arduino Uno board.

## Usage

1. Power on the Arduino Uno board.
2. The LCD display will show the current temperature reading in Celsius and Fahrenheit.
3. Use the potentiometer to adjust the contrast of the LCD display if necessary.

# Troubleshooting

- If the LCD display does not show any text or shows garbled text, check your wiring connections and make sure the LCD pins are connected to the correct digital and     power pins on the Arduino Uno.

- If the temperature reading is incorrect or unstable, make sure the TMP36 sensor is properly positioned and there are no obstructions affecting the temperature         readings.

# Credits
This project was inspired by the TMP36 example project in the Arduino IDE and modified to include an LCD display and potentiometer for user interaction. The code was written by charon.
