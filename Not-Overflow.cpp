#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long m = (long long)1 << 31;
    // long long m = 2147483648; // using this method works as well, no problem
    cin >> n;
    if ((-m <= n) && (n < m)) {
        cout << "Yes";
    }
    else {cout << "No";}
    return 0;
}