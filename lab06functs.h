/** lab06functs.h
* ===========================================================
* Name: David Petzold
* Section: T6/7
* Project: Lab 06
* Purpose: This program computes the number of seconds it takes an object to fall the height of a given building
* ===========================================================*/

/**
 * @brief Computes the time an object falls a given number of feet
 * @param stories the number of stories to fall assuming 20 feet per story
 * @return Time in seconds
 * @pre Feet is not zero
 * @post Feet is unchanged
 */
double timeToFallFeet(double feet);
/* Example Output:
*   0 feet --> "0.00000 seconds"
*   10 feet --> "0.78870 seconds"
*   120 feet --> "2.73214 seconds"
*/

double toMeters(double stuff);

double toFeet(int stories);