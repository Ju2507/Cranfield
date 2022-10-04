#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Publication
{

private:
	string name;
	int refNo;
	bool isOnLoan;


public :
	void borrowPublication();
	void returnPublication();


	bool available;
	string addPub;
	void displayAllPub();
	void displayDetails();
	void displayPub();
	void displayOnLoan();
	void displayNumType(); 

};

