# Digital-Locker-using-Arduino
A password-based Digital Locker system simulated in Proteus using Arduino and a keypad, featuring 4-digit password verification and access status indication.

This is a simple digital locker project made using **Arduino Uno and Proteus**.

In this project, I have used a keypad to enter a **4-digit password**. After entering the password, Arduino checks it with the password stored in the program. If the password is correct, the locker shows that it is opened. If the password is wrong, it shows a wrong password message.

## Components Used

* Arduino Uno
* 4x4 Keypad
* 16x2 LCD
* Resistors
* Connecting wires

## How it works

First, the user enters the 4-digit password using the keypad.

Arduino reads each key pressed on the keypad and stores the entered digits. After 4 digits are entered, it compares the entered password with the predefined password.

* Correct password → Locker Open
* Wrong password → Wrong Password

The complete circuit is simulated in **Proteus**.

## Software Used

* Arduino IDE
* Proteus

## What I learned

While making this project, I learned about:

* Keypad interfacing with Arduino
* LCD interfacing
* Taking input from a keypad
* Password checking using Arduino
* Basic embedded C programming
* Simulating an embedded circuit in Proteus

## Project Files

The repository contains the Arduino code, Proteus project file and simulation screenshots.

## Author

**Ashish Prajapat**

B.Tech ECE
