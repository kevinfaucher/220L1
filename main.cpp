/* 
 * File:   main.cpp
 * Author: Kevin Faucher
 *
 * Created on February 12, 2017, 7:41 PM
 */

#include <cstdlib>
#include <iostream>
//
using namespace std;
/*
 * 
 */


int isPrime(int num);
int loopTable(int n);
int collatz();
int leapyear();
int stars();
int recurPrime(int num);
int p3loop();
int reccurloop(int n, int i);
int reccuryear(int year);
int collatz2(int num);
int callcollatz2();

int main() {

    std::cout << "Hello World!\n"; //Coding Problem 1
    cout << isPrime(11) << endl;
    loopTable(10);
    reccurloop(10, 1);
    cout << p3loop() << endl;
    cout << collatz() << endl;
    leapyear();
    stars();
    callcollatz2();
    recurPrime(10);
    reccurloop(10, 1);
    reccuryear(2017);

}

/*
 Problem 2
 * Takes an integer and checks to see if it is a prime number
 */
int isPrime(int num) {
    int i = 2;
    while (i <= (num - 1)) {
        if (num % i == 0) {
            return true;
            break;
        } else {
            return false;
            break;
        }
        i++;
        //
    }
}

/*
 Problem 3
 * Takes an integer and prints the multiplication table
 */
int loopTable(int n) {
    for (int i = 1; i <= 12; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}

/*
 Problem 4
 * takes no inputs and loops with a function call to the LoopTable function to
 * print out multiplication tables.
 */
int p3loop() {
    int i = 1;
    for (i; i < 13; i++) {
        loopTable(i);
    }
}

/*
 Problem 5
 * Collatz conjecture formula that takes user input and returns the total loops
 * of the function.
 */
int collatz() {
    int usr;
    int count = 0;
    cout << "Please enter a natural positive number: ";
    cin >> usr;
    while (usr != 1) {
        if (usr % 2 == 0) {
            count += 1;
            usr = usr / 2;

        } else {
            count += 1;
            usr = (3 * usr) + 1;

        }
    }
    return count;
}//collatz

//Problem 6

/*
 Takes no inputs
 * Uses 2017 as a starting integer and uses conditional expressions in a loop
 * to evaluate if a year meets leap-year conditions.  The loop terminates after
 * "400 years" have been checked.
 */

int leapyear() {
    int year;
    year = 2017;
    for (year; year + 400; year++) {
        if (year == 2417) {
            return 0;
        }
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    cout << year << "\n";
                }

            } else {
                cout << year << "\n";
            }
        }


    }
}
//Problem 7

/*
 Takes user input to print out a x of stars.  Done with nested loops.
 */
int stars() {
    int xsize;
    cout << "\nEnter the size of the 'x'" << endl;
    cin >> xsize;
    for (int rows = 1; rows <= xsize; rows++) {
        for (int axis = 1; axis <= xsize; axis++) {
            if (rows == axis || axis == (xsize + 1) - rows) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;

}
//Problem 8

/*
 collatz2 takes a integer as input and returns the total function loops
 */
int collatz2(int num) {
    int count = 0;
    while (num != 1) {
        if (num % 2 == 0) {
            cout << "Collatz Conjecture is still working" << endl;
            count += 1;
            num = num / 2;
        }//if
        else {
            cout << "Collatz Conjecture is still working" << endl;
            count += 1;
            num = (3 * num) + 1;
        }//else
    }//while
    return count;
}

/*
 callcollatz2 takes user input and uses a loop to call collatz2 with 
 * incrementing return values
 */

int callcollatz2() {
    int upperb;
    int lowerb;
    cout << "Please enter an upper bound: ";
    cin >> upperb;
    cout << "Please enter a lower bound: ";
    cin >> lowerb;
    while (lowerb < upperb) {
        return collatz2(++lowerb);
    }

}
//Prime Number Recursive function
//Problem 9

/*
 takes an integer and uses recursion to check if it is a prime number.
 */
int recurPrime(int num) {
    int divisor;
    divisor = num / 2;
    if (divisor == 1) {
        return true;
    } else {
        if (num % divisor == 0) {
            return false;
        } else {
            divisor = divisor - 1;
            recurPrime(num);
        }
    }
}

//Problem 10

/*
 Uses recursion to print out a multiplication table.
 */
int reccurloop(int n, int i) {
    if (i < 13) {
        cout << n << " * " << i << " = " << n * i << endl;
        return reccurloop(n, i + 1);
    }
    return n;
}

//Problem 11

/*
 Uses recursion to calculate leap years
 */
int reccuryear(int year) {
    if (year < 2417) {

        if ((year % 400 == 0 || year % 100 != 0) &&(year % 4 == 0))
            cout << year << endl;
        return reccuryear(year + 1);
    }




}




