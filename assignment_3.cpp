//============================================================================
// Name        : assignment_3.cpp
// Author      : Cole Dudley
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*************** Trip Inputs **********************
Airline: Southwest Airlines

Trip 1
San Francisco, CA to Phoenix, AZ - Flight 2531
1307
626

Trip 2
Chicago, IL to Las Vegas, NV - Flight 2785
3052
1022

Trip 3
Orlando, FL to Houston, TX - Flight 525
1697
752

Distance from Monterey, CA to Monterrey, MX
3929
**************************************************/

int main() {

   //define strings for outputs
   string question1 = "What airline are you analyzing? ";
   string question2 = "Description and flight number of any leg? ";
   string question3 = "How many miles is the trip (round trip)? ";
   string question4 = "Cost of round trip flight? ";
   string question6 = "If a route between Monterey, CA and Monte"
         "rrey, Mexico were added, the estimated cost would be: ";
   string dashesLeft = "--------------------- ";
   string dashesRight = " -------------------";
   string tripHeader = "Trip";
   string results = "Results";
   string dollarsPerMileText = "Average dollars per mile for Alaska: ";
   string summary1 = "flight: ";
   string summary2 = "price: ";
   string summary3 = "miles: ";

   //define strings for inputs
   string airlineName, tripDescription, tripMiles, tripCost,
      dollarsPerMile, estimatedCost;

   //define stuff for errors
   string errorGeneral = "There is an error. Please revise your"
         " inputs.";
   bool error1, error2, error3, error4;

   //define numbers
   double totalMiles, totalCost, estimatedCostNum,
      tripCostNum, tripMilesNum, dollarsPerMileNum;
   const double m2mDistanceNum = 3929;

   // define error values
   const double airlineNameMin = 2;
   const double tripDescriptionMin = 4;
   const double tripMilesMin = 20;
   const double tripCostMin = 1;

   // Ask user for airline
   cout << question1;
   getline(cin,airlineName);

   // Trip 1
   cout << dashesLeft + tripHeader + " 1" + dashesRight << endl;
   cout << question2;
   getline(cin,tripDescription);
   cout << question3;
   getline(cin,tripMiles);
   cout << question4;
   getline(cin,tripCost);
   cout << airlineName + " " + summary1 + tripDescription << endl;
   cout << summary2 + "$" + tripCost + " " + summary3 + tripMiles << endl;
   istringstream(tripMiles) >> tripMilesNum;
   istringstream(tripCost) >> tripCostNum;
   error1 = (airlineName.length() <= airlineNameMin);
   error2 = (tripDescription.length() <= tripDescriptionMin);
   error3 = (tripMilesNum <= tripMilesMin);
   error4 = (tripCostNum <= tripCostMin);
   if (error1 || error2 || error3 || error4)
   {
      cout << errorGeneral << endl;
      return 0;
   }
   totalMiles = tripMilesNum;
   totalCost = tripCostNum;

   //Trip2
   cout << dashesLeft + tripHeader + " 2" + dashesRight << endl;
   cout << question2;
   getline(cin,tripDescription);
   cout << question3;
   getline(cin,tripMiles);
   cout << question4;
   getline(cin,tripCost);
   cout << airlineName + " " + summary1 + tripDescription << endl;
   cout << summary2 + "$" + tripCost + " " + summary3 + tripMiles << endl;
   istringstream(tripMiles) >> tripMilesNum;
   istringstream(tripCost) >> tripCostNum;
   error1 = (airlineName.length() <= airlineNameMin);
   error2 = (tripDescription.length() <= tripDescriptionMin);
   error3 = (tripMilesNum <= tripMilesMin);
   error4 = (tripCostNum <= tripCostMin);
   if (error1 || error2 || error3 || error4)
   {
      cout << errorGeneral << endl;
      return 0;
   }
   totalMiles = totalMiles + tripMilesNum;
   totalCost = totalCost + tripCostNum;

   //Trip 3
   cout << dashesLeft + tripHeader + " 3" + dashesRight << endl;
   cout << question2;
   getline(cin,tripDescription);
   cout << question3;
   getline(cin,tripMiles);
   cout << question4;
   getline(cin,tripCost);
   cout << airlineName + " " + summary1 + tripDescription << endl;
   cout << summary2 + "$" + tripCost + " " + summary3 + tripMiles << endl;
   istringstream(tripMiles) >> tripMilesNum;
   istringstream(tripCost) >> tripCostNum;
   error1 = (airlineName.length() <= airlineNameMin);
   error2 = (tripDescription.length() <= tripDescriptionMin);
   error3 = (tripMilesNum <= tripMilesMin);
   error4 = (tripCostNum <= tripCostMin);
   if (error1 || error2 || error3 || error4)
   {
      cout << errorGeneral << endl;
      return 0;
   }
   totalMiles = totalMiles + tripMilesNum;
   totalCost = totalCost + tripCostNum;

   //Display average price per mile
   cout << dashesLeft + results + dashesRight << endl;
   dollarsPerMileNum = totalCost/totalMiles;
   ostringstream cnvrt;
   cnvrt << dollarsPerMileNum;
   dollarsPerMile = cnvrt.str();
   cout << dollarsPerMileText + " $" + dollarsPerMile << endl;

   //Display estimated cost for Monterey to Monterrey
   estimatedCostNum = dollarsPerMileNum * m2mDistanceNum;
   ostringstream cnvrt2;
   cnvrt2 << estimatedCostNum;
   estimatedCost = cnvrt2.str();
   cout << question6 + "$" + estimatedCost << endl;

	return 0;
}

