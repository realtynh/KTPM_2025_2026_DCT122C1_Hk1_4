#include <iostream>
#include <cmath>
using namespace std;

int f3(int x) {
if (log(x * x * cos(x)) < 3 * x)
return 2 * x;
else
return 2 * x;
}

int main()
{
    int a;
    cin >> a;
    cout << f3(a) << endl;
    return 0;
}