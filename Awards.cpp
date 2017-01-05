#include <iostream>
using namespace std;
int main() {
	cout << "****************************************************************************" << endl;
	cout << "                             Congratulations!!                             " << endl;
	cout << "If you are using this program, that means you won the You-Are-Awesome award!" << endl;
	cout << "****************************************************************************" << endl;
	cout << endl;
	cout << "I am sure you are dying to know how much you won, let's compute! " << endl;
	cout << endl;
	//INPUT
	int	numMonths;
	cout << "For How many months did they say you will recieve payments? ";
	cin >> numMonths;
	//PROCESSING AND OUTPUT
	cout << endl;
	cout << "Here are the monthly installment amounts: " << endl;
	cout << endl;
	int payment = 1;
	for (int i = 0; i < numMonths; i++) {
		cout << "Month " << i << ":" << "            " << "$" << payment << endl;
		if (i % 2 == 0) {
			payment = payment * 2;
		}
		else {
			payment = payment * 3;
		}
	}


	system("PAUSE");
	return 0;

}