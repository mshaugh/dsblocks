#define SLEEPINTERVAL                   2

#include "blocks/datetime.h"
#include "blocks/mail.h"
#include "blocks/volume.h"

/* If interval of a block is set to 0, the block will only be updated once at startup.
 * If interval is set to a negative value, the block will never be updated in the main loop.
 * Set pathc to NULL if clickability is not required for the block.
 * Set signal to 0 if both clickability and signaling are not required for the block.
 * Signal must be less than 10 for clickable blocks.
 * If multiple signals are pending, then the lowest numbered one will be delivered first. */

/* funcu - function responsible for updating what is shown on the status
 * funcc - function responsible for handling clicks on the block */

static Block blocks[] = {
/*      funcu                   funcc                   interval        signal */
        { volumeu,              volumec,                0,              1 },

        { datetimeu,            NULL,                   30,             0 },

        { NULL } /* just to mark the end of the array */
};

static const char *delim =  "   ";
