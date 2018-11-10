/*
 * Contains functions for interaction with mines
 */

// ** Preamble ** //
#include "firmware.h"
#include "movement.h"

// **** PUBLIC **** //

// ** Variables ** //
bool isHoldingMine // A flag to indicate whether or not the robot is holding a mine

// ** Mine Interaction ** //

bool mineGrab() {
	// Grabs mine immediately in front of robot, returns 1 when complete
	// WARNING: Robot must be orientate to face the mine first
}

bool mineDrop() {
	// Drops mine held by robot, returns 0 when complete
}

bool mineColourRed() {
	// Returns a 1 if colour sensors pick up red object, else 0
}

bool mineColourGrn() {
	// Returns a 1 if colour sensors pick up a green object, else 0
}

// **** PRIVATE **** //