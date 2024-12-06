//Lab 11-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
//Function prototypes
double getaverage(double arr[], double size);
double getlowest(double arr[], int size);
int main()
{
   double finish_times[5];
    double average_time = 0.0;
    double lowest_time = 0.0;
    int index = 0;
    cout << "Enter 5 finish times: " << endl;
    while(index < 5){
        cin >> finish_times[index];
        index++;
    }
    //int size = sizeof(finish_times)/sizeof(finish_times[0]);
    average_time = getaverage(finish_times, sizeof(finish_times)/sizeof(finish_times[0]));
    lowest_time = getlowest(finish_times, sizeof(finish_times)/sizeof(finish_times[0]));
    std::cout << fixed << setprecision(1) << endl;
    std::cout << "Your average time is: " << average_time << endl;
    std::cout << "Your lowest time is: " << lowest_time << endl;
    return 0;
}//end of main function    
// Functions
double getaverage(double arr[], double size){
    double total = 0.0;
    double average = 0.0;
    int index = 0;
    while(index < size){
        total += arr[index];
        index++;
    }
    average = total / size;
    return average;
}
double getlowest(double arr[], int size){
    std::sort(arr, arr + size);
    return arr[0];
}
