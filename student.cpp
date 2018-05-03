#include <string>
#include "student.h"
#include <vector>

using namespace std;

void student::setName(string first, string last)
{
 firstName = first;

 lastName = last;
}

string student::fullName()
{
 string name = firstName;

 name.append(" ");
 name.append(lastName);

 return name;
}

student::student()
{
 firstName = "";
 lastName = "";
}

void student::addGrade( double Mark )
{
 grade.push_back(Mark);
}

double student::getScore()
{
 double total = 0;

 for(int i = 0; i < grade.size(); i++ )
 {
  total = total + grade[i];
 }
 return total/grade.size();
  
}
