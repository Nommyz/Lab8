#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{
	double loan,interest,amount,rate,newb,total; 
	int i;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;
    cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
    newb=loan;
    
    for(i=1;i>0;i++)
    {
        
        loan = newb;
        interest = rate/100*loan;
	    total = loan+interest; 
        if(total<amount)
        {
            amount = total;
        }
        newb = total - amount;
        if(newb==total) break;
        
    
    cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << amount;
	cout << setw(13) << left << newb;
	cout << "\n";	
    }
	return 0;
}     
    