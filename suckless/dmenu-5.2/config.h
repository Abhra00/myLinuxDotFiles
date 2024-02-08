/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar 		= 1;                    /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xff;
static int centered 		= 0;                    /* -c option; centers dmenu on screen */
static int min_width 		= 500;                  /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "JetBrains Mono:size=12";
static const char *fonts[] = {
	font,
	"Font Awesome:size=14",
};

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
			      /*     fg         bg       */
	[SchemeNorm]          = { normfgcolor, normbgcolor },
	[SchemeSel]  	      = { selfgcolor,  selbgcolor  },
        [SchemeSelHighlight]  = { "#ffc978", "#005577" },
        [SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut]  	      = { "#000000",   "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";


/* Size of the window border */
static unsigned int border_width = 3;


/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "color0",      STRING, &normfgcolor },
	{ "color4",      STRING, &normbgcolor },
	{ "color0",      STRING, &selfgcolor },
	{ "color8",      STRING, &selbgcolor },
	{ "prompt",      STRING, &prompt },
};
