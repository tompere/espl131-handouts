#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main(int argc, char **argv) {
	int cmp;

	if(argc!=3) {
		fprintf(stderr, "usage: %s string1 string2\n", argv[0]);
		exit(1);
	}

	cmp = cmpstr(argv[1], argv[2]);
	switch(cmp) {
	case 0:
		printf("equal\n");
		break;
	case 1:
		printf("greater\n");
		break;
	case 2:
		printf("smaller\n");
		break;
	default:
		assert(0);
	}

	return cmp;
}
