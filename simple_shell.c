#include "shell.h"
#include <signal.h>
/**
 * sig_handler - checks if Ctrl C is pressed
 * @sig_num: int
 */

void sig_handler(int sig_num)
{
		if (sig_num == SIGINT)
			write(1, "\n$ ", 3);
}