/***************Working Output**********************
What airline are you analyzing? Southwest Airlines
--------------------- Trip 1 -------------------
Description and flight number of any leg? San Francisco, CA to Phoenix, AZ -
   Flight 2531
How many miles is the trip (round trip)? 1307
Cost of round trip flight? 626
Southwest Airlines flight: San Francisco, CA to Phoenix, AZ - Flight 2531
price: $626 miles: 1307
--------------------- Trip 2 -------------------
Description and flight number of any leg? Chicago, IL to Las Vegas, NV - Flight
   2785
How many miles is the trip (round trip)? 3052
Cost of round trip flight? 1022
Southwest Airlines flight: Chicago, IL to Las Vegas, NV - Flight 2785
price: $1022 miles: 3052
--------------------- Trip 3 -------------------
Description and flight number of any leg? Orlando, FL to Houston, TX - Flight
   525
How many miles is the trip (round trip)? 1697
Cost of round trip flight? 752
Southwest Airlines flight: Orlando, FL to Houston, TX - Flight 525
price: $752 miles: 1697
--------------------- Results -------------------
Average dollars per mile for Alaska:  $0.396301
If a route between Monterey, CA and Monterrey, Mexico were added, the
   estimated cost would be: $1557.07
*****************************************************/

/***************Error - Airline name too short **********************
What airline are you analyzing? S
--------------------- Trip 1 -------------------
Description and flight number of any leg? San Francisco, CA to Phoenix, AZ -
Flight 2531
How many miles is the trip (round trip)? 1307
Cost of round trip flight? 626
S flight: San Francisco, CA to Phoenix, AZ - Flight 2531
price: $626 miles: 1307
There is an error. Please revise your inputs.
*****************************************************/

/***************Error - Trip 1 description too short **********************
What airline are you analyzing? Southwest Airlines
--------------------- Trip 1 -------------------
Description and flight number of any leg? S
How many miles is the trip (round trip)? 1307
Cost of round trip flight? 626
Southwest Airlines flight: S
price: $626 miles: 1307
There is an error. Please revise your inputs.
*****************************************************/

/***************Error - Trip 2 cost too small **********************
What airline are you analyzing? Southwest Airlines
--------------------- Trip 1 -------------------
Description and flight number of any leg? San Francisco, CA to Phoenix, AZ -
Flight 2531
How many miles is the trip (round trip)? 1307
Cost of round trip flight? 626
Southwest Airlines flight: San Francisco, CA to Phoenix, AZ - Flight 2531
price: $626 miles: 1307
--------------------- Trip 2 -------------------
Description and flight number of any leg? Chicago, IL to Las Vegas, NV -
Flight 2785
How many miles is the trip (round trip)? 3052
Cost of round trip flight? 0
Southwest Airlines flight: Chicago, IL to Las Vegas, NV - Flight 2785
price: $0 miles: 3052
There is an error. Please revise your inputs.
*****************************************************/

/***************Error - Trip 3 miles too small **********************
What airline are you analyzing? Southwest Airlines
--------------------- Trip 1 -------------------
Description and flight number of any leg? San Francisco, CA to Phoenix, AZ -
Flight 2531
How many miles is the trip (round trip)? 1307
Cost of round trip flight? 626
Southwest Airlines flight: San Francisco, CA to Phoenix, AZ - Flight 2531
price: $626 miles: 1307
--------------------- Trip 2 -------------------
Description and flight number of any leg? Chicago, IL to Las Vegas, NV -
Flight 2785
How many miles is the trip (round trip)? 3052
Cost of round trip flight? 1022
Southwest Airlines flight: Chicago, IL to Las Vegas, NV - Flight 2785
price: $1022 miles: 3052
--------------------- Trip 3 -------------------
Description and flight number of any leg? Orlando, FL to Houston, TX -
Flight 525
How many miles is the trip (round trip)? 1
Cost of round trip flight? 752
Southwest Airlines flight: Orlando, FL to Houston, TX - Flight 525
price: $752 miles: 1
There is an error. Please revise your inputs.
*****************************************************/
