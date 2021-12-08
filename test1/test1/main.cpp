#include <iostream>
using namespace std;

int A1 = 5;
int d = 2;
int n ;

int check_value() {
    while (true)
    {
        cout << "Which member of the sequence to find?" << endl;
        int Aj;
        cin >> Aj;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Try againe" << endl;
        }
        else {
            cin.ignore(32767, '\n');
            return Aj;
        }
    }
}

int main()
{
    while (true)
    {
        n = check_value();
        if (n == 1) {
            cout << "You num: " << A1 << endl;
        }
        else if (n == 2) {
            cout << "You num: " << A1 + d << endl;
        }
        else if (n <= 0 ){
            cout << "Try againe" << endl;
        }
        else {
            cout << "You num: "<< A1 + (n - 1) * d << endl;
        }
    }
}
