#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1, num2, total;
    char op;

    cout << "\t\t\t\t\t\t\t" << "Calculator App" << endl << endl;

    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << endl << "Enter an operantion ( + , - , * , / ): " << endl;
    cin >> op;
    cout << endl << "Enter the second number: " << endl;
    cin >> num2;

    if (op == '-')
    {
        total = num1 - num2;
        cout << endl << "Solution: " << total << endl;
    }
    else if (op == '+')
    {
        total = num1 + num2;
        cout << endl << "Solution: " << total << endl;
    }
    else if (op == '*')
    {
        total = num1 * num2;
        cout << endl << "Solution: " << total << endl;
    }
    else if (op == '/')
    {
        total = num1 / num2;
        cout << endl << "Solution: " << total << endl;
    }
    else
    {
        cout << endl << "Syntax Error" << endl;
    }
    
}


