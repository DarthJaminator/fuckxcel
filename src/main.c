#include "stdio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// FUCKXCEL the project

int getMa(char *arr[], int rows) {
  int max = 0;
  for (int i = 0; i < rows; i++) {
    int check = strlen(arr[i]);
    if (check > max) {
	  max = max+check;
	}
  }
  return max;
}

int create_row(int cols, char *name[]) {
  int getmax = 0;
  char result[50] = {0};
  printf("\n");
  for (int i = 0; i < cols; i++) {
	printf("|");
	sprintf(result, " %s ", name[i]);
	printf("%s", result);
	getmax+=strlen(result);
  }
  printf("|\n");
  printf("%d\n",getmax);
  return getmax;
}

void create_blocker(int cols, int dash_w) {
  for (int j = 0; j < dash_w; j++) {
	printf("-");
  }
}

int main() {
  // tui table
  char *names[] = {"name", "code_name", "-"};
  int row = create_row(3, names);
  create_blocker(3, row);
}
