#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x, y, count = 0;
    cin >> x >> y;
    if (x >= y) {
        cout << 0;
        return 0;
    }
    while (x < y) {
        x += 10;
        count++;
    }
    cout << count;
    return 0;
}