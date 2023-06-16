#include "stdbool.h"

int isPalindrome(int x)
{
    if (x < 0)  return false;

    int tmp = x;
    int reverseNumber = 0;
    while (tmp / 10 != 0)
    {
        reverseNumber = reverseNumber * 10 + (tmp % 10);
        tmp /= 10;
    }
    reverseNumber = reverseNumber * 10 + tmp;
    if (reverseNumber == x) return true;
    else return false;
}
