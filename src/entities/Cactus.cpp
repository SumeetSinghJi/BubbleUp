/*
    Author: Sumeet Singh
    Dated: 14/02/2024
    Minimum C++ Standard: C++11
    Purpose: Subclass Definition file
    License: MIT License
*/


#include "../../headers/entities/Cactus.hpp"

Cactus::Cactus(const std::string name, int x, int y, int width, int height, int health, std::string collisionSoundString, const std::vector<std::string> &walkingTextures) : Obstacle(name, x, y, width, height,  health, collisionSoundString, walkingTextures) {}
