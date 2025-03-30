#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cout << "Enter the three angles of the triangle: ";
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && (a + b + c == 180))
        cout << "The triangle is valid";
    else
        cout << "The triangle is not valid";
    return 0;
}
