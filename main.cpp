#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float fmass;
    float emass;
    float isp;
    float ev;
    cout << "isp" << endl;
    cin >> isp;
    cout << "full mass" << endl;
    cin >> fmass;
    cout << "empty mass" << endl;
    cin >> emass;
    cout << isp*9.8*log(fmass/emass);
    return 0;

}
