//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"",	"weatherbar",			560,			14},
//	{"",	"mailbar",			360,			14},
//	{"",	"nettraf",			1,			11},
	{"",	"calendarbar",			560,			14},
	{"",	"internet",			10,			13},
	{"",	"memory",			1,			11},	
	{"",	"cpu",				1,			11},	
	{"", 	"pacupdate",			360,		        9},
	{"", 	"volume",			10,		        13},	
	{"",	"battery",			5,			10},	
	{"", 	"clock",			5,		        10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
