#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    return (!a || !b) ? a + b : (a % b == 0) ? b
                                             : gcd(b, a % b);
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}