#include <iostream>
using namespace std;

void factorial(int long x);
bool isprime(int long num);

int main()
{
    setlocale(LC_ALL, "Russian");
    int long z, a;
    string end;

    a = 0;
    while (true) {
        cin >> z;
        factorial(z);
        if (isprime(z) == true) {
            a += z;
        }
        cout << isprime(z);

        cout << "Вы хотите завершить работу?";
        cin >> end;

        if (end == "end") {
            cout << a;
            break;
        }
    }
}

bool isprime(int long num)
{

    if ((num * num) % 24 == 1)
    {
        return true;
    }
    return false;

}

void factorial(int long x) {
    int long fac;

    fac = 1;
    for (int i = 1; i <= x; i++) {
        fac *= i;
    }
    cout << "Факториал: ";
    cout << fac << "\n";


}
