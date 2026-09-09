const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#ff0000", /* red     */
  [2] = "#ff0000", /* green   */
  [3] = "#ff0000", /* yellow  */
  [4] = "#ff0000", /* blue    */
  [5] = "#ff0000", /* magenta */
  [6] = "#ff0000", /* cyan    */
  [7] = "#ffffff", /* white   */

  /* 8 bright colors */
  [8]  = "#000000",  /* black   */
  [9]  = "#ff0000",  /* red     */
  [10] = "#ff0000", /* green   */
  [11] = "#ff0000", /* yellow  */
  [12] = "#ff0000", /* blue    */
  [13] = "#ff0000", /* magenta */
  [14] = "#ff0000", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#ffffff", /* foreground */
  [258] = "#ff0000",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
