#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <algorithm>

using namespace std;
int choice = 0;


void PrintData(int pTotal, int dCard) {
	cout << "\nYour total is " << pTotal;
	cout << "\nDealer has a  " << dCard << " showing.\n";

}
int getCard() {
	return rand() % 10 + 2;

}

void turn(int ptotal, char choice, bool stay) {
	if (choice == 'H' || choice == 'h') {
		if ((ptotal += getCard()) >= 21) {
			cout << "Your total is " << ptotal;
			stay + true;
		}
		return;
	}
	stay = true;
}
int main() {
	bool stay;
	char (NULL) ; 
	

	while (true) {
		cout << "============================";
		stay = false;

		srand(time(0));
		int dCard = getCard();
		int pTotal = getCard() + getCard();
		int dTotal = dCard + getCard();


		while (!stay) {

			PrintData(pTotal, dCard);
			cout << "[H]it or [S]tay?\n ";
			cin >> choice;
			turn(pTotal, choice, stay);

		}

		stay = false;
		cout << "\nIt is now the dealer's turn\n ";

		while (dTotal <= 21 && !stay) {
			if (dTotal >= 17)
				stay = true;
			else
				dTotal += getCard();
		}

		cout << "\n\nThe player has " << pTotal
			<< "\nThe dealer has " << dTotal << "\n\n";

		if (((21 - pTotal)) < ((21 - dTotal))) {
			cout << "The player wins!\n";
		}
		else {
			cout << "The Dealer wins!\n";
		}
	}
	return 0;
}