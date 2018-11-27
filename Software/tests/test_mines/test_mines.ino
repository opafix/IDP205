/*
 * source.ino
 *
 * Created: 7/11/2018
 * Author: T. Crossley
 *
 */

// ** Preamble ** //
// PRESERVE THIS ORDER FOR ANYTHING TO WORK
#include "libraries.h" // 0
#include "classes.h" // 1
#include "firmware.h" // 2
#include "mines.h" // 3
#include "indicate.h" // 4
#include "orientation.h" // 5
#include "movement.h" // 6

void loop() {

    mineGrab();
    delay(1000);
    mineDrop();
    delay(1000);
    setFwd();
    yellow.set(1);
    delay(1000);
    yellow.set(0);
    delay(1000);
    Serial.print("AAA");
}