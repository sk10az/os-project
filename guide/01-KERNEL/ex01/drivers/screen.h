/*------------------------------------------------------------------------------
*	Guide:	01-KERNEL
*	File:	ex01 / drivers / screen.h
*	Title:	Заголовочный файл для screen.c
* ------------------------------------------------------------------------------
*	Description:
* ----------------------------------------------------------------------------*/


#define VIDEO_ADDRESS 0xb8000
#define MAX_ROWS 25
#define MAX_COLS 80
// 0x0 == white fg, 0xf == white bg
#define WHITE_ON_BLACK 0x0f

#define REG_SCREEN_CTRL 0x3d4
#define REG_SCREEN_DATA 0x3d5

void write(char character, int col, int row, short attribute_byte);
int	get_cursor_position();
void set_cursor_position(int pos);