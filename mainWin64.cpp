#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

static const char AlphaNumericSimple[] = "0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
int LenghtSimple = sizeof(AlphaNumericSimple) - 1;

static const char AlphaNumericComplex[] = "0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz"
"!#$";
int LenghtComplex = sizeof(AlphaNumericComplex) - 1;

char RandomSimple() {
    return AlphaNumericSimple[rand() % LenghtSimple];
}

char RandomComplex() {
    return AlphaNumericComplex[rand() % LenghtComplex];
}

int main() {
start:
    char simpleComplexStr;
    cout << "Generate simple or complex strings? (s/c): ";
    cin >> simpleComplexStr;
    cout << "Amount of strings to be generated: ";
    int strRemaining;
    cin >> strRemaining;
    cout << "Lenght of the generated strings: ";
    int strLenght;
    cin >> strLenght;
    srand(time(0));
    switch (simpleComplexStr)
    {
    case 's':
        system("cls");
        while (strRemaining > 0)
        {
            for (int m = 0; m < strLenght; m++) {
                cout << RandomSimple();
            }
            strRemaining--;
            cout << endl << endl;
        };
        break;
    case 'c':
        system("cls");
        while (strRemaining > 0)
        {
            for (int m = 0; m < strLenght; m++) {
                cout << RandomComplex();
            }
            strRemaining--;
            cout << endl << endl;
        };
        break;
    default:
        system("cls");
        cin.clear();
        cout << "Wrong input! Try again! \n";
        goto start;
        break;
    }
    cout << "Generate more strings? (y/n): ";
    char yesNo;
    cin >> yesNo;
    bool genAgain;
    switch (yesNo)
    {
    case 'y': case 'Y': case 's': case 'S':
        genAgain = true;
        system("cls");
        goto start;
        break;
    default:
        return 1;
    }
    return 0;
}