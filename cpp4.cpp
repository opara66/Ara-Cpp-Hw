#include <iostream>
using namespace std;

int main() 
{
    double p, q;
    char Operator;
    cin >> p >> q >> Operator;
    switch (Operator) {
        case '+': cout << p + q; break;
        case '-': cout << p - q; break;
        case '*': cout << p * q; break;
        case '/': if (q != 0) cout << p / q; else cout << "Division by zero; undefined"; break;
        default: cout << "Invalid operator";
    }
    return 0;
}
