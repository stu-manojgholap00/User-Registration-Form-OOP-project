#include <iostream>
#include <string>
using namespace std;
// Base Class
class Registration
{
private:
    int regId;
    string name;
    int age;
    string mobile;
    string email;
    string course;

public:
    // Add Registration
    void addRegistration()
    {
        cout << "\nEnter Registration ID: ";
        cin >> regId;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Mobile Number: ";
        cin >> mobile;
        cout << "Enter Email: ";
        cin >> email;
        cout << "Enter Course: ";
        cin >> course;
        cout << "\nRegistration Added Successfully!\n";
    }
        // Display Registration
        void displayRegistration()
    {
        cout << "\n----- Registration Details -----\n";
        cout << "Registration ID : " << regId << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Mobile Number : " << mobile << endl;
        cout << "Email : " << email << endl;
        cout << "Course : " << course << endl;
    }
    // Polymorphism - Function Overloading
    void searchRegistration(int id)
    {
        if (regId == id)
            displayRegistration();
        else
            cout << "\nRegistration ID not found.\n";
    }
    void searchRegistration(string studentName)
    {
        if (name == studentName)
            displayRegistration();
        else
            cout << "\nStudent Name not found.\n";
    }
    // Update Registration
    void updateRegistration()
    {
        cout << "\nEnter New Name: ";
        cin >> name;
        cout << "Enter New Age: ";
        cin >> age;
        cout << "Enter New Mobile Number: ";
        cin >> mobile;
        cout << "Enter New Email: ";
        cin >> email;
        cout << "Enter New Course: ";
        cin >> course;
        cout << "\nRegistration Updated Successfully!\n";
    }
        // Delete Registration
        void deleteRegistration()
    {
        regId = 0;
        name = "";
        age = 0;
        mobile = "";
        email = "";
        course = "";
        cout << "\nRegistration Deleted Successfully!\n";
    }
};
// Derived Class
// Inheritance
class StudentRegistration : public Registration
{
public:
    void showStudentMessage()
    {
        cout << "\nStudent Registration System\n";
    }
};
int main()
{
    // Object
    StudentRegistration r;
    int choice;
    int id;
    string studentName;
    do
    {

        cout << "\n REGISTRATION MANAGEMENT SYSTEM";
        cout << "\n1. Add Registration";
        cout << "\n2. Display Registration";
        cout << "\n3. Search by Registration ID";
        cout << "\n4. Search by Name";
        cout << "\n5. Update Registration";
        cout << "\n6. Delete Registration";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            r.addRegistration();
            break;
        case 2:
            r.displayRegistration();
            break;
        case 3:
            cout << "\nEnter Registration ID: ";
            cin >> id;
            r.searchRegistration(id);
            break;
        case 4:
            cout << "\nEnter Student Name: ";
            cin >> studentName;
            r.searchRegistration(studentName);
            break;
        case 5:
            r.updateRegistration();
            break;
        case 6:
            r.deleteRegistration();
            break;
        case 7:
            cout << "\nThank you!\n";
            break;
        default:
            cout << "\nInvalid choice.\n";
        }
    } while (choice != 7);
    return 0;
}