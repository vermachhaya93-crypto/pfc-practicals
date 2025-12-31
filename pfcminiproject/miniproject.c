#include <stdio.h>
#include <stdlib.h>

#define TOTAL_SEATS 10

int seats[TOTAL_SEATS] = {0};   // 0 = Available, 1 = Booked

// Function declarations
void showSeats();
void bookSeat();
void cancelSeat();

int main() {
    int choice;

    while (1) {
        printf("\n===== Railway Seat Booking System =====\n");
        printf("1. Show Seat Availability\n");
        printf("2. Book a Seat\n");
        printf("3. Cancel a Seat\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showSeats();
                break;

            case 2:
                bookSeat();
                break;

            case 3:
                cancelSeat();
                break;

            case 4:
                printf("Thank you for using the system!\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to display seat status
void showSeats() {
    printf("\nSeat Status:\n");
    for (int i = 0; i < TOTAL_SEATS; i++) {
        if (seats[i] == 0)
            printf("Seat %d : Available\n", i + 1);
        else
            printf("Seat %d : Booked\n", i + 1);
    }
}

// Function to book a seat
void bookSeat() {
    int seatNo;
    printf("Enter seat number to book (1-%d): ", TOTAL_SEATS);
    scanf("%d", &seatNo);

    if (seatNo < 1 || seatNo > TOTAL_SEATS) {
        printf("Invalid seat number!\n");
    } else if (seats[seatNo - 1] == 1) {
        printf("Seat already booked!\n");
    } else {
        seats[seatNo - 1] = 1;
        printf("Seat %d booked successfully!\n", seatNo);
    }
}

// Function to cancel a seat
void cancelSeat() {
    int seatNo;
    printf("Enter seat number to cancel (1-%d): ", TOTAL_SEATS);
    scanf("%d", &seatNo);

    if (seatNo < 1 || seatNo > TOTAL_SEATS) {
        printf("seat  number is invalid!\n");
    } else if (seats[seatNo - 1] == 0) {
        printf("Seat is  available!\n");
    } else {
        seats[seatNo - 1] = 0;
        printf("Seat %d cancelled successfully!\n", seatNo);
    }
}
