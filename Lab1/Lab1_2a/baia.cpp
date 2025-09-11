#include <iostream>
using namespace std;

int f1(int x) {
if (x > 10)
return 2 * x;
else
return -x;
}

int main()
{
    int a;
    cin >> a;
    cout << f1(a) << endl;
    return 0;
}