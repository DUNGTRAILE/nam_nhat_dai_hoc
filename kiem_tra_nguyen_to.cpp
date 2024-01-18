#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    int sqrtN = sqrt(n);
    for (int i = 3; i <= sqrtN; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int reverseNumber(long int n)
{
    int reversedNumber = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}

bool isPrimeAndReverseIsPrime(long int n)
{
    int reversedNumber = reverseNumber(n);
    return isPrime(n) && isPrime(reversedNumber);
}

int main()
{
    int n;
    cin >> n;
    long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // std::cout << "Nhập một số nguyên dương: ";
    for (int j = 0; j < n; j++)
    {
        if (isPrimeAndReverseIsPrime(a[j]))
        {
            std::cout << "Yes" << endl;
        }
        else
        {
            std::cout << "No" << endl;
        }
    }

    return 0;
}
