// ********** Print 1 to N number using recursion ***************

/*
#include<iostream>
using namespace std;
void print1toN(int n)
{
    if(n == 0)
    {
        return;
    }
    print1toN(n-1);               // Time complexity = O(n)
    cout<<n<<endl;                 // Auxilary space = O(n)
}
int main()
{
    int n = 5;
    print1toN(n);
    return 0;
}*/

// *************The above code is converted into tail recursion ****************** 

/*#include<iostream>
using namespace std;
void print1toN(int n ,int k)
{
    if(n == 0)
    {
        return;
    }
    cout<<k<<endl;
    print1toN(n-1,k+1);            // Time complexity = O(n)
}                                  // Auxilary space = O(1)
int main()
{
    int n = 5, k = 1;
    print1toN(n,k);
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
#define bool int
bool luckyNo(int n)
{
    int nextPos = n;
    int counter = 2;
    if(counter>n)
    {
        return true;
    }
    if(n % counter == 0)
    {
        return false;
    }
    nextPos -= nextPos/counter;
    counter++;
    return luckyNo(nextPos);
}
int main()
{
    int n = 19;
    cout<<luckyNo(n);
    return 0;
}*/

/*
#include <bits/stdc++.h>
using namespace std;

long long power(int n , int r)
{
 //   int p = 1000000007;
    if(n == 1);
    {
        return 1;
    }
    long long res = n * power(n,r-1);
    return res % 1000000007;
}
int main()
{
    long long n = 12;
    long long r = 21;
    cout<<power(n,r);
    return 0;
}
*/


// Time Complexity = O(n)
// Auxilary Space = O(n)

#include<iostream>
using namespace std;

void print1toN(int n){
    if(n == 0){
        return;
    }
    print1toN(n - 1);
    cout << n << endl;
}
int main(){

    int n = 5;
    print1toN(n);
    return 0;
}