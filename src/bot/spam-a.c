#include "Bot.h"

const int ECHOES = 0;

IN_FLASH command INPUTS[] = {
	// Setup controller
						{ NOTHING,  250 },
	{ TRIGGERS,   5 },	{ NOTHING,  150 },
	{ TRIGGERS,   5 },	{ NOTHING,  150 },
	{ A,          5 },	{ NOTHING,  250 },

	// Go into game
	{ HOME,       5 },	{ NOTHING,  250 },
	{ A,          5 },	{ NOTHING,  250 },

	// spam A
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 },
	{ A,          5 },	{ NOTHING,  5 }
};

const int INPUT_REPEAT_BEGIN = 11;
const int INPUTS_LENGTH = sizeof(INPUTS)/sizeof(command);
const int MAX_REPEAT = 0;

