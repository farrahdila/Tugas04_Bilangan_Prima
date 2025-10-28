#include <iostream>
using namespace std;

int main() 
{
    int n, faktor;
   
    while (true) { 
        cout << "Masukkan bilangan: ";
        cin >> n;

        if (n == 0) {
            cout << "Program berhenti." << endl;
            break; 
        }

        faktor = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                faktor++;
        }

        if (faktor == 2)
            cout << n << " adalah bilangan prima." << endl;
        else
            cout << n << " bukan bilangan prima." << endl;

        cout << endl;
    }

    return 0;
}
