#include <iostream>
#include "funcs.h"

// add functions here

//Task A. Is divisible?
bool isDivisibleBy(int n, int d){
    if(n % d){
        return true;
    }
    return false;
};

//Task B. Is a prime?
bool isPrime(int n){
    for(int i = 2; i < n-1; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}


//Task C. Next prime
int nextPrime(int n){
    int counter = n;
    while(true){
        counter++;
        if(isPrime(counter) == 1){
            break;
        }
    }
    return counter;
}


//Task D. Count primes in range
int countPrimes(int a, int b){
    
}



//Task E. Is a twin prime?



//Task F. Next twin prime



//Task G. Largest twin prime in range

