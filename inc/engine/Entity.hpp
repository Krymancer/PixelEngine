#pragma once

#include <cmath>
#include <engine/LTexture.hpp>
#include <engine/engine.hpp>
#include <vector>

class Entity {
   public:
    Entity() : x(0.0f), y(0.0f) {}
    Entity(float x, float y) : x(x), y(y) {}
    ~Entity() {}
    void init();
    void update();
    void show();
    float x, y;
   private:
    LTexture mTexture;
};