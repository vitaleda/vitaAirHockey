#ifndef DRAW_H
#define DRAW_H

#include <psp2/types.h>

#define SCREEN_W 960
#define SCREEN_H 544

void init_video();
void end_video();
void swap_buffers();
void clear_screen();
void *gpu_alloc(SceKernelMemBlockType type, unsigned int size, unsigned int alignment, unsigned int attribs, SceUID *uid);
void draw_pixel(uint32_t x, uint32_t y, uint32_t color);
void draw_rectangle(uint32_t x, uint32_t y, uint32_t w, uint32_t h, uint32_t color);
void draw_circle(uint32_t x, uint32_t y, uint32_t radius, uint32_t color);

void font_draw_char(int x, int y, uint32_t color, char c);
void font_draw_string(int x, int y, uint32_t color, const char *string);
void font_draw_stringf(int x, int y, uint32_t color, const char *s, ...);

#endif