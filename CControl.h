#pragma once



class CControl {

public:

	void printMenu();
	Serial _com;

public:
	CControl();
	~CControl();
	void init_com(int comport);
	bool get_data(int type, int channel, int &result);
	bool set_data(int type, int channel, int val);

};