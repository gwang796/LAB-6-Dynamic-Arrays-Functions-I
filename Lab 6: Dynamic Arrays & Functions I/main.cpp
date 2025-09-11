//
//  main.cpp
//  COMSC-210 | Lab 6: Dynamic Arrays & Functions I | Guo An Wang
//  IDE used: Xcode
//  Created by Guo An Wang on 9/10/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

//function enterArrayData has user enter in data
//argument: double array
//return: none
void enterArrayData(double *arr, int SIZE);

//function outputArrayData prints inputted data
//argument: double array
//return: none
void outputArrayData(double *arr, int SIZE);

//function sumArray adds all inputted data together
//argument: double array
//return: double
double sumArray(double *arr, int SIZE);

const int WIDTH = 15;

int main(int argc, const char * argv[]) {
    const int SIZE = 5; //declare SIZE
    //declaring dynamic double array
    double *dArray = nullptr;
    dArray = new double[SIZE];
    
    enterArrayData(dArray,SIZE); //call enterArrayData
    outputArrayData(dArray,SIZE); //call outputArrayData
    double totalSum = sumArray(dArray,SIZE); //call sumArray
    cout << "Sum of values: " << totalSum << endl; //printing sum
    delete[] dArray;
    return 0;
}

void enterArrayData(double *arr, int SIZE){
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << setw(WIDTH) << "> Element #" << i + 1 << ": ";
        cin >> *(arr + i);
    }
    cout << "Data entry complete" << endl;
}

void outputArrayData(double *arr, int SIZE){
    cout << "Outputting array elements: ";
    cout << fixed << setprecision(1); //shows .0 at end if whole number
    for (int i = 0; i < SIZE; i++) {
        cout << " " <<*(arr + i);
    }
    cout << endl;
}

double sumArray(double *arr, int SIZE){
    double total = 0.0;
    for (int i = 0; i < SIZE; i++) {
        total += *(arr + i);
    }
    return total;
}
