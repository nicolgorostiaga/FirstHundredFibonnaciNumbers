using System;

namespace FibonnaciNumbers{
	class FirstHundred{
		static private void getFirstHundred(int previousNumber, int nextNumber){
			Console.Write("{0} {1}", previousNumber, nextNumber);
			for(int loop = 1; loop < 98; loop++)// loop init.(1)+loop limit(97)+previousNumber(1)+nextNumber(1)=100
			{
				int FibonnaciNumber = nextNumber + previousNumber;
				previousNumber = nextNumber;
				nextNumber= FibonnaciNumber;
				Console.Write(" "+FibonnaciNumber);
			}
		}
		Static void Main(string[] args){
			int nextNumber = 1;
			int previousNumber = 0;
			FirstHundred.getFirstHundred(previousNumber, nextNumber);
		}
	}
}
