#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


    if (a == NULL) {
      char *result = (char *)malloc(sizeof(char) * 7);
      strcpy(result, "(null)");
      return result;
    }

    int n = strlen(a->gpsId) + strlen(a->type) + strlen(a->name)+ 10 +10+
          10  + strlen(a->city)+strlen(a->countryAbbrv);

    // create a result string
    char *str = (char *)malloc(sizeof(char) * n);

    // format the student into the temporary string
    sprintf(str, "%s, %s, %s, %lf, %lf,%d, %s,%s)", strlen(a->gpsId) ,
             strlen(a->type),  (strlena->name),
          latitude, longitude, elevationFeet,strlen(a->city),strlen(a->countryAbbrv) ;

    // return the result
    return str;


}


double getAirDistance(const Airport* origin, const Airport* destination);


double getEstimatedTravelTime(const Airport* stops,
                              int size,
                              double aveKmsPerHour,
                              double aveLayoverTimeHrs);
