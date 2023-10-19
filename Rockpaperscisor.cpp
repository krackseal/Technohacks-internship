#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator

    int computerChoice = rand() % 3; // Generate a random number between 0 and 2
    string choices[] = { "Rock", "Paper", "Scissors" };

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";
    
    int userChoice;
    cin >> userChoice;

    if (userChoice < 0 || userChoice > 2) {
        cout << "Invalid choice. Please choose 0, 1, or 2." << endl;
        return 1;
    }

    cout << "You chose: " << choices[userChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
