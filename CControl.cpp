/** CControl.cpp
*
* Simple Controler of things
*
* @author Arbab Ahmed
*
* @version 0.1 -- 24 January 2019
*/


#include "Stdafx.h"
#include "CControl.h"
#include "Client.h"
#include "Server.h"
#include "Serial.h"


void CControl::printMenu() {
	std::cout << "**************************************** \n"
		<< "Embedded System Control \n"
		<< "**************************************** \n\n"
		<< "(A)nalog Read \n"
		<< "(D)igital Read/Write \n"
		<< "(S)ervo Dance \n"
		<< "(B)utton Test \n"
		<< "(Q)uit \n"
		<< "\nCommand:";
}