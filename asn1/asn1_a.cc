#include <iostream> 
#include <stdlib.h>
using namespace std; 
unsigned long long fib(int n);
unsigned long long fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 
  
int main () 
{ 
    for(int i = 0; i <= 10; i++){
        cout << "Fib(" << i*5 << "): " << fib(i*5) << "\n";
    }
    return 0; 
} 
//Goran Curguz 250914767 gcurguz@uwo.ca
