// This contains all the code for Core 2.4 on the "Git Intro" document.

//Drive straight ahead code
# include <stdio.h>
# include <time.h>
# include "E101.h"

int main (){
   // This sets up the RPi hardware and ensures
   // everything is working correctly
   init();
   // Sets the motor connected to pin 1 to rotate
   // in one direction at MAX speed .
   set_motor(1, 255);
   sleep1(0 ,500000);
   // Sets the motor connected to pin 2 to rotate
   // in the opposite direction at MAX speed .
   set_motor(2, -255);
   sleep1(0 ,500000);
   stop(0);
return 0;}





//Turn left code: Can be easily adapted for use to turn right.


# include <stdio.h>
# include <time.h>
# include "E101.h"
int turn_left(int duration){
	// motor 2 is off
	set_motor(2, 0);
sleep1(0 ,10000); // only have a small sleep before next action so left motor can be //slowed quickly
	//assuming motor 1 is the left motor, set motor to lower speed
	set_motor(1,102);
	sleep1(duration ,0); //longer sleep so there is more time to turn
	stop(0);
return 0;}
int main (){
    int duration = 3;
    // This sets up the RPi hardware and ensures
    // everything is working correctly
    init();
    // Sets the motor connected to pin 1 to rotate
    // in one direction at MAX speed .
    set_motor(1, 255);
    sleep1(0 ,500000);
    // Sets the motor connected to pin 2 to rotate
    // in the opposite direction at MAX speed .
    set_motor(2, -255);
    sleep1(1 ,0);
    turn_left(duration);
return 0


//Reverse slowly code will be forward movement code but with negative and smaller values for the motors.

//Reverse slowly code with IR detection will be a mixture the method produced in the above comment but with an if statment using adc readings
//Below is an example of how adc readings are used in code.
#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
	//This sets up the RPi hardware and ensures
	//everything is working correctly
	init();
	//We declare an integer variable to store the ADC data
	int adc_reading0;
	int adc_reading2;
	int adc_reading4;
	adc_reading0 = read_analog(0);
	sleep1(1,0);
	adc_reading2 = read_analog(2);
	sleep1(1,0);
	adc_reading4 = read_analog(4);
	sleep1(1,0);
	//Prints read analog value
	printf("%d\n", adc_reading0);
	printf("%d\n", adc_reading2);
	printf("%d\n", adc_reading4);
return 0;}


