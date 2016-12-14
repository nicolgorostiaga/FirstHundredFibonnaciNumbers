public class FirstHundred{
	private int nextNumber = 1;
	private int previousNumber = 0;
//************************************************************************
	public void getFirstHundred(){
		System.out.print(previousNumber + " " + nextNumber+ " ");
		for(int loop = 0; loop <=98; loop++){
			int FibonnaciNumber = nextNumber + previousNumber;
			previousNumber = nextNumber;
			nextNumber = FibonnaciNumber;
			System.out.print(FibonnaciNumber + " ");
		}
	}
//*************************************************************************
	public static void main(String[] args){
		FirstHundred FibonnaciNumber = new FirstHunded();
		FibonnaciNumber.getFirstHundred();
	}
