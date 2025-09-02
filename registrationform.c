#include <stdio.h>

int main() {
    // Example Student Info
    char controlNo[15] = "2025-12345";
    char studentNo[15] = "25-EX00001";
    char name[50] = "DOE, JOHN MICHAEL";
    char course[60] = "BSIT - Bachelor of Science in Information Technology";
    char address[100] = "123 SAMPLE STREET, QUEZON CITY, METRO MANILA";
    char term[25] = "2025-2026 (1st SEM)";
    char section[10] = "IT 1B";
    char nationality[15] = "FILIPINO";
    char standing[15] = "REGULAR";

    // Example Fees (centavos, no decimal)
    int tuition = 2000000;     // ₱20,000.00
    int misc = 1500000;        // ₱15,000.00
    int lab = 500000;          // ₱5,000.00
    int other = 30000;         // ₱300.00
    int learning = 120000;     // ₱1,200.00

    // Example Payments
    int down = 500000;
    int pay1 = 700000;
    int pay2 = 700000;
    int pay3 = 700000;
    int pay4 = 700000;
    int pay5 = 700000;

    // Header
    printf("============================================\n");
    printf("      SAMPLE ENROLLMENT FORM\n");
    printf("============================================\n\n");

    printf("Control No : %s\n", controlNo);
    printf("Student No : %s\n", studentNo);
    printf("Name       : %s\n", name);
    printf("Course     : %s\n", course);
    printf("Address    : %s\n", address);
    printf("Section    : %s\n", section);
    printf("Nationality: %s | Standing: %s\n", nationality, standing);
    printf("Term/Year  : %s\n\n", term);

    // Subjects
    printf("=== SUBJECTS & SCHEDULE ===\n");
    printf("Code     Units   Type      Day   Time              Room\n");
    printf("MMW      3       Lecture   TTH   01:00-02:30 PM    Room 201\n");
    printf("PATHFIT  2       Lecture   F     08:00-10:00 AM    Gym\n");
    printf("NSTP 1   3       Lecture   S     10:00-12:00 NN    Room 102\n");
    printf("IT 101   3       Lecture   M     09:00-11:00 AM    Room 301\n");
    printf("IT 101   -       Lab       W     01:00-04:00 PM    Comp Lab A\n");
    printf("IT 102   3       Lecture   TH    02:00-05:00 PM    Room 305\n");
    printf("CL 1     1       Lecture   F     07:00-08:00 AM    Room 101\n\n");

    // Fees
    printf("=== FEES ===\n");
    printf("Tuition             : P%d.%02d\n", tuition/100, tuition%100);
    printf("Miscellaneous       : P%d.%02d\n", misc/100, misc%100);
    printf("Laboratory          : P%d.%02d\n", lab/100, lab%100);
    printf("Other Fee           : P%d.%02d\n", other/100, other%100);
    printf("Learning Materials  : P%d.%02d\n\n", learning/100, learning%100);

    // Payments
    printf("=== PAYMENT SCHEDULE ===\n");
    printf("Downpayment : P%d.%02d  (2025-08-05)\n", down/100, down%100);
    printf("1st Payment : P%d.%02d  (2025-08-30)\n", pay1/100, pay1%100);
    printf("2nd Payment : P%d.%02d  (2025-09-13)\n", pay2/100, pay2%100);
    printf("3rd Payment : P%d.%02d  (2025-10-18)\n", pay3/100, pay3%100);
    printf("4th Payment : P%d.%02d  (2025-11-08)\n", pay4/100, pay4%100);
    printf("5th Payment : P%d.%02d  (2025-12-06)\n", pay5/100, pay5%100);

    printf("\n============================================\n");
    printf("   END OF SAMPLE REGISTRATION FORM\n");
    printf("============================================\n");

    return 0;
}
