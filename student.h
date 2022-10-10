#ifndef Student_hpp
#define Student_hpp

#pragma once
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "Degree.h"
using std::string;
using std::cout;
//using std::endl;

class Student
{
public://need to define constant
    const static int daysArray = 3;//the size of an array must be constant; each student has 3 course t\lengths in days

private://accessible to object only
    string studentID;
    string fName;
    string lName;
    string email;
    int age;
    int days[daysArray];
    DegreeType degreeType;//enum; customary to give type names upper camel case, lower camel case for instances (variables)
public://methods
    Student();//parameterless constructor - sets to default values - always include
    Student(string studentID, string fName, string lName, string email, int age, int days[], DegreeType degreeType);//full constructor
    ~Student();//destructor

    //getters or accessors
    string getID();
    string getTitle();
    string getFName();
    string getLName();
    string getEmail();
    int getAge();
    int* getDays();
    DegreeType getDegreeType();//array name and pointer are similar but an array name is always a constant and a pointer is only a constant if declared as such

    //setters or mutators
    void setID(string studentID);
    void setFName(string FName);
    void setLName(string LName);
    void setEmail(string email);
    void setAge(int age);
    void setDays(int days[]);
    void setDegreeType(DegreeType dt);;//do not use int since this is a special data type

    static void printHeader(); //displays header for data

    void print();//displays "this" data (specific book/student for PA project)
};



#endif 


