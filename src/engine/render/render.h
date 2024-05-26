#ifndef RENDER_H
#include RENDER_H

#include <SDL2/SDL.h>
#include <linmath.h>

#include "../types.h"

typedef struct render_state {
	SDL_Window *window;
	f32 width;
	f32 height;

} Render_State;

static Render_State_Internal state = {0};

void render_init(void);
void render_begin(void);
void render_end(void);
void render_quad(vec2 pos, vec2 size, vec4 color);

#endif