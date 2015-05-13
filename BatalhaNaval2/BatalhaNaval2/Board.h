#ifndef BOARD_H
#define BOARD_H

#include "Ship.h"
#include "Bomb.h"

#include<vector>
#include<string>


using namespace std;

class Board
{
public:
	Board();
	Board(const string &filename); // loads board from file 'filename'
	void RemoveShip(const Ship &s);
	bool CanPlaceShip(const Ship &s);
	Ship GetShip(unsigned int shipIndex);
	bool putShip(const Ship &s, int shipIndex); // adds ship to the board, if possible; Adicionei shipIndex por ser conveniente
	void moveShips(); // tries to randmonly move all the ships of the fleet
	int attack(const Bomb &b);
	void Update();
	unsigned int ShipsLeft();
	bool MoveShip(unsigned int shipIndex);
	void display() const; // displays the colored board during the game
	void show() const; // shows the attributes of the board (for debugging)
	// OTHER METHODS, if necessary
	// ...
private:
	int numLines, numColumns; // redundant info �
	vector<Ship> ships; // ships that are placed on the board
	vector<vector<int>> board; // each element indicates
	// the index of a ship in the 'ships' vector
	// (in the range 0..ships.size()-1) ;
	// -1 is used to represent the sea
};
#endif