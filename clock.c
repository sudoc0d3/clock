#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void stopwatch(int h, int m, int s);
void timer(int h, int m, int s);

int main(int argc, char* argv[]) {
	int h, m, s, mode;
	
	if (argc == 5) {
		mode = atoi(argv[1]);
		h = atoi(argv[2]);
		m = atoi(argv[3]);
		s = atoi(argv[4]);
	}

	else if (argc == 2) {
		mode = atoi(argv[1]);
		if (mode) {
			h = m = s = 0;
		} else {
			h = 1;
			m = s = 0;
		}
	}

	else {
		printf("Usage: ./clock mode [hours] [minutes] [seconds]\nmode 1: stopwatch\nmode 0: timer\n");
		return 1;
	}

	if (mode)
		stopwatch(h, m, s);
	else
		timer(h, m, s);

}

void stopwatch(int h, int m, int s) {
	while (1) {
		system("clear");
		printf("%d:%d:%d\n", h, m, s);
		sleep(1);
		s++;
		if (s == 60) {
			s = 0;
			m++;
			if (m == 60) {
				m = 0;
				h++;
			}
		}
	}
}

void timer(int h, int m, int s) {
	while (1) {
		system("clear");
		printf("%d:%d:%d\n", h, m, s);
		if (s == 0) {
			s = 60;
			if (m == 0) {
				m = 60;
				if (h == 0) {
					printf("\a");
					return;
				}
				h--;
			}
			m--;
		}
		s--;
		sleep(1);
	}
}
