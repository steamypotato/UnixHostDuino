/*
 * Copyright (c) 2019 Brian T. Park
 * MIT License
 * 
 * Parts derived from the Arduino SDK
 * Copyright (c) 2005-2013 Arduino Team
 */

#ifndef UNIX_HOST_DUINO_ARDUINO_H
#define UNIX_HOST_DUINO_ARDUINO_H

#include "Print.h"
#include "StdioSerial.h"

// xx.yy.zz => xxyyzz (without leading 0)
#define UNIX_HOST_DUINO_VERSION 301
#define UNIX_HOST_DUINO_VERSION_STRING "0.3.1"

// Used by digitalRead() and digitalWrite()
#define HIGH 0x1
#define LOW  0x0

// Used by pinMode()
#define INPUT 0x0
#define OUTPUT 0x1
#define INPUT_PULLUP 0x2

// Various math constants.
#define PI 3.1415926535897932384626433832795
#define HALF_PI 1.5707963267948966192313216916398
#define TWO_PI 6.283185307179586476925286766559
#define DEG_TO_RAD 0.017453292519943295769236907684886
#define RAD_TO_DEG 57.295779513082320876798154814105
#define EULER 2.718281828459045235360287471352

#define SERIAL  0x0
#define DISPLAY 0x1

#define LSBFIRST 0
#define MSBFIRST 1

#define CHANGE 1
#define FALLING 2
#define RISING 3

// Arbitrarily define the pin for the LED_BUILTIN
#define LED_BUILTIN 1

// Define a bunch of digital and analog pins
#define D0 0
#define D1 1
#define D2 2
#define D3 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define D8 8
#define D9 9
#define D10 10
#define D11 11
#define D12 12
#define D13 13
#define D14 14
#define D15 15
#define D16 16
#define D17 17
#define D18 18
#define D19 19

#define A0 0
#define A1 1
#define A2 2
#define A3 3
#define A4 4
#define A5 5
#define A6 6
#define A7 7
#define A8 8
#define A9 9

extern "C" {

void delay(unsigned long ms);
void yield();
unsigned long millis();
unsigned long micros();
void digitalWrite(uint8_t pin, uint8_t val);
int digitalRead(uint8_t pin);
void pinMode(uint8_t pin, uint8_t mode);
int analogRead(uint8_t pin);

/** Provided in the client code's *.ino file. */
void setup();

/** Provided in the client code's *.ino file. */
void loop();

/** Default entrypoint, runs setup() and loop() */
int unixhostduino_main(int argc, char** argv);

/** Calls unixhostduino_main() unless overriden by user */
int main(int argc, char** argv);

}

// WMath prototypes
long random(long);
long random(long, long);
void randomSeed(unsigned long);

#endif
