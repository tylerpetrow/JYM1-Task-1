#include <iostream>     //for input and output operations like "cout" and "cin"
#include <string>       //provides the string class and related functions
#include <cstring>      //functions for string manipulation like strlen() or strcopy()

#include "Roster.h"

//using namespace std;
using std::string;

int main() {
	
	//Student Class has ID, First, Last, Email, Age, CourseDays, Program

	
	Roster* school = new Roster;

	school->add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
	school->add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
	school->add("A3", "Jack", "Napoli", "The_lawyer99@yahoo.com", 19, 20, 40, 33, SOFTWARE);
	school->add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
	school->add("A5", "Tyler", "Petrow", "tpetrow@wgu.edu", 25, 19, 40, 70, SOFTWARE);
	
	

	school->printAll();

	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	school->remove("f1");
	school->printAll();
	delete school;

	return 0;
}