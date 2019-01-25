/*
This file documents a test build & run of the "Character" OOP program.
*/

#include <iostream>
#include <iomanip>
#include "character.h"
using namespace std;

// Main function
void main()
{
	// Default character constructor
	Character character; 
	character.display();

	// Customized character constructor
	Character character2 = Character("Test", "Test");
	character2.display();

	// Customized vampire constructor
	Vampire vamp1 = Vampire("Dominic", "Adora", "light", 15);
	vamp1.display();

	// Customized gnome constructor
	Gnome gnome1 = Gnome("Romeo", "Mako", 25, "axe");
	gnome1.display(true);

	system("pause");
}

