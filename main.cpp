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

// IMPLEMENTAR A POSSIBILIDADE DE SALVAR AS STRINGS GERADAS (NA PASTA DE DOWNLOADS POR PADRAO)

int main() {
    bool genAgain = true;
    while (genAgain = true) {
        cout << "Amount of strings to be generated: ";
        int strRemaining;
        cin >> strRemaining;
        cout << "Length of the generated strings: ";
        int strLenght;
        cin >> strLenght;
        system("cls");
        srand(time(0));
        while (strRemaining > 0) {
            // srand(time(0));
            for (int m = 0; m < strLenght; m++) {
                cout << RandomStr();
            }
            strRemaining--;
            cout << endl << endl;
        }

        cout << "Generate more strings? (y/n): ";
        char yesNo;
        cin >> yesNo;
      /* NECESSITA REPARO
      if (cin.fail() || yesNo != 'y' || yesNo != 'n' || yesNo != 'Y' || yesNo != 'N') {
            cin.clear();
            cout << "input errado DEBUGGGG \n";
            cin >> yesNo;
        }
        */
        //bool genAgain = false;
        switch (yesNo) {
        case 'Y': case 'y':
            genAgain = true;
            system("cls");
            break;
        case 'N': case 'n':
            genAgain = false;
            return 1;
        }
        if (genAgain = true) {
            
        }
    }
    return 0;
}