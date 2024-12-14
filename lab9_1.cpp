#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double L,P,A,PreB,In,T,NewB ;
    int year = 1;
	cout << "Enter initial loan: ";
	cin >> L;
	cout << "Enter interest rate per year (%): ";
	cin >> P;
	cout << "Enter amount you can pay per year: ";
	cin >> A;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	PreB = L ;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	cout << fixed << setprecision(2);
	//you can change input argument of 'setprecision()' to see the effect
	while (PreB > 0) {
	    In = PreB * (P/100);
	    T = PreB + In;
	    if (T < A) {
	        A = T;
	  
	    }
	    NewB = T - A ;
	
	cout << setw(13) << left << year; 
	cout << setw(13) << left << PreB;
	cout << setw(13) << left << In;
	cout << setw(13) << left << T;
	cout << setw(13) << left << A;
	cout << setw(13) << left << NewB;
	cout << "\n";	
	
	PreB = NewB;
	year++;
	}
	
	
	
	return 0;
}