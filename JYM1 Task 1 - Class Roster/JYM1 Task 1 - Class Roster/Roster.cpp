#include "Roster.h"

using std::string;


void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age,
	int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
	int courseDays[ARR_SIZE] = { daysInCourse1,daysInCourse2,daysInCourse3 };
	Student* newStudent = new Student;

	newStudent->SetId(studentID);
	newStudent->SetFirst(firstName);
	newStudent->SetLast(lastName);
	newStudent->SetEmail(emailAddress);
	newStudent->SetAge(age);
	newStudent->SetCourseDays(courseDays);
	newStudent->SetProgram(degreeProgram);

	int size = sizeof(classRosterArray) / sizeof(classRosterArray[0]);
	
	for (int i = 0; i < size; ++i)
	{
		if (classRosterArray[i] == 0)
		{
			classRosterArray[i] = newStudent;
			break;
		}
		
	}

}

void Roster::remove(string studentID)
{

	Student* pointer = new Student;
	int size = sizeof(classRosterArray) / sizeof(classRosterArray[0]); //should return 5
	bool found = false;
	unsigned int i;
	for (i = 0; i < size; i++) 
	{
		pointer = classRosterArray[i];
		if (pointer->GetId() == studentID) 
		{
			classRosterArray[i] = 0;
			found = true;
		}
	}
	if (found == false)
	{
		std::cout << "Error: Student ID Not Found" << std::endl;
	}
}

void Roster::printAll()
{
	int size = sizeof(classRosterArray) / sizeof(classRosterArray[0]); //should return 5
	
	for (int i = 0; i < size; ++i)
	{
	
		if (classRosterArray[i] != 0)
		{
			Student* pointer = new Student;
			pointer = classRosterArray[i];
			pointer->print();
		}
		
	}
	
}

void Roster::printAverageDaysInCourse(string studentID)
{

}

void Roster::printInvalidEmails()
{

}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{

}