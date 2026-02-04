#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll;
    string name;
public:
    void getData();
    void display();
};
void Student::getData()
{
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter name: ";
    cin >> name;
}
void Student::display()
{
    cout << "Roll Number : " << roll << endl;
    cout << "Name        : " << name << endl;
}

int main()
{
    Student s1;   // Object creation

    s1.getData();
    s1.display();

    return 0;
}

