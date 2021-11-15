#include <ncurses.h>
using namespace std;

int main (){
	initscr();
	
	mvprintw(10,25,"Jenita Lusiana Lukmawati");
	
	refresh();
	getch();
	endwin();
	
	return 0;
}
