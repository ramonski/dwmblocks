//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"Mem:", "freecolor -o | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0}, */
	/* {"", "date '+%b %d (%a) %I:%M%p'",					5,		0}, */

	{"", "sb-network",    60, 17},
	{"", "sb-battery",    60, 16},  // SIGUSR1-1 + 12 = 45
	{"", "sb-brightness", 60, 15},  // SIGUSR1-1 + 15 = 44
	{"", "sb-volume",     0,  10},  // SIGUSR1-1 + 10 = 39
	{"", "sb-clock",      1,  9},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
