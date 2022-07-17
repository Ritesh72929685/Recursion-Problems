
//Time Complexity = O(d) where d is the the size of digit
// Auxilary Space = O(d)

#include<iostream>
using namespace std;

int getSum(int n){
    if(n == 0){
        return 0;
    }
    return getSum(n / 10) + n % 10;
    
}
int main(){

    int n = 434;
    cout << getSum(n);
    return 0;
}

