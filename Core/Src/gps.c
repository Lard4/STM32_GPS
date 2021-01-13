#define GGA 0
#define GLL 1
#define GSA 2
#define GSV 3
#define RMC 4
#define VTG 5

#define GPRMC_MAX_SIZE			74

#include <string.h>

int parse_sentence(char* sentence, char** fields, int max_fields) {
	int i = 0;

	while ((i < max_fields) && NULL != (string = strchr(string, ','))) {
		*string = '\0';
		fields[i++] = ++string;
	}

	return i - 1;
}

int getMessageType(char* message) {
	if (0 == strncmp(message, "$GPGGA", sizeof(char) * 6)) {
		return GGA;
	} else if (0 == strncmp(message, "$GPGLL", sizeof(char) * 6)) {
		return GLL;
	} else if (0 == strncmp(message, "$GPGSA", sizeof(char) * 6)) {
		return GSA;
	} else if (0 == strncmp(message, "$GPGSV", sizeof(char) * 6)) {
		return GSV;
	} else if (0 == strncmp(message, "$GPRMC", sizeof(char) * 6)) {
		return RMC;
	} else if (0 == strncmp(message, "$GPVTG", sizeof(char) * 6)) {
		return VTG;
	} else {
		return -1;
	}
}

float getLatitude(char* message) {
	switch (getMessageType(message)) {
		case GGA:

			break;

		case GLL:
			break;

		case GSA:
			break;

		case GSV:
			break;

		case RMC:
			break;

		case VTG:
			break;
	}
}
