#include <iostream>
using namespace std;

int main() 
{
    int m[5], total = 0, i;
    float avg, percent;
    cout << "Enter marks for the 5 subjects:";
    for (i = 0; i < 5; i++) 
	{
        cin >> m[i];
        total += m[i];
    }
    avg = total / 5.0;
    percent = (total / 500.0) * 100;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << avg << endl;
    cout << "Percentage: " << percent << "%" << endl;
    return 0;
}
