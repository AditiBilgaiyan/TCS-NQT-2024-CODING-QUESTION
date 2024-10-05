// Write a program to find the given number digit sum is multiple of 3 or not.
//For example : N = 123 , =>  1+2+3 => 6  , 6 which is multiple of 3 so output will be TRUE

#include<iostream>
using namespace std;

int main (){
    int n ; 
    cin >> n ;
    int sum = 0;

    while(n){
        int temp = n % 10;
        sum = sum + temp;
        n /= 10;
    }

    if(sum % 3 == 0){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}
