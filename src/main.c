#include "SDL.h"

#define FPS 60

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_VIDEO);

    char appIsRunning = 1;

    SDL_Window *window = SDL_CreateWindow(
        "SDL2Test",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        0);

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    SDL_Event e;
    while (appIsRunning == 1)
    {
        while (SDL_PollEvent(&e))
        {
            switch (e.type)
            {
            case SDL_QUIT:
                appIsRunning = 0;
                break;
            default:
                break;
            }
        }

        float deltaTime = 1.0;
        // update(deltaTime);

        // render();

        // If frames were 30, wait 33 ms before running the loop again
        SDL_Delay(1000 / FPS);
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}