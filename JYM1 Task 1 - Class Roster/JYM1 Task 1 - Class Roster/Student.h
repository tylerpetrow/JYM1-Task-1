#pragma once
#ifndef STUDENTH
#define STUDENTH
#include <iostream>		//for input and output operations like "cout" and "cin"
#include <string>       //provides the string class and related functions
#include <cstring>		//provides many functions for string manipulation	


#include "Degree.h"

using std::string;

static const int ARR_SIZE = 3;

class Student {

private:
	string id;
	string first;
	string last;
	string email;
	int age;
	int courseDays[ARR_SIZE];
	DegreeProgram program;

public:

	//Constructors
	Student();
	Student(string id, string first, string last, string email, int age, int* courseDays[ARR_SIZE], DegreeProgram program);

	//Setters
	void SetId(string userid);
	void SetFirst(string userfirst);
	void SetLast(string userlast);
	void SetEmail(string useremail);
	void SetAge(int userage);
	void SetCourseDays(int* days);
	void SetProgram(DegreeProgram userprogram);

	//Getters
	string GetId() const;
	string GetFirst() const;
	string GetLast() const;
	string GetEmail() const;
	int GetAge() const;
	const int* GetCourseDays() const;	
	DegreeProgram GetProgram() const;

	void print();
};
#endif