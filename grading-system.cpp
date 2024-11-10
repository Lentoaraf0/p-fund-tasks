#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[10];     // using array to store student names maximum 10
    float grades[10];     // using array to store student grades
    int studentCount = 0; // to know how many students have been added
    int choice;

    cout << "\t\tSTUDENT GRADE MANAGEMENT SYSTEM\n";

    do
    { // using do while loop for looping this code:
        cout << "\n--- Simple Student Grade System ---\n";
        cout << "1. Add a new student\n";
        cout << "2. Display all students details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        { // using switch to handle choice
        case 1:
        {
            if (studentCount < 10)
            {
                // Add a new student
                cout << "Enter student name: ";
                cin >> names[studentCount]; // if studentCount is 1, it will store the name in names[1] (the first student)

                cout << "Enter student grade (0-100): ";
                cin >> grades[studentCount]; // same as name[studentCount]

                // check if the grade is lesser than 100 or not
                if (grades[studentCount] < 0 || grades[studentCount] > 100)
                { // using || for OR
                    cout << "Invalid grade. Please enter a grade between 0 and 100.\n";
                    grades[studentCount] = 0; // Reset invalid grade
                }

                studentCount++; // Increase the student count after adding a new student
            }
            else
            {
                cout << "Maximum number of students reached.\n";
            }
            break;
        }

        case 2:
        {
            if (studentCount == 0)
            {
                cout << "No students entered yet.\n";
            }
            else
            {
                // display all student details
                cout << "\n--- All Students Details ---\n";
                for (int i = 0; i < studentCount; i++)
                { // using for loop for printing 1 to 10 student data
                    cout << "Student " << i + 1 << ":\n";
                    cout << "Name: " << names[i] << endl;
                    cout << "Grade: " << grades[i] << endl;
                    if (grades[i] >= 50)
                    {
                        cout << names[i] << " Passed!\n";
                    }
                    else
                    {
                        cout << names[i] << " Failed!\n";
                    }
                    cout << "--------------------------\n";
                }
            }
            break;
        }

        case 3:
        {
            cout << "\nExiting the system. Thank you for using the Student Grade Management System!\n"; // 3 for exit
            break;
        }

        default:
        {
            cout << "Invalid Input. Please try again.\n"; // error handling
            break;
        }
        }
    } while (choice != 3);

    return 0;
}
