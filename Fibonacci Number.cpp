#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int previous1, previous2, current, counter=3, nthFibonacci;
	
	cout << "Please enter number 1 : " ;
	cin >> previous1;
	
	cout << "Please enter number 2 : " ;
	cin >> previous2;
	
	cout << endl;
	cout << "The first two Fibonacci numbers are " << previous1 << " and " << previous2 << endl << endl;
	
	cout << "Please enter the position of the desired Fibonacci number : " ;
	cin >> nthFibonacci;
	cout << endl << endl;
	
	if (nthFibonacci==1) // a1 = previous1
	current = previous1;
	
	else if (nthFibonacci==2) // a2 = previous2
	current = previous2;
	
	else // a3 = a2 + a1
	current = previous2 + previous1;
	
	
	
	while (counter <= nthFibonacci) // nthFibonacci >= 3
    {
	    current = previous2 + previous1; // to calculate the nth Fibonacci number until loop stop
	    previous1 = previous2;
	    previous2 = current;
	    counter++;
	}
	
	cout << "The " << nthFibonacci << " th Fibonacci number is " << current << endl;
 

    return 0;
}


