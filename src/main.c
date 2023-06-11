#include <stdio.h>
#include <stdlib.h>

#include <string.h>

int eval(char op, int x, int y) {
	switch(op) {
		case '+': return x + y;
		case '-': return x - y;
		case '*': return x * y;
		case '/': return x / y;
	}
	return 0;
}

void calc(char *str) {
	int x = 0;
	char op = '+';
	for (int i=0;i<strlen(str);i++) {
		if (	str[i] == '+' || str[i] == '-' 	||
			str[i] == '*' || str[i] == '/'	)
		{
			op = str[i];
			continue;		
		}
		if (str[i] >= '0' && str[i] <= '9') {
			x = eval(op, x, str[i] - '0');
		}
	}
	printf("%d\n", x);
}

int main(void) {
	while (1) {
		char *str = malloc(256);
		printf("> ");
		fgets(str, 256, stdin);
		calc(str);
		free(str);
	}
	return 0;
}
