#ifndef CHARSET_H
#define CHARSET_H

int init_charset(const char *name);
char *utf2ascii(const char *src, char *dest, int size);
char *ascii2utf(const char *src, char *dest, int size);

#endif


