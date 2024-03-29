#include "guessing_game.h"

int main() {
    Dealer dealer;
    cout << "Welcome to the Number Guessing Game!" << endl;

    string playerName;
    cout << "Enter your name: ";
    cin >> playerName;
    Player player(playerName);

    bool guessedCorrectly = false;
    while (!guessedCorrectly) {
        player.makeGuess();
        int guess = player.getGuess();
        guessedCorrectly = dealer.checkGuess(guess);
    }

    return 0;
}
