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

// Initialise circular path co-ordinates for pathFollow test
coord point1(50, 50);
coord point2(50, ARENA_WIDTH-50);
coord point3(ARENA_WIDTH-50, ARENA_WIDTH-50);
coord point4(ARENA_WIDTH-50, ARENA_WIDTH-50);

// Initialise sigle destination co-ordinate for pathGo test
coord target(100, 100);

void loop() {
    /* pathFollow test
    // On first run
    if (runCounter == 0){
        compassOffset = initialiseOrientation();
        arenaVector = initialiseArenaBoundaries();
        ARENA_WIDTH = arenaVector.front();
        ARENA_WIDTH = arenaVector.back();
    }
    // Populate path
    path.push_back(point4);
    path.push_back(point3);
    path.push_back(point2);
    path.push_back(point1);
    // Follow path
    pathFollow(path);
    runCounter += 1;
    */

    /*//initialiseOrientation test
    if (runCounter == 0){
        compassOffset = initialiseOrientation();
        runCounter += 1;
    }
    setClockwise(60);
    Serial.println(compassOffset);
    Serial.println(compass.getHeading());
    Serial.println(getDirection());
    Serial.println();
    delay(500);
    */

    /*
    //initialiseAreaBoundaries test
    if (runCounter == 0){
        compassOffset = initialiseOrientation();
        arenaVector = initialiseArenaBoundaries();
        ARENA_WIDTH = arenaVector.front();
        ARENA_WIDTH = arenaVector.back();
        Serial.println(ARENA_WIDTH);
        Serial.println(ARENA_WIDTH);
        runCounter += 1;
    }*/

    /*//getCoord test
    if(runCounter == 0){
        compassOffset = initialiseOrientation();
        runCounter += 1;
    }
    coord currentCoord = getCoords(getDirection());
    Serial.print("Current X Coordinate: ");
    Serial.println(currentCoord.x);
    Serial.print("Current Y Coordinate: ");
    Serial.println(currentCoord.y);
    delay(5000);*/

    /*//moveFwd test
    if (runCounter == 0){
        moveFwd(30);
        runCounter += 1;
    }*/

    /*
    //pathGo test
    if (runCounter == 0){
        compassOffset = initialiseOrientation();
        pathGo(target);
        runCounter += 1;
    }*/
    
    /* Tom's random code, preserved for posterity
    float angle = random(-179, 180);
    Serial.println(angle);
    faceAngle(angle);
    delay(1000);
    */
}
