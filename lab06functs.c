/** lab06fucts.c
* ===========================================================
* Name: David Petzold
* Section: T6/7
* Project: Lab 06
* Purpose: This program computes the number of seconds it takes an object to fall the height of a given building
* ===========================================================*/

#include "lab06functs.h"
#include <math.h>

#define GRAVITY 9.7998

//20 feet per story
double toFeet(int stories){

    return stories * 20.0;
}

//0.3048 meters per foot
double toMeters(double stuff){
    return (stuff * 0.3048);
}

double timeToFallFeet(double feet){

    double time;
    time = sqrt(2.0 * toMeters(feet) / GRAVITY);

    return time;
}