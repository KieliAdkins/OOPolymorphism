/*
This file documents the getters and setters for parent class Enemy and child classes, Vampire and Gnome.
*/

// Including standard libraries
#include <iostream>
#include <iomanip>
#include "character.h"
using namespace std;

// Parent class default constructor
Character::Character() {}

// Parent class base deconstructor
Character::~Character() {}

// Parent class customized constructor
Character::Character(string N, string L) {
	name = N;
	legion = L;
}

// Getter & setter for Enemy name
string Character::getName() { return name; }
void Character::setName(string N) { name = N; }

// Getter & setter for Enemy health
string Character::getLegion() { return legion; }
void Character::setLegion(string L) { legion = L; }

// Printing the enemy information 
void Character::display() {
	cout << "This character is named " << name << " and belongs to " << legion << " legion." << endl << endl;
}

// Vampire class default constructor
Vampire::Vampire() {}

// Vampire class customized constructor
Vampire::Vampire(string N, string L, string M, int S)
{
	name = N;
	legion = L;
	magic = M;
	speed = S;
}

// Getters & setters for Vampire magic
string Vampire::getMagic() { return magic; }
void Vampire::setMagic(string M) { magic = M; }

// Getters & setters for Vampire speed
int Vampire::getSpeed() { return speed; }
void Vampire::setSpeed(int S) { speed = S; }

// Printing the vampire information
void Vampire::display() {
	cout << name << " the Vampire belongs to " << legion << " legion and can attack with " << magic << " magic with " << speed << " speed." << endl << endl;
}

// Gnome class default constructor
Gnome::Gnome() {}

// Gnome class customized constructor
Gnome::Gnome(string N, string L, int P, string W)
	: Character::Character(N, L)
{
	power = P;
	weapon = W;
}

// Getters & setters for Gnome power
int Gnome::getPower() { return power; }
void Gnome::setPower(int P) { power = P; }

// Getters & setters for Gnome weapon
string Gnome::getWeapon() { return weapon; }
void Gnome::setWeapon(string W) { weapon = W; }

// Printing the gnome information 
void Gnome::display() {
	Character::display();
	cout << name << " the Gnome belongs to  " << legion << " legion and can attack with the " << weapon << " to deal " << power << " damage." << endl << endl;
}

// Printing the gnome information with static polymorphism
void Gnome::display(bool details) {
	Character::display();
	if (details) {
		cout << " He can attack with the " << weapon << " to deal " << power << " damage." << endl << endl;
	}
}

