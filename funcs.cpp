#include <iostream>
#include "funcs.h"

// add functions here

//Task A. Is divisible?
bool isDivisibleBy(int n, int d){
    if(n % d == 0){
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
    int num = a;
    int counter = 0;
    while(a < num <= b){
        if(isPrime(num) == true){
            counter++;
        }else if(num >= b){
            break;
        }
        num++;
    }
    // for(int i = a; i < b; i++){
    //     if(isPrime(i) == true){
    //         counter++;
    //     }
    // }
    return counter;
}



//Task E. Is a twin prime?
bool isTwinPrime(int n){
    if(isPrime(n) == true){
        if(isPrime(n-2) == true || isPrime(n+2) == true){
            return true;
        }
    }
    return false;
}

//Task F. Next twin prime
int nextTwinPrime(int n){
    int counter = n;
    while(true){
        if(isTwinPrime(nextPrime(counter) + 2) == true || isTwinPrime(nextPrime(counter) - 2)){
            return nextPrime(counter);
            break;
        }
        counter = nextPrime(counter);
    }
    return -1;
}


//Task G. Largest twin prime in range
int largestTwinPrime(int a, int b){
    int largestPrime = -1;
    int counter = a;
    while(true){
        if(nextTwinPrime(counter) > b){
            break;
        }else if(nextTwinPrime(counter) > largestPrime){
            largestPrime = nextTwinPrime(counter);
            counter = nextTwinPrime(counter);
        }
    }
    return largestPrime;
}
