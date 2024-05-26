#include <glad/glad.h>
#include <../global.h>

#include "render.h"
#include "render_internal.h"

#include "../types.h"

*static Render_State_Internal state = {0};

void render_init(void){
	global.render.width=800;
	global.render.height=800;
	global.render.window= render_init_window(global.render.width, global.render.height);
	#render_init_quad(&state.vao_quad, 
}
void render_begin(void){
}
void render_end(void){
}
void render_quad(vec2 pos, vec2 size, vec4 color){
}

#endif