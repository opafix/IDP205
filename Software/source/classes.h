/*
 * classes.h
 *
 *  Created on: 7 Nov 2018
 *      Author: tom
 *
 *  For the declaration of classes
 */

// Preamble
#include <Arduino.h>
using namespace std;

class digital_output {
public:
	int pin;
	bool default_status, status;
	void init () {
		// sets the relevant pin to be an output
		pinMode(pin, OUTPUT);
		status = default_status;
		digitalWrite(pin, status);
	}
	void set_default () {
		// sets the output to the default value
		status = default_status;
		digitalWrite(pin, status);
	}
	void set (bool new_status) {
		// sets output to on or off
		status = new_status;
		digitalWrite(pin, status);
	}
	bool get () {
		// returns current state
		return status;
	}
};


