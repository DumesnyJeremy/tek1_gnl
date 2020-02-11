/*
** EPITECH PROJECT, 2019
** get
** File description:
** D.Jeremy
*/

#ifndef READ_SIZE
#define READ_SIZE 1
#endif

#ifndef MY_H_
#define MY_H_

#include <curses.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char **get_next(char const *filepath);
int my_strlen(char const *str, int i, int a);
char *my_strcat(char *dest, char *st, int *a);
// int bs(char *file);

#endif