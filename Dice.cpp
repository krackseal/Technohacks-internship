#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Roll the first die (generate a random number between 1 and 6)
    int die1 = std::rand() % 6 + 1;

    // Roll the second die (generate another random number between 1 and 6)
    int die2 = std::rand() % 6 + 1;

    // Calculate the total sum of the two dice rolls
    int total = die1 + die2;

    // Display the results
    std::cout << "You rolled a " << die1 << " and a " << die2 << " for a total of " << total << std::endl;

    return 0;
}
