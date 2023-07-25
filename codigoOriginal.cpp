/*#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

static const char AlphaNumeric[] = "0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
int MyLen = sizeof(AlphaNumeric) - 1;

char RandomStr() {
    return AlphaNumeric[rand() % MyLen];
}


int main() {
    srand(time(0));
    int l;
    cout << "Enter string length: ";
    cin >> l;
    for (int m = 0; m < l; m++) {
        cout << RandomStr();
    }
    cout << "\n";
    return 1;
}
*/