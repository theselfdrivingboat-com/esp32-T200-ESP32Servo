#include "ESP32Servo.h"

byte servoPinL = 12;
byte servoPinR = 13;
Servo servoL;
Servo servoR;

void setup() {
	delay(3000); // delay to allow the ESC to recognize the stopped signal
	servoL.attach(servoPinL);
	servoR.attach(servoPinR);
	servoL.writeMicroseconds(1500); // send "stop" signal to ESC.
	servoR.writeMicroseconds(1500); // send "stop" signal to ESC.
	delay(7000); // delay to allow the ESC to recognize the stopped signal
}

void loop() {
	int signal = 1700; // Set signal value, which should be between 1100 and 1900
	servoL.writeMicroseconds(signal); // Send signal to ESC.
	servoR.writeMicroseconds(signal); // Send signal to ESC.
}
