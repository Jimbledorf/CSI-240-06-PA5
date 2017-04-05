/*
Author: Ashton Allen
Class : CSI-240-06
Assignment : PA5 Part 2
Date Assigned : 3/28/17
Due Date : 3/31/17 at 9:30am
Description : This is the backend of a program
A brief description of the purpose of the program.
Certification of Authenticity :
I certify that this is entirely my own work, except where I have given fully - documented references to the work of others.I understand the definition and consequences of plagiarism and acknowledge that the assessor of this assignment may, for the purpose of assessing this assignment :
-Reproduce this assignment and provide a copy to another member of academic staff; and / or
-Communicate a copy of this assignment to a plagiarism checking service(which may then retain a copy of this assignment on its database for the purpose of future plagiarism checking)
*/

#ifndef _PATIENT_H
#define _PATIENT_H

#include <string>
#include <fstream>
#include "person.h"
using namespace std;

const string DATA = "users.txt";

class Patient : public Person
{
private:
	string mDoctorId;

public:
	Patient();
	Patient(string id, string name, string address, string phoneNumber, string doctorId);
	Patient(const Patient& obj);
	~Patient();
	string getDoctorId();
	void setDoctorId(string id);
	virtual void display();
	friend istream& operator>>(istream& input, Patient& obj);
	friend ostream& operator<<(ostream& output, Patient& obj);
};
#endif // !PATIENT_H

