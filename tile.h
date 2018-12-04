
#ifndef TILE
#def TILE

class Tile {

    private:
        char displayCharacter = '';
        bool covered = true;
        bool mine = false;
        int neighboringMineCount = 0;

    public:
        bool setDisplayCharacter(char character);
        char getDisplayCharacter();
        bool isCovered();
        bool containsMine();
        int numberOfNeighbors();

};


#endif