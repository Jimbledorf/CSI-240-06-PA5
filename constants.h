#ifndef CONST_H
#define CONST_H

#include <iostream>
#include <string>

using namespace std;

const int  NUM_OF_TIME_SLOT = 28;
const string USER_FILE = "users.txt";

enum MAIN_MENU_OP { PATIENT_OP = 1, DOCTOR_OP, SCHEDULER, LOGOUT, EXIT };

#endif