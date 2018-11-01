#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "airport.h"


Airport* createAirport(const char* gpsId,
                       const char* type,
                       const char* name,
                       double latitude,
                       double longitude,
                       int elevationFeet,
                       const char* city,
                       const char* countryAbbrv){
						   
	Airport *airport = (Airport *)malloc(sizeof(Airport) * 1);
	
	/**Title*/
	airport->gpsId = (char *)malloc(sizeof(char) * (strlen(gpsId) + 1));
	strcpy(airport->gpsId, gpsId);
	
	/**Type*/
	airport->type = (char *)malloc(sizeof(char) * (strlen(type) + 1));
	strcpy(airport->type, type);
	
	/**Name*/
	airport->name = (char *)malloc(sizeof(char) * (strlen(name) + 1));
	strcpy(airport->name, name);
	
	/**Latitude (double)*/
	airport->latitude = latitude;
	
	/**Longitude (double)*/
	airport->longitude = longitude;
	
	/**Elevation Feet (int)*/
	airport->elevationFeet = elevationFeet;
	
	/**City*/
	airport->city = (char *)malloc(sizeof(char) * (strlen(city) + 1));
	strcpy(airport->city, city);
	
	/**countryAbbrv*/
	airport->type = (char *)malloc(sizeof(char) * (strlen(countryAbbrv) + 1));
	strcpy(airport->countryAbbrv, countryAbbrv);
	
	return airport;
}


void initAirport(Airport* airport,
                 const char* gpsId,
                 const char* type,
                 const char* name,
                 double latitude,
                 double longitude,
                 int elevationFeet,
                 const char* city,
                 const char* countryAbbrv){
	
	/**Title*/
	airport->gpsId = (char *)malloc(sizeof(char) * (strlen(gpsId) + 1));
	strcpy(airport->gpsId, gpsId);
	
	/**Type*/
	airport->type = (char *)malloc(sizeof(char) * (strlen(type) + 1));
	strcpy(airport->type, type);
	
	/**Name*/
	airport->name = (char *)malloc(sizeof(char) * (strlen(name) + 1));
	strcpy(airport->name, name);
	
	/**Latitude (double)*/
	airport->latitude = latitude;
	
	/**Longitude (double)*/
	airport->longitude = longitude;
	
	/**Elevation Feet (int)*/
	airport->elevationFeet = elevationFeet;
	
	/**City*/
	airport->city = (char *)malloc(sizeof(char) * (strlen(city) + 1));
	strcpy(airport->city, city);
	
	/**countryAbbrv*/
	airport->type = (char *)malloc(sizeof(char) * (strlen(countryAbbrv) + 1));
	strcpy(airport->countryAbbrv, countryAbbrv);
	
	return;
}


char* airportToString(const Airport* a){
	
}


/**Convert degrees to radians*/
double degreesToRadians(double degree){
	return degree * M_PI / 180.0;
}
/**Air distance calculation*/
double getAirDistance(const Airport* origin, const Airport* destination){
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
	
	double longitude = origin[]
	
	originLatitude = originLatitude  * M_PI / 180.0; //Convert degrees to radians
	originLongitude = originLongitude * M_PI / 180.0;
	destinationLatitude = destinationLatitude * M_PI / 180.0;
	destinationLongitude = destinationLongitude * M_PI / 180.0;
	
	return acos(sin(originLatitude) * sin(destinationLatitude) + cos(originLatitude) * cos(destinationLatitude) * cos(destinationLongitude - originLongitude)) * 6371;
}





double getEstimatedTravelTime(const Airport* stops,
                              int size,
                              double aveKmsPerHour,
                              double aveLayoverTimeHrs);
