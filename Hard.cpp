// 3. Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.

#include <bits/stdc++.h>
using namespace std;

int getlen(int n)
{
    if (n == 0)
        return 0;
    int len = 0;

    while (n > 0)
    {
        n = n / 10;
        len++;
    }
    return len;
}
int countDigitOne(int n)
{
    if (n <= 0)
        return 0;

    if (n < 10)
        return 1;

    int len = getlen(n);
    int base = pow(10, len - 1);

    int firstdigit = n / base;
    int rem = n % base;
    int oneInBase = 0;

    if (firstdigit == 1)
    {
        oneInBase = n - base + 1;
    }
    else
    {
        oneInBase = base;
    }

    return oneInBase + firstdigit * countDigitOne(base - 1) + countDigitOne(rem);
}

int main()
{
    int n;
    cin >> n;
    cout << countDigitOne(n) << endl;
    return 0;
}