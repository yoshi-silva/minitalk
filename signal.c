#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void signal_handler(int signum) {
    printf("\nCaught signal %d, exiting program.\n", signum);
    exit(signum); // please note this function << 0 means sucess,1 is general error,i get to set my own values for debuugging
    //if i feel like it ,the system makes (128 + error reason) to help me
}

int main() {
    // Set up the signal handler for SIGINT (Ctrl+C)
    signal(SIGINT, signal_handler);

    printf("Program running. Press Ctrl+C to trigger signal handler.\n");

    // Loop to keep the program running
    while (1) {
        // Simulate some work with an infinite loop
    }

    return 0;
}
