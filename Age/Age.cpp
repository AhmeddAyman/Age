#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_24
// Validate Age.

int ReadAge()
{
    int Age;
    cout << "Please Enter your Age ?" << endl;
    cin >> Age;

    return Age;
}

bool ValidateNumberInRange(int Number, float From, float To)
{
    return (Number >= From && Number <= To);
}

void PrintResult(int Age)
{
    if (ValidateNumberInRange(Age,  18, 45))
        cout << Age << " is a Valid Age \n";
    else
        cout << Age << " is a inValid Age \n";
}

int main()
{
    
    PrintResult(ReadAge());
    return 0;
}
