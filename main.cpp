/*

    ncurses Game of Life (how original)

    Created by: Marcy Muffins

*/
#include <ncurses.h>

int main() {
   initscr();

   int row, col;
   getmaxyx(stdscr, row, col);

   move(row / 2, col / 2);

   printw("%d x %d", col, row);
   refresh();
   getch();

   endwin();
   return 0;
}