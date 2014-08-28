/*
Michael Evans
C++ Programming
March 12, 2012

Create a dice betting game.
*/

#include <iostream> //allows program to output data to the screen
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std; //allows me to use the cout command

int main()
{
    srand ( time (NULL) );
    int total = 500;
    int bet;
      
      cout <<"Bet 0 if you don't want to play anymore." << "\n";
      cout << "Place your bet! $";
      cin >> bet;
      cout << "\n";
      
    while (bet != 0 && total != 0)
    {
              int computerDieOne = rand() % 6 + 1;
              int computerDieTwo = rand() % 6 + 1;
              int userDie = rand() % 12 + 1;
              int computerTotal = computerDieOne + computerDieTwo;

          if (bet > total)
          {
               cout << "The number you entered for your bet is too high" << "\n\n";
               cout << "Place your bet! $";
               cin >> bet;
          }
          else if (userDie > computerTotal)
          {
               total = total + bet;
               cout << "User Dice roll is " << userDie << "\n";
               cout << "Computer Dice roll is " << computerTotal << "\n";
               cout << "Your total so far $" << total << "\n\n";
               cout << "Place your bet! $";
               cin >> bet;
          }
          else if (userDie < computerTotal)
          {
               total = total - bet;
               cout << "User Dice roll is " << userDie << "\n";
               cout << "Computer Dice roll is " << computerTotal << "\n";
               cout << "Your total so far $" << total << "\n\n";
               cout << "Place your bet! $";
               cin >> bet;
          }
          else if (userDie = computerTotal)
          {
               if (userDie > 7)
               {
                    total = total + bet;
                    cout << "User Dice roll is " << userDie << "\n";
                    cout << "Computer Dice roll is " << computerTotal << "\n";
                    cout << "Your total so far $" << total << "\n\n";
                    cout << "Place your bet! $";
                    cin >> bet;
               }
               else if (userDie < 7)
               {
                    total = total - bet;
                    cout << "User Dice roll is " << userDie << "\n";
                    cout << "Computer Dice roll is " << computerTotal << "\n";
                    cout << "Your total so far $" << total << "\n\n";
                    cout << "Place your bet! $";
                    cin >> bet;
               }
          }
    }
         cout << "Game over, your total winnings is $" << total << "\n\n";    
	
    system("PAUSE"); // pauses the program
}
