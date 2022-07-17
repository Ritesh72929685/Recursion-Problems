// *************Sum of natural no. using recursion method ************

#include<iostream>
using namespace std;
int getSum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return (n + getSum(n-1));      // Time complexity = O(n)
}                                  // Auxilary space = O(n)
int main()
{
    int n = 5;
    cout<<getSum(n);
    return 0;
}