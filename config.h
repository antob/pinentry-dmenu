/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int bottom = 0;
static int embedded = 0;
static int minpwlen = 32;
static int mon = -1;

static const char *asterisk = "*";
static const char *fonts[] = {
	"SFNSRegular:bold:pixelsize=16"
};
static const char *prompt = NULL;
static const char *colors[SchemeLast][4] = {
	[SchemePrompt] = { "#191919", "#00ACC1" },
	[SchemeNormal] = { "#ebdbb2", "#282c34" },
	[SchemeSelect] = { "#191919", "#00ACC1" },
	[SchemeDesc]   = { "#d79921", "#282c34" }
};
static unsigned int lineheight = 40;
