#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, r = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    if (a < d){
        r = r + (d - a);
    }
    if (b < e){
        r = r + (e - b);
    }
    if (c < f){
        r = r + (f - c);
    }
    cout << r <<endl;
    return 0;
}
