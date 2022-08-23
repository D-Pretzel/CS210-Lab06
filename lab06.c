/** lab06.c
* ===========================================================
* Name: David Petzold
* Section: T6/7
* Project: Lab 06
* Purpose: This program computes the number of seconds it takes an object to fall the height of a given building
* ===========================================================*/

#include <stdio.h>
#include "lab06functs.h"

int main(void){
    int stories;

    printf("Enter number of stories: \n");
    scanf("%i", &stories);  //Get user input

    printf("It takes %0.3f seconds for an object to fall from a building %i stories tall.", timeToFallFeet(toFeet(stories)), stories);

}