# Pixel Engine
My goal is create sort a game engine similar to [Processing](https://processing.org/) and [P5.js](https://p5js.org/). \
So, i want to PixelEngine to be a platform for creative coding, and make it easy to draw and reder in a screen using the power of C++.

## Features
For now we are using [SDL2](https://www.libsdl.org/index.php), but maybe the project can be refactored to use [OpenGL](https://www.opengl.org/).\
This repositorie contain a FlappyBird game and few simples classes, similar to a game engine, Like Entity and Texture classes, the plan is to make everthing portable and independent as possible and have a clear main file to conentrate all fancy stuff the creator want to make in only in the main in a render method. 

## Build
You need `SDL2`, `SDL2_Image` and `SDL2_ttf` instaled, then:

    make

## Run 
Simple run:

    make run

If you are trying to play with it, developing something you also can do this to compile and run:

    make dev
    