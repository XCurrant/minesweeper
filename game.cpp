
#include <stdio.h>
#include <stdlib.h>
#include "game.h"

using namespace std;

void Game::mainLoop() {

    while (!this.gameover) {
        Game::gameDisplay();
        index = Game.getUserChoice();
        this.gameover = this.makeMove(index);
        // clear terminal here
    }

    if (this.win) {
        // Celebrate win
    } else {
        // notify of loss
    }

    exit(0);
}