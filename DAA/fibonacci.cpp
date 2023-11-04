#include<iostream>
using namespace std;

//Non - Recursive method 
void fibonacci(int n){
    int prev = 0;
    int curr = 1;
    int next;
    cout <<"0,1";
    for(int i = 0; i < n; i++){
        next = prev + curr;
        prev = curr;
        curr = next;
        cout <<","<<next;
        }
        cout <<endl;
}
int count = 0;
//Recursive method
int rFibonacci(int n){
    count++;
    if(n < 0) return 0;
    if(n == 0 || n == 1) return 1;
    return rFibonacci(n-1)+rFibonacci(n-2);
}

int main(){
    int a = 5;
    cout << "Fibonacci using iterative method : ";
    fibonacci(a);
    cout <<"Fibonacci using recursive method : " << rFibonacci(10) << endl;
    
    return 0;
}