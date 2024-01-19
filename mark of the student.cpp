#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i = 0; i < 1000; i++) {
        string reg_no;
        cout << "Enter the Reg No: ";
        cin >> reg_no;

        string name;
        cout << "Enter your Name: ";
        cin >> name;

        int age;
        cout << "Enter your age: ";
        cin >> age;

        float total_marks;
        cout << "Enter the total marks: ";
        cin >> total_marks;

        float avg;
        avg = total_marks / 5;
        cout << "Your avg marks: " << avg << endl;
    }

    return 0;
}
