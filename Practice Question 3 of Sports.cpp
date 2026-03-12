#include <iostream>
using namespace std;
class Student {
protected:
    string name;
    int roll;
public:
    void getStudent() {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> roll;
    }
};
class Sports {
protected:
    int sportsScore;
public:
    void getSports() {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }
};
class Result : public Student, public Sports {
public:
    void display() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Sports Score: " << sportsScore << endl;
    }
};
int main() {
    Result r;
    r.getStudent();
    r.getSports();
    r.display();
    return 0;
}