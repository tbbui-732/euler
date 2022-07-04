#include <iostream> 
#include <math.h>

// The prime factors of 13195 are 5, 7, 13, and 29.
// What is the largest prime factor of 600851475143?

bool is_prime(int number);
int largest_prime(int number);

int main(){
    return 0; 
}

bool is_prime(int number){
    if (number <= 1) { return false; } // checks for 0 and 1
    if (number == 2 || number == 3) { return true; } // checks for 2 and 3
    if (number % 2 == 0 || number % 3 == 0) { return false; }
    for (int i = 5; i < sqrt(number); i++){
        if (number % i == 0 || number % (i + 2) == 0) { return false; }
    }

    return true; 
}

int largest_prime(int number){
    std::vector<int> pf; 

    for (int i = 5; number != 1; i++){
        if (is_prime(i) && number % i){
            number = number / i;
            pf.push_back(i);
        }
    }
}
