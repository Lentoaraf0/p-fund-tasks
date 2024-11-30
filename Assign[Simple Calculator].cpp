#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int choice, n1, n2;
    do
    {
        cout << "\t***MENU***" << endl;
        cout << "\t1-Addition" << endl;
        cout << "\t2-Subtraction" << endl;
        cout << "\t3-Multiplication" << endl;
        cout << "\t4-Division" << endl;
        cout << "\t5-Exit" << endl;
        cin >> choice;
        switch (choice)
        {

        case 1:
            cout << "Enter 1st number" << endl;
            cin >> n1;
            cout << "Enter 2nd number" << endl;
            cin >> n2;
            cout << "Your Answer is " << n1 + n2 << endl;

            break;
        case 2:
            cout << "Enter 1st number" << endl;
            cin >> n1;
            cout << "Enter 2nd number" << endl;
            cin >> n2;
            cout << "Your Answer is " << n1 - n2 << endl;
            break;
        case 3:
            cout << "Enter 1st number" << endl;
            cin >> n1;
            cout << "Enter 2nd number" << endl;
            cin >> n2;
            cout << "Your Answer is " << n1 * n2 << endl;
            break;
        case 4:
            cout << "Enter 1st number" << endl;
            cin >> n1;
            cout << "Enter 2nd number" << endl;
            cin >> n2;
            cout << "Your Answer is " << n1 / n2 << endl;
            break;
        case 5:
            cout << "Thanks for using our calculator";
            break;
        default:
            cout << "Enter between 1 to 4 " << endl;
        }
    } while (choice != 5);
    return 0;
}