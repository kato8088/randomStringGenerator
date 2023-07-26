/*
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

static const char AlphaNumeric[] = "0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
int Lenght = sizeof(AlphaNumeric) - 1;

char RandomStr() {
    return AlphaNumeric[rand() % Lenght];
}

int main() {
    bool genAgain = true;
    while (genAgain = true) {
        cout << "Amount of strings to be generated: ";
        int strRemaining;
        cin >> strRemaining;
        cout << "Length of the generated strings: ";
        int strLenght;
        cin >> strLenght;
        system("clear");
        srand(time(0));
        while (strRemaining > 0) {
            // srand(time(0));
            for (int m = 0; m < strLenght; m++) {
                cout << RandomStr();
            }
            strRemaining--;
            cout << endl << endl;
        }
        char yesNo;
        cout << "Generate more strings? (y/n): ";
        cin >> yesNo;

        switch (yesNo) {
        case 'Y': case 'y':
            genAgain = true;
            system("clear");
            break;
        case 'N': case 'n':
            genAgain = false;
            return 1;
        }
    }
    return 0;
}
*/