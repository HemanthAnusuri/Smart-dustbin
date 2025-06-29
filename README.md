# Smart Dustbin using Arduino

An automatic dustbin that uses an ultrasonic sensor to detect when a person approaches and opens the lid using a servo motor. Built and tested on TinkerCAD.

## Components Used
- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Jumper Wires, Breadboard

## Working Principle
1. The ultrasonic sensor measures distance to detect a nearby object (like a hand).
2. If the object is within 10 cm, the lid (servo motor) opens.
3. After 2 seconds, the lid closes automatically.

## Circuit Simulation
TinkerCAD Simulation: [Click to View](https://www.tinkercad.com/things/am5G6LnAqeP-smart-dustbin-project?sharecode=Bn-UnoVFE7MooSNVgX2HiiHZicFfdFy84Fi0BzqBLhI)

## Code
See `smartdustbin.ino` file in this repository.

---

Created by [Hemanth Anusuri]

