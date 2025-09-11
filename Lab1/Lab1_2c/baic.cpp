#include <iostream>
using namespace std;

int f2(int x) {
if (x < 10)
return 2 * x;
else if (x < 2)
return -x;
else
return 2 * x;
}

int main()
{
    int a;
    cin >> a;
    cout << f2(a) << endl;
    return 0;
}