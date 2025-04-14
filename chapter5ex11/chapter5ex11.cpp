/*
file name: chapter5ex11.cpp
programmer: perrin dalgleish
date: 4/13/25
requirements:
    display 2 random numbers
    asks for operation
    ask user to guess correct awners
    use 3 modukes
*/
#include <iostream>
#include <random>
using namespace std;

int operatorselection() // selects the operator
{
    int sel;
    bool cont = 1;
    cout << "Please select yoru desired operator." << endl << "1.  Addition" << endl << "2. Subtraction" << endl << "3. Mutliplication" << endl << "4. Division" << endl;
    do {
        cin >> sel;
        switch (sel)
        {
        case 1:
            return 1;
            cont = 0;
            break;
        case 2:
            return 2;
            cont = 0;
            break;
        case 3:
            return 3;
            cont = 0;
            break;
        case 4:
            return 4;
            cont = 0;
            break;
        default:
            cout << "invalid selecton" << endl;
            break;
        }
    } while (cont == 1);
}

double userguess(double num1, double num2, int op)// recives the users guess
{
    double awnser;
    cout << "What is the answer to: " << endl;
    switch (op)
    {
    case 1:
        cout << num1 << "+" << num2 << endl;
        break;
    case 2:
        cout << num1 << "-" << num2 << endl;
        break;
    case 3:
        cout << num1 << "*" << num2 << endl;
        break;
    case 4:
        cout << num1 << "/" << num2 << endl;
        break;
    }
    cin >> awnser;
    return awnser;
}

bool validaton(double num1, double num2, double userg, int op) // validates that the enterd number is correct
{
    double correct;
    switch (op)
    {
    case 1:
        correct = num1 + num2;
        break;
    case 2:
        correct = num1 - num2;
        break;
    case 3:
        correct = num1 * num2;
        break;
    case 4:
        correct = num1 / num2;
        break;
    }

    if (correct == userg)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    double num1, num2, userg,op;
    bool cont = 1;
    do
    {
        num1 = rand();
        num2 = rand();
        op = operatorselection();
        userg = userguess(num1,num2,op);
        if (validaton(num1, num2, userg, op) == true)
        {
            cout << "YAY! Your got it correct!" << endl;
        }
        else
        {
            cout << "Unforunately that was not correct." << endl;
        }
        cout << "Type 1 to continue. Type 0 to exit." << endl;
        cin >> cont;
    } while (cont == 1);
}

