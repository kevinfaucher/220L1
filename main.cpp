/* 
 * File:   main.cpp
 * Author: Kevin Faucher
 *
 * Created on February 12, 2017, 7:41 PM
 */

#include <cstdlib>
#include <iostream>
//testing github upload
using namespace std;
/*
 * 
 */
int num;

int isPrime(int num);
int loopTable(int n);
int collatz();
int leapyear();
int stars();
int main() {
    std::cout << "Hello World!\n"; //Coding Problem 1
    isPrime(11);
    loopTable(10);
    cout << collatz();
    leapyear();
    stars();
}

/*
 Problem 2
 * Takes an integer and checks to see if it is a prime number
 */
int isPrime(int num) {
    int i = 2;
    while (i <= (num - 1)) {
        if (num % i == 0) {
            cout << ("It's not a prime number");
            break;
        } else {
            cout << ("It's a prime number");
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
 */

/*
 Problem 5
 */
int collatz() {
    int usr;
    cout << "Please enter an integer value: ";
    cin >> usr;
    int count = 0;
    while (usr != 1) {
        if (usr % 2 == 0) {
            count += 1;
            usr = usr / 2;
        }//if
        else {
            count += 1;
            usr = (3 * usr) + 1;
        }//else
    }//while
    return count;
}//collatz

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

int stars()
{
    int xsize;
    cout<< "\nEnter the size of the 'x'" << endl;
    cin >> xsize;
    for(int rows=1;rows<=xsize;rows++){
        for(int axis=1;axis<=xsize;axis++){
            if(rows==axis || axis==(xsize+1)-rows) cout << "*";
            else cout << " ";
        }
        cout<<endl;
    }
    return 0;
 
}