/*
    Author: Sumeet Singh
    Dated: 14/02/2024
    Minimum C++ Standard: C++11
    Purpose: Subclass Declaration file
    License: MIT License
*/


#pragma once

#include "Obstacle.hpp"

/**
 * @brief Obstacle subclass Cactus on collission blocks movement, destroyable
 *
 */
class Mushroom : public Obstacle
{
public:
    /**
     * @brief default constructor
     */
    Mushroom(const std::string name, int x, int y, int width, int height, int health, std::string collisionSoundString, const std::vector<std::string> &walkingTextures);
};