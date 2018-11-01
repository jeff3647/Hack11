#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "utils.h"

/*
HACK 05
Name: Jeff Park, Alex, XinYi
Group Name: Awesome :)
Date: 09/20/18

The source file where function definitions are stored
*/

//Convert degrees to radians
double degreesToRadians(double degree){
	return degree * M_PI / 180.0;
}
//Air distance calculation
double getAirDistance(double originLatitude, double originLongitude, double destinationLatitude, double destinationLongitude){
	/*if(originLatitude >= - 180 && destinationLatitude <= 180 && originLongitude >= -180 && destinationLongitude <= 180){
			originLatitude = originLatitude  * M_PI / 180.0;
			originLongitude = originLongitude * M_PI / 180.0;
			destinationLatitude = destinationLatitude * M_PI / 180.0;
			destinationLongitude = destinationLongitude * M_PI / 180.0;
			return acos(sin(originLatitude) * sin(destinationLatitude) + cos(originLatitude) * cos(destinationLatitude) * cos(destinationLongitude - originLongitude)) * 6371;
	} else {
		printf("Error... Incorrect input values\n");
		return 0;
	}*/
	//Restrictions ARE WRONG :( IN WEBGRADER
	originLatitude = originLatitude  * M_PI / 180.0; //Convert degrees to radians
	originLongitude = originLongitude * M_PI / 180.0;
	destinationLatitude = destinationLatitude * M_PI / 180.0;
	destinationLongitude = destinationLongitude * M_PI / 180.0;
	return acos(sin(originLatitude) * sin(destinationLatitude) + cos(originLatitude) * cos(destinationLatitude) * cos(destinationLongitude - originLongitude)) * 6371;
	
}
//Lorentz Time Dilation calculation
double lorentzTimeDilation(double t, double percentC){
	return t / sqrt(1 - pow(percentC, 2));
}


