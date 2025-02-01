#include "../includes/Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *new_zombie = new Zombie(name); // Se crea un objeto Zombie en el heap y va a ser necesario liberar memoria
	//checks de new?
	return (new_zombie);
}
