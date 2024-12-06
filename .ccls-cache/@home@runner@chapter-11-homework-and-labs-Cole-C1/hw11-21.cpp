//Introductory21.cpp - Displays the average stock price
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

double getaverage(double arr[], double size);

int main()
{
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	//double total = 0.0;
	double average = 0.0;
average = getaverage(prices, sizeof(prices)/sizeof(prices[0]));

	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function
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
