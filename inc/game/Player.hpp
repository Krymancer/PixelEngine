#include <engine/Entity.hpp>
#include <game/Enemy.hpp>

#pragma once

class Player : public Entity{
   public:
    Player();
    ~Player();

    /**
    *  Initilizate the texture
    * 
    *  @returns true if the initialization was sucessfully
    */
    bool init();

    /// Update the player
    void update();

    /// Show the player
    void show();

    /// Make the player jump
    void jump();

    /// Reset player position and stats
    void reset();

    /// Set bird->dead to true;
    void kill();

    /// return false if the bird->dead is true
    bool alive();

    /**
    *  Check if the player collides with a enemy
    * 
    *  @param enemy the enemy to check
    * 
    *  @returns true if collides
    */
    bool collide(Enemy &enemy);

   private:
    LTexture mTexture;

    double velocityY = -9.0;          // Player's velocity along Y, default same as flapped;
    double maxVelocityY = 10.0;       // Max velocity along Y, max descend speed
    double minVelocityY = -8.0;       // Min velocity along X, max ascend speed
    double acclerationY = 1.0;        // Player's downward accleration
    double rotationAngle = -45.0;     // Player's rotation
    double visibleRotation = 0;       // Player's visible rotation
    double velocityRotation = 6.0;    // Angular Speed
    double rotationThreshold = 20.0;  // Rotation Trheshold
    double flappyAccleration = -9.0;  // Player's speed on flapping
    bool flapped = false;             // True when player flaps

    int frame = 0;
    const int FLY_ANIMATION_FRAMES = 3;
    SDL_Rect spritesClips[3];

    bool dead = false;
};