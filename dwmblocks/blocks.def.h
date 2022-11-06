//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" 墳 ", "pulsemixer --get-volume | awk '{print $1\"%\"}'" ,		0,		3},
	{"  ", "xkblayout-state print '%e'",		0,		10},
	{" ", "date '+%d/%m/%Y'",					5,		0},
	{" ", "date '+%H:%M '",				     	5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
