#ifndef _SDL_H_
#define _SDL_H_ 1

#include <stdio.h>

int sdl_init( void );
void sdl_free( void );
void sdl_frame_delay( int frame_rate );
//void sdl_clear( void );
void sdl_swap( void );
int sdl_hat_dir_value( int direction );
void sdl_focus( void );

#endif

