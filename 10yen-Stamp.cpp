/* 
Links to the task hosted on atcoder.jp https://atcoder.jp/contests/abc233/tasks/abc233_a

Problem Statement
Takahashi wants to send a letter to Santa Claus. He has an envelope with an X-yen (Japanese currency) stamp stuck on it.
To be delivered to Santa Claus, the envelope must have stamps in a total value of at least Y yen.
Takahashi will put some more 10-yen stamps so that the envelope will have stamps worth at least Y yen in total.
At least how many more 10-yen stamps does Takahashi need to put on the envelope?

Constraints
X and Y are integers.
1≤X,Y≤1000
 */
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