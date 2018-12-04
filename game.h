#ifndef GAME
#def GAME

class Game {

    private:
        Board board = Board();
        bool gameover = false;
        bool win = false;


        static void welcomeAnimation();
        static void welcomeDisplay();
        static void mainDisplay();
        static void gameDisplay();

        int getUserChoice();
        bool makeMove();

    public:
        void mainLoop();

};

#endif