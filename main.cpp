#include <iostream>


#include "funcs.h"

int main()
{
  std::cout << "Task A. Is divisible?" << std::endl;
  std::cout << isDivisibleBy(10, 2) << std::endl;
  std::cout << isDivisibleBy(39, 2) << std::endl;
  std::cout << "\n";

  std::cout << "Task B. Is a prime?" << std::endl;
  std::cout << isPrime(3) << std::endl;
  std::cout << isPrime(10) << std::endl;
  std::cout << "\n";

  std::cout << "Task C. Next prime" << std::endl;
  std::cout << nextPrime(21) << std::endl;
  std::cout << nextPrime(13) << std::endl;
  std::cout << "\n";

  std::cout << "Task D. Count primes in range" << std::endl;
  std::cout << countPrimes(5, 92) << std::endl;
  std::cout << countPrimes(27, 39) << std::endl;
  std::cout << "\n";

  std::cout << "Task E. Is a twin prime?" << std::endl;
  std::cout << isTwinPrime(3) << std::endl;
  std::cout << isTwinPrime(28) << std::endl;
  std::cout << "\n";

  std::cout << "Task F. Next twin prime" << std::endl;
  std::cout << nextTwinPrime(67) << std::endl;
  std::cout << nextTwinPrime(29) << std::endl;
  std::cout << "\n";

  std::cout << "Task G. Largest twin prime in range" << std::endl;
  std::cout << largestTwinPrime(9, 21) << std::endl;
  std::cout << largestTwinPrime(32, 65) << std::endl;
  std::cout << "\n";

  return 0;
}
