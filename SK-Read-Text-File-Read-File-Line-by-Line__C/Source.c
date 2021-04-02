#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

int main(int argc, char* argv[]) {
	//read any text file from currect directory
	char const* const fileName = "rizkykhapidsyah.txt";

	FILE* file = fopen(fileName, "r");

	if (!file) {
		printf("\n Unable to open : %s ", fileName);
		return -1;
	}

	char line[500];

	while (fgets(line, sizeof(line), file)) {
		printf("%s", line);
	}
	fclose(file);

	_getch();
	return 0;
}