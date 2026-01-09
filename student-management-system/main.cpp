#include <iostream>
using namespace std;

int main() {
    int choice;
    string name;
    int roll;

    while (true) {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Student\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> roll;
            cout << "Student added successfully!\n";
        } 
        else if (choice == 2) {
            cout << "\nStudent Name: " << name;
            cout << "\nRoll Number: " << roll << endl;
        } 
        else if (choice == 3) {
            cout << "Exiting program...";
            break;
        } 
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
