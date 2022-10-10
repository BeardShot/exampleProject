#include <iostream>
#include "Roster.hpp"
using namespace std;
//using std::endl;

int main()
{
    cout << "Course: C867 Scripting and Programming - Applications\n" << "Programming Language in use: C++\n" << "ID: 010055686\n" << "Name: Derrick Lewis" << std::endl << std::endl;

    //long string to parse
    const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Lewis,Derrick,dlew390@wgu.edu,30,20,18,25,SOFTWARE"
    };

    const int studentDataTable = 5;//sets array size
    Roster roster;//creates repo using default parameterless constructor; everything set to 0

    for (int i = 0; i < studentDataTable; i++) roster.parse(studentData[i]);
    cout << "Displaying all students:" << std::endl;
    roster.printAll();
    cout << std::endl;
    //display all students

    cout << "Displaying all software students:" << std::endl;
    roster.printByDegreeType(SOFTWARE);
    cout << std::endl;
    //display all students in the software degree program

    cout << "Displaying invalid email addess: " << std::endl;
    roster.printInvalidEmails();
    cout << std::endl;
    //display all students with an incorrectly formatted email address

    cout << "Displaying average days per class:" << std::endl;
    for (int i = 0; i < studentDataTable; i++)
    {
        roster.printAverageDays(roster.classRosterArray[i]->getID());
    }
    cout << std::endl;
    //display the average number of days each student spends in 3 classes

    cout << "Remove student A3." << std::endl;
    roster.removeStudentByID("A3");
    cout << std::endl;
    //remove student A3 and print all remaining students

    cout << "Remove student A3." << std::endl;
    roster.removeStudentByID("A3");
    cout << std::endl << std::endl;
    //throw an error when A3 not found

}