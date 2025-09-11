//
//  main.cpp
//  COMSC-210 | Lab 6: Dynamic Arrays & Functions I | Guo An Wang
//  IDE used: Xcode
//  Created by Guo An Wang on 9/10/25.
//

#include <iostream>
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
//return: none
void sumArray(double *arr, int SIZE);

const int WIDTH = 5;

int main(int argc, const char * argv[]) {
    const int SIZE = 5;
    double *dArray = nullptr;
    dArray = new double[SIZE];
    //enterArrayData(dArray,SIZE)
    //outputArrayData(dArray,SIZE)
    //sumArrray(dArray,SIZE)
    return 0;
}

void enterArrayData(double *arr, int SIZE){
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << set(WIDTH) << "> Element #" << i << ": ";
        
    }
}
