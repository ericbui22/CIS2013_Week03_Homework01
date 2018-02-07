#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int PrintData(int pTotal, int dCard) {
	std::cout << "\nYour total is" << pTotal;
	std::cout << "\Dealer has a " << dcard << "showing.\n";

}
int getCard() {
	return std::rand() % 11 + 2;

}

void turn(int& ptotal, char choice, bool& stay) {
	if (choice == 'H' || choice == 'h') {
		if ((pTotal += getCard()) >= 21) {
			std::cout << "Your total is" << ptotal;
			stay + true;
		}

		return;
	}

	stay = true;
}
int main() {
	bool stay;
	char choice = NULL;

	while (true) {
		std::cout << "============================";
		stay = false;

		std::srand(std::time(0));
		int dCard = getCard();
		int pTotal = getCard() + getCard();
		int dTotal = dCard + getCard();


		while (!stay) {

			printData(pTotal, dCard);
			std::cout << "[H]it or [S]tay?\n ";
			std::cin >> choice;
			turn(pTotal, choice, stay);

		}

		stay = false;
		std::cout << "\nIt is now the dealer's turn\n";

		while (dTotal <= 21 && !stay) {
			if (dTotal >= 17)
				stay = true;
			else
				dTotal += getCard();
		}
		
		std::cout << "\n\nThe player has " << pTotal
			<< "\nThe dealer has " << dTotal << "\n\n";

		if ((std::abs(21 - pTotal)) < (std::abs(21 - dTotal))) {
			std::cout << "The player wins!\n";
		}
		else {
			std::cout << "The Dealer wins!\n";
		}
	}
}