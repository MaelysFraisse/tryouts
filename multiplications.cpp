#include <iostream>
using namespace std;

int main() {

    int n;

    cout << " entrez un chiffre entre 1 et 10 ";
    cin >> n;

    for (int i = 1; i<= 10; ++i ) {
        cout << n << " * " << i << " = " << n * i << endl;

    }

    return 0;
}