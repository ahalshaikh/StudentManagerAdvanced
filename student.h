#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

using namespace std;

class student
{
private:
string firstName;
string lastName;
vector<double> grade;
public:
void setName(string first, string last);
string fullName();
student();
void addGrade(double);
double getScore();
};

#endif
