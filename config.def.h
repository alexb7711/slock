/* user and group to drop privileges to */
static const char *user  = "alex";
static const char *group = "alex";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",     /* after initialization */
	[INPUT] =  "#458588",   /* during input */
	[FAILED] = "#fb4934",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
