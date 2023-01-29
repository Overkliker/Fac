#include <iostream>
using namespace std;

int main()
{
    int long z;
    while (true) {
        cin >> z;
        if (z == 0) {
            break;
        }
        else {
            factorial(z);
        }
    }
}

void factorial(int long x) {
    int long fac;

    fac = 1;
    for (int i = 1; i <= x; i++) {
        fac *= i;
    }
    cout << fac;
}
