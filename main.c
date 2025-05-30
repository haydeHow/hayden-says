#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "fuck_wav.h"
#include "dammit_wav.h"
#include "shit_wav.h"
#include "cunt_wav.h"
#include "baby_wav.h"
#include "i_love_you_wav.h"
#include "touch_asshole_wav.h"

// Reset
#define RESET_COLOR "\033[0m"

// Text colors
#define RED_TEXT "\033[31m"
#define GREEN_TEXT "\033[32m"
#define YELLOW_TEXT "\033[33m"
#define BLUE_TEXT "\033[34m"
#define MAGENTA_TEXT "\033[35m"
#define CYAN_TEXT "\033[36m"
#define WHITE_TEXT "\033[37m"
#define BOLD_TEXT "\033[1m"

// Example usage macro to print colored text
#define PRINT_COLOR(color, text) printf(color text RESET_COLOR)
#define PRINT_OPTION(command) PRINT_COLOR(BOLD_TEXT CYAN_TEXT, command);
#define PRINT_BOLD(command) PRINT_COLOR(BOLD_TEXT, command);
#define PRINT_EXAMPLE(command) PRINT_COLOR(BOLD_TEXT RED_TEXT, command);
#define PRINT_BYE(command) PRINT_COLOR(BOLD_TEXT GREEN_TEXT, command);

int print_help()
{
    PRINT_BOLD("Usage: ")
    printf("hayden ");
    PRINT_OPTION("command\n\n");

    PRINT_BOLD("OPTIONS:\n")
    PRINT_OPTION("\tfuck\n");
    PRINT_OPTION("\tshit\n");
    PRINT_OPTION("\tdammit\n");
    PRINT_OPTION("\tcunt\n");
    PRINT_OPTION("\tbaby\n");
    PRINT_OPTION("\tlove-you\n");
    PRINT_OPTION("\ttouch-asshole\n");

    PRINT_BOLD("EXAMPLE:\n")
    PRINT_EXAMPLE("\thayde@haydes-MacBook-Air ~ ");
    printf("hayden fuck\n\n");

    PRINT_BOLD("TO VIEW THIS AGAIN:\n")
    PRINT_EXAMPLE("\thayde@haydes-MacBook-Air ~ ");
    printf("hayden --help\n\n");

    PRINT_BYE("\t\t\t\t\t\tTO BROOKS FROM HAYDEN <8");

    // Add your own options here
    return 0;
}

void play_fuck()
{
    // Write to a temp file
    FILE *fp = fopen("/tmp/fuck.wav", "wb");
    fwrite(fuck_wav, 1, fuck_wav_len, fp);
    fclose(fp);

    system("afplay /tmp/fuck.wav");
    remove("/tmp/fuck.wav");
}
void play_dammit()
{
    // Write to a temp file
    FILE *fp = fopen("/tmp/dammit.wav", "wb");
    fwrite(dammit_wav, 1, dammit_wav_len, fp);
    fclose(fp);

    system("afplay /tmp/dammit.wav");
    remove("/tmp/dammit.wav");
}
void play_shit()
{
    // Write to a temp file
    FILE *fp = fopen("/tmp/shit.wav", "wb");
    fwrite(shit_wav, 1, shit_wav_len, fp);
    fclose(fp);

    system("afplay /tmp/shit.wav");
    remove("/tmp/shit.wav");
}
void play_cunt()
{
    // Write to a temp file
    FILE *fp = fopen("/tmp/cunt.wav", "wb");
    fwrite(cunt_wav, 1, cunt_wav_len, fp);
    fclose(fp);

    system("afplay /tmp/cunt.wav");
    remove("/tmp/cunt.wav");
}
void play_baby()
{
    // Write to a temp file
    FILE *fp = fopen("/tmp/baby.wav", "wb");
    fwrite(baby_wav, 1, baby_wav_len, fp);
    fclose(fp);

    system("afplay /tmp/baby.wav");
    remove("/tmp/baby.wav");
}
void play_love_you()
{
    // Write to a temp file
    FILE *fp = fopen("/tmp/love_you.wav", "wb");
    fwrite(i_love_you_wav, 1, i_love_you_wav_len, fp);
    fclose(fp);

    system("afplay /tmp/love_you.wav");
    remove("/tmp/love_you.wav");
}
void play_touch_asshole()
{
    // Write to a temp file
    FILE *fp = fopen("/tmp/touch_asshole.wav", "wb");
    fwrite(touch_asshole_wav, 1, touch_asshole_wav_len, fp);
    fclose(fp);

    system("afplay /tmp/touch_asshole.wav");
    remove("/tmp/touch_asshole.wav");
}
int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        print_help();
        return 0;
    }
    if ((argc == 2) && (strcmp(argv[1], "fuck") == 0))
    {
        play_fuck();
        return 0;
    }
    if ((argc == 2) && (strcmp(argv[1], "dammit") == 0))
    {
        play_dammit();
        return 0;
    }
    if ((argc == 2) && (strcmp(argv[1], "shit") == 0))
    {
        play_shit();
        return 0;
    }
    if ((argc == 2) && (strcmp(argv[1], "cunt") == 0))
    {
        play_cunt();
        return 0;
    }
    if ((argc == 2) && (strcmp(argv[1], "baby") == 0))
    {
        play_baby();
        return 0;
    }
    if ((argc == 2) && (strcmp(argv[1], "love-you") == 0))
    {
        play_love_you();
        return 0;
    }
    if ((argc == 2) && (strcmp(argv[1], "touch-asshole") == 0))
    {
        play_touch_asshole();
        return 0;
    }

    return 0;
}