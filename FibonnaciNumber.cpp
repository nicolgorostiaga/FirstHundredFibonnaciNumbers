#include <iostream>

using namespace std;
void firstHundred(int previousNumber, int nextNumber);
int main(){

	int previousNumber = 0;// initiate first Fibonnaci number
	int nextNumber = 1;// initiate second Fibonnaci number
	firstHundred(previousNumber,nextNumber);
}
//*******************************************************************
void firstHundred(int previousNumber, int nextNumber){
	cout <<previousNumber<< " ";
	cout <<nextNumber<< " ";
	for(int loop = 1; loop < 98; loop++)// loop init.(1)+loop limit(97)+ previousNumber(1)+nextNumber(1)=100
	{
		int FibonnaciNumber = nextNumber + previousNumber;
		previousNumber = nextNumber;
		nextNumber= FibonnaciNumber;
		cout << FibonnaciNumber<< " ";
	}
}
