#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double fMass;
    double eMass;
    double isp;
    cout << "isp" << endl;
    cin >> isp;
    cout << "full mass" << endl;
    cin >> fMass;
    cout << "empty mass" << endl;
    cin >> eMass;
    cout << isp*9.8*log(fMass/eMass);
    return 0;

}
