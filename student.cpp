# Assignment1

#include "StudentDemo.h"
StudentDemo::StudentDemo(void)
{
}
StudentDemo::~StudentDemo(void)
{
}

#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student s;
    int ID;
    string name;
    double GPA; 
    char gender;

    cout << "Enter ID ";
    cin >> ID;
    cout << "Enter name ";
    cin >> name;
    cout << "Enter GPA ";
    cin >> GPA;
    cout << "Enter gender ";
    cin >> gender;
    s.setStudent(ID, name, GPA, gender);
   
	cout << "Student ID:" << s.getID() <<endl;
	cout << "Student name:" << s.getName() <<endl;
	cout << "Student GPA:" << s.getGPA() <<endl;
	cout << "Student gender:" << s.getGender() <<endl;
	system("pause");
    return 0;
}
// student1 add new code
