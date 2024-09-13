#include "game.h"

/**
 * initialize - Initializes the game window
 * @window: pointer to game widow
 * @renderer: Pointer to renderer
 *
 * Return: TRUE on success,
 * FALSE on failure
 */
int initialize(SDL_Window **window, SDL_Renderer **renderer)
{
	if (SDL_Init(SDL_INIT_EVERYTHIN) != 0)
	{
		fprintf(stderr, "%s\n", SDL_GetError());
		return (FALSE);
	}
}
