/*
This header file documents the constructors, methods, and variables used within the parent and child classes.
*/

#pragma once
#ifndef Character_H
#define Character_H

#include <string>
using namespace std;

// Main enemy class
class Character {

	// Public data
public:
	// Constructors
	Character();
	Character(string N, string L);
	~Character();

	// Methods
	string getName();
	void setName(string);
	string getLegion();
	void setLegion(string);
	void display();

	// Protected data
protected:
	// Variables
	string name;
	string legion;
};

// Vampire class
class Vampire : public Character {

	// Public data
public:
	// Constructors
	Vampire();
	Vampire(string N, string L, string M, int S);

	// Methods
	string getMagic();
	void setMagic(string M);
	int getSpeed();
	void setSpeed(int S);
	void display();

	// Private data
private:
	// Variables
	string magic;
	int speed;
};

// Gnome class
class Gnome : public Character {

	// Public data
public:
	// Constructors
	Gnome();
	Gnome(string N, string L, int P, string W);

	// Methods
	int getPower();
	void setPower(int P);
	string getWeapon();
	void setWeapon(string W);
	void display(); 
	void display(bool details);

	// Private data
private:
	// Variables
	string weapon;
	int power;
};

#endif
