#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
    return (n1 == 0 || n2 == 0) ? n1 + n2 : (n1 % n2 == 0) ? n2
                                                           : gcd(n2, n1 % n2);
}
int main()
{
    long n, v1 = 0, ans = 0;
    cin >> n;
    long box[n];
    for (int i = 0; i < n; i++)
    {
        cin >> box[i];
        v1 = gcd(v1, box[i]);
    }
    for (int i = 0; i < n; i++)
        ans += box[i] / v1;
    cout << ans;
    return 0;
}