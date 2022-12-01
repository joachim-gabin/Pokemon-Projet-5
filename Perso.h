#pragma once
#include <iostream>
#include <string>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

#include "const.h"

class Perso
{
	public:
		Perso(std::string nom_texture, int x, int y);
		~Perso();
        int GetX();
        int GetY();

		void move();
		char animation(char direction);
		char pause(char last_direction);
		char last;
		int x;
		int y;
        int walls[1800] = { 0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1694, 1695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1834, 1835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 5078, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 5079, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 0, 0, 0, 0, 774, 775, 776, 777, 774, 775, 776, 777, 0, 0, 1684, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 0, 0, 0, 0, 914, 915, 916, 917, 914, 915, 916, 917, 634, 635, 636, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 1054, 1055, 1056, 1057, 1054, 1055, 1056, 1057, 1054, 1055, 1056, 1057, 774, 775, 776, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 0, 0, 0, 1684, 0, 0, 321, 322, 323, 0, 0, 0, 914, 915, 916, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 3789, 3789, 3789, 3790, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1826, 1827, 1054, 1055, 1056, 4798, 4799, 4799, 4799, 5079, 0, 0, 0, 0, 0, 0, 0, 1694, 1695, 0, 0, 0, 0, 0, 0, 0, 10868, 10869, 10870, 10871, 0, 0, 0, 0,
        0, 3790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4938, 4939, 4939, 4939, 4658, 0, 0, 0, 0, 0, 0, 0, 1834, 1835, 0, 0, 0, 0, 5078, 4799, 4799, 11008, 11009, 11010, 11011, 4799, 4799, 5079, 0,
        3650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1834, 1835, 0, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4659, 4660, 4939, 4939, 11148, 11149, 11150, 11151, 4939, 4939, 4658, 0,
        3650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4798, 4799, 4799, 4800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 1694, 1695, 0, 0, 0, 0, 0, 0, 0, 5078, 4799, 4800, 0, 0, 11288, 11289, 11290, 11291, 0, 0, 4658, 0,
        3650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4938, 4939, 4939, 4940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 1834, 1835, 0, 0, 0, 0, 0, 0, 0, 4660, 4939, 4940, 0, 0, 11428, 11429, 11430, 11431, 0, 0, 4658, 0,
        3650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4798, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4799, 4800, 0, 0, 0, 0, 11568, 11569, 11570, 11571, 0, 0, 4658, 0,
        3650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4938, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4939, 4940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0,
        3650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0,
        3650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4518, 4519, 4519, 4520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0,
        3650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0,
        3650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0,
        0, 3510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 0, 0, 0, 0, 1826, 1827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1697, 1698, 1699, 4658, 0,
        0, 0, 3509, 3509, 3509, 3510, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 4660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1697, 1698, 1699, 1838, 1839, 4658, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 5358, 4519, 4520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1681, 0, 0, 0, 0, 0, 0, 0, 0, 1837, 1838, 1839, 1826, 1827, 4658, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 0, 0, 4660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1685, 4518, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 5359, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 0, 0, 4660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1694, 1695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3098, 0, 1682, 1683, 1825, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 0, 0, 4660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1834, 1835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1825, 0, 1684, 1682, 1683, 4658, 0, 1694, 1695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 0, 0, 5358, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 4519, 5359, 0, 1834, 1835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1694, 1695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1834, 1835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1694, 1695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1694, 1695, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1834, 1835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1834, 1835, 0, 0, 0,
        0, 0, 0, 0, 0, 3650, 0, 0, 0, 0, 0, 0, 4658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		
		sf::Sprite sprite();

	private:
		sf::Texture texture_perso;
		sf::Sprite sprite_perso;

};