#pragma once
#ifndef ROSTERH
#define ROSTERH
#include <string>       //provides the string class and related functions
#include <cstring>		//provides many functions for string manipulation
#include "Student.h"

using std::string;

class Roster {
public:
	Student* classRosterArray[5] = { 0 };

	void add(string studentID, string firstName, string lastName, string emailAddress, int age,
		int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

	void remove(string studentID);

	void printAll();

	void printAverageDaysInCourse(string studentID);

	void printInvalidEmails();

	void printByDegreeProgram(DegreeProgram degreeProgram);

};


#endif