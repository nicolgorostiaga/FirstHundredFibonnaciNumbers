#include <iostream>

using namespace std;
void firstHundred(int previousNumber, int nextNumber);
int main(){

	int previousNumber = 0;// initiate first Fibonnaci number
	int nextNumber = 1; // initiate second Fibonnaci number
	firstHundred(previousNumber,nextNumber);
}
//*******************************************************************
void firstHundred(int previousNumber, int nextNumber){
	cout <<previousNumber<< " ";
	cout <<nextNumber<< " ";
	for(int loop =0; loop <=98; loop++){
		int FibonnaciNumber = nextNumber + previousNumber;
		previousNumber = nextNumber;
		nextNumber= FibonnaciNumber;
		cout << FibonnaciNumber<< " ";
	}
}
