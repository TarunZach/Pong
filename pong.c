#include <stdio.h>
#include "SDL2/SDL.h"

int main()
{
    SDL_InitSubSystem(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow(
        "Pong",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        640,
        480,
        0);

    SDL_Surface *surface = SDL_GetWindowSurface(window);

    // Rectangle 1
    SDL_Rect pl1 = (SDL_Rect){
        40, 40, 40, 200};
    Uint32 color = 0xffffffff;
    SDL_FillRect(surface, &pl1, color);

    // Rectangle 2
    SDL_Rect pl2 = (SDL_Rect){
        560, 200, 40, 200};
    SDL_FillRect(surface, &pl2, color);

    SDL_UpdateWindowSurface(window);

    int running = 1;
    while (running)
    {
    }

    for (int i = 0; i < 500; i++) // 500 iterations at 10ms per iteration
    {
        SDL_PumpEvents();
        SDL_Delay(10);
    }
    return 0;
}
