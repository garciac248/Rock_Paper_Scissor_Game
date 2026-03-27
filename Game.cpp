//Rock Paper Scissors Game
// By: Carlos Garcia

#include<iostream>
#include <cstdlib>

using namespace std;


int main()
{
	cout << "**************************************************" << endl;
	cout << "Rock Paper Scissors" << endl;
	cout << "**************************************************" << endl;

	srand(time(NULL));
	unsigned int choice;
	int computer;
	
	char again='y';

	//
	while (again == 'y')
	{
		
		
			//User's Selection
			cout << "Select your choice" << endl;
			cout << "1.Rock" << endl;
			cout << "2.Paper" << endl;
			cout << "3.Scissors" << endl;
			cout<<endl;
			cout << "Selection: ";
			cin >> choice;

			cout << endl;

			//Computer's random selection 
			computer = (rand() % 3) + 1;
			if (computer == 1)
			{
				cout << "Computer throws Rock" << endl;
			}
			else if (computer == 2)
			{
				cout << "Computer throws Paper" << endl;
			}
			else if (computer == 3)
			{
				cout << "Computer throws Scissors" << endl;
			}

			//Game outcome will determine if the user won, lost or if it is a draw.
			// Each case will ask the user if they would like to keep on playing.
			
			
			//1= rock : 2= paper : 3= scissors
			
			//Draw
			if (choice == computer)
			{
				
				cout << "Draw!";
				cout << endl;
				cout << "Do you wat to play again? (y/n)" << endl;
				cin >> again;
			}
			//choise = rock | computer= paper
			else if (choice == 1 && computer == 2)
			{
				
				cout << "You Lose!" << endl;
				cout << endl;
				cout << "Do you wat to play again? (y/n)" << endl;
				cin >> again;
			}
			//choice= paper | computer= rock
			else if (choice == 2 && computer == 1)
			{
				
				cout << "You Win!" << endl;
				cout << endl;
				cout << "Do you wat to play again? (y/n)" << endl;
				cin >> again;
			}
			//choice= rock | computer = scissors
			else if (choice == 1 && computer == 3)
			{
				
				cout << "You Win!" << endl;
				cout << endl;
				cout << "Do you wat to play again? (y/n)" << endl;
				cin >> again;
			}
			//choice= scissors | computer= rock
			else if (choice == 3 && computer == 1)
			{
				
				cout << "You Lose!" << endl;
				cout << endl;
				cout << "Do you wat to play again? (y/n)" << endl;
				cin >> again;
			}
			//choice= paper | computer= scissors
			else if (choice == 2 && computer == 3)
			{
				
				cout << "You Lose!" << endl;
				cout << endl;
				cout << "Do you wat to play again? (y/n)" << endl;
				cin >> again;
			}
			//choice= scissors | computer= paper
			else if (choice == 3 && computer == 2)
			{

				cout << "You Win!" << endl;
				cout << endl;
				cout << "Do you wat to play again? (y/n)" << endl;
				cin >> again;
			}
		
	}
	return 0;
}