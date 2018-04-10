/*******
**
** Author: Gary, Richard
** Assignment : Project 00
** Course : CS555 C++ For Programmers
** Term : Spring, 2018
** School : City University of Seattle
**
*******/
#include <string>
using namespace std;
class Student
{
    private:
        int ID;
        string name;
        double GPA; 
        char gender;
    public:
        Student();
        Student(int ID, string name, double GPA, char gender);
        void setStudent(int ID, string name, double GPA, char gender);
        int getID();
        string getName();
        double getGPA();
        char getGender();
        void print();
};