#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double in, per, pay ;
	cout << "Enter initial loan: ";
	cin >> in;
	cout << "Enter interest rate per year (%): ";
	cin >> per;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	double PrevBalance, Interest, Total, Payment, NewBalance;
	int i=1;
	
	while(true){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i;
	
	if(i==1)PrevBalance = in;
	else PrevBalance = NewBalance;
	
	cout << setw(13) << left << PrevBalance;
	
	Interest=PrevBalance*(per/100);
	cout << setw(13) << left << Interest;
	
	Total=PrevBalance+Interest;
	cout << setw(13) << left << Total;
	
	if(Total>pay)
	Payment = pay;
	else Payment = Total;
	cout << setw(13) << left << Payment;
	
	NewBalance = Total-Payment;
	cout << setw(13) << left << NewBalance ;
	cout << "\n";	
	
	    if(NewBalance==0) break;
	    i++;
	}
	return 0;
}