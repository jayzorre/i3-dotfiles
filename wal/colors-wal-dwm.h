static const char norm_fg[] = "#ffffff";
static const char norm_bg[] = "#000000";
static const char norm_border[] = "#000000";

static const char sel_fg[] = "#ffffff";
static const char sel_bg[] = "#ff0000";
static const char sel_border[] = "#ffffff";

static const char urg_fg[] = "#ffffff";
static const char urg_bg[] = "#ff0000";
static const char urg_border[] = "#ff0000";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
