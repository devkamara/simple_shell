#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
void print_environ(void);
int _strcmp(char *s1, char *s2);
char *path_search(char *cmd);
char **parse_input_string(char *buffer);
char *_strncat(char *dest, char *src, int n);

#endif
