#include <iostream>
#include <vector>
#include "robust.h"
using namespace std;
int checkingPrimes(int n,vector<int> primes);
int primeNumber();
// int muliplyMatricies();
// int genFib();
// int genMatrix();

int main() {
    char selection = 'e';
    std::cout << "Welcome to The Benchmark!\n";
    std::cout << "what test would you like to \n";
    std::cout << "1.\t multiply large predefined matrices \n";
    std::cout << "2.\t Find Prime numbers \n";
    std::cout << "3.\t Fibinatie sequence \n";
    std::cout << "4.\t Gen Random matrices \n";

    std::cin >> selection;
    //this will direct you to the specific test
    switch (selection) {
        case '1':
    //         cout << "your return code is " << muliplyMatricies();
    //         break;
    case '2':
        primeNumber();
        break;
    //     case '3':
    //         genFib();
    //         break;
    //     case '4':
    //         genMatrix();
    //         break;
        default:
            std::cout << "Invalid selection.\n";
            return main();
    }

    //This will exit the program
    cout << "\nIf You would like to exit input 0 if not input anything else";
    cin >> selection;
    if (selection == '0') {
        return 0;
    }else {
        return main();
    }
    return 0;
}

int primeNumber() {
    vector<int> primes;
    int primeToBeTested;
    string maxPrimein;
    cout << "Please enter the limit to generate primes to \n";
    cin >> maxPrimein;
    if(cin.fail()) {
        cin.clear();
        cin.ignore();
        return primeNumber();
    }



}

int checkingPrimes(int n,vector<int> primes,int maxPrime) {
    if (maxPrime<2) {
        return primes.size();
    }else {
        for(int i=2; i<n; i++) {
            if(n%i==0) {
                primes.push_back(i);
                return checkingPrimes(n+1,primes,maxPrime);
            }
        }
    }
}
