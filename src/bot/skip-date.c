#include "Bot.h"

const int ECHOES = 0;

IN_FLASH command INPUTS[] = {
	// Setup controller
						{ NOTHING,  250 },
	{ TRIGGERS,   5 },	{ NOTHING,  150 },
	{ TRIGGERS,   5 },	{ NOTHING,  150 },
	{ A,          5 },	{ NOTHING,  250 },

	// Go into game
	{ HOME,       5 },	{ NOTHING,  100 },
	{ HOME,       5 },	{ NOTHING,  100 },

	// Go to menu
	{ HOME,       5 },		{ NOTHING,  100 },
	{ DOWN,       5 },		{ NOTHING,  100 },
	{ RIGHT,      5 },		{ NOTHING,  50 },
	{ RIGHT,      5 },		{ NOTHING,  50 },
	{ RIGHT,      5 },		{ NOTHING,  50 },
	{ RIGHT,      5 },		{ NOTHING,  50 },
	{ A,		  5 },		{ NOTHING,	100 },
	// scroll to console
	{ DOWN,       180 },	{ NOTHING,	50 },
	{ A,          5 },		{ NOTHING,  50 },

	// go to date and time
	{ DOWN,       5 },		{ NOTHING,  50 },
	{ DOWN,       5 },		{ NOTHING,  50 },
	{ DOWN,       5 },		{ NOTHING,  50 },
	{ DOWN,       5 },		{ NOTHING,  50 },

	// go to date and time setting
	{ A,          5 },		{ NOTHING,  50 },
	{ DOWN,       5 },		{ NOTHING,  50 },
	{ DOWN,       5 },		{ NOTHING,  50 },
	{ DOWN,       5 },		{ NOTHING,  50 },
	{ A,          5 },		{ NOTHING,  100 },

	// set one day forward
	{ RIGHT,      5 },		{ NOTHING,  50 },
	{ UP,         5 },		{ NOTHING,  50 },
	{ RIGHT,      90 },		{ NOTHING,  50 },
	{ A,          5 },		{ NOTHING,  50 },

	{ B,       	  5 },		{ NOTHING,  100 },
};

const int INPUT_REPEAT_BEGIN = 37;
const int INPUTS_LENGTH = sizeof(INPUTS)/sizeof(command);
const int MAX_REPEAT = 5;

