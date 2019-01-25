/** CControl.h
*
* A very simple control class
*
* @author Arbab Ahmed
*
* @version 0.1 -- 24 January 2019
*/

#pragma once

#include "stdafx.h"


class CControl {

public:
	/** Prints main menu
	*
	*
	*/
	void printMenu();

	Serial _com;

public:
	CControl();
	~CControl();

	/** Initiates comport.
	*
	* @param comport the comport MSP is connected to
	*/
	void init_com(int comport);

	/** Writes a string of bytes to the serial port to get data according to type selected
	*
	* @param type
	* @param channel
	* @param result
	*
	* 
	*/
	bool get_data(int type, int channel, int &result);

	/** Writes a string of bytes to the serial port to set data according to type selected
	*
	* @param type
	* @param channel
	* @param result
	*
	*
	*/
	bool set_data(int type, int channel, int val);

};