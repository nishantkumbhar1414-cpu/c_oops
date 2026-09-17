#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string empName;
    float salary;

public:

    // Constructor
    Employee()
    {
        cout << "Employee object created." << endl;
    }

    // Function to accept employee details
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> empName;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to add bonus
    void addBonus()
    {
        float bonus;

        cout << "Enter Bonus: ";
        cin >> bonus;

        salary = salary + bonus;
    }

    // Function to display employee details
    void showData()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Salary: " << salary << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "Employee object destroyed." << endl;
    }
};

int main()
{
    // Creating object
    Employee e1;

    // Calling member functions
    e1.getData();
    e1.addBonus();
    e1.showData();

    return 0;
}