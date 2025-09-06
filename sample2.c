#include <stdio.h>

int main() {
    // Example Student Data
    char controlNo[15] = "2025-00001";
    char studentNo[15] = "25-AB12345";
    char name[50] = "DOE, JUAN DELA CRUZ";
    char course[100] = "BSIT - Bachelor of Science in Information Technology";
    char address[100] = "123 SAMPLE ST., QUEZON CITY, METRO MANILA";
    char term[20] = "2025-2026 (Sem 1)";
    char section[10] = "IT 1A";
    char nationality[15] = "FILIPINO";
    char standing[15] = "REGULAR";

    // Example Fees (centavos)
    int tuition = 1911000, rle = 250000, misc = 1456629, lab = 610878;
    int other = 40000, learning = 135234, installment = 363934, discount = 764400;

    // Example Payments
    int down = 500000, pay1 = 700655, pay2 = 700655, pay3 = 700655, pay4 = 700655, pay5 = 700655;

    printf("=============================================\n");
    printf("           STUDENT ENROLLMENT FORM           \n");
    printf("=============================================\n\n");

    // Student Information
    printf("Control No : %s\n", controlNo);
    printf("Student No : %s\n", studentNo);
    printf("Name       : %s\n", name);
    printf("Course     : %s\n", course);
    printf("Address    : %s\n", address);
    printf("Section    : %s\n", section);
    printf("Nationality: %s | Standing: %s\n", nationality, standing);
    printf("Term/Year  : %s\n\n", term);

    // Subjects
    printf("=== SUBJECT SCHEDULE ===\n");
    printf("Subject      Units   Type      Days     Time             Room         Section\n");
    printf("MMW          3       Lecture   TH       01:00-04:00 PM   No Room      %s\n", section);
    printf("PATHFit 1    2       Lecture   F        08:00-10:00 AM   GYM          %s\n", section);
    printf("NSTP 1       3       Lecture   TH       10:30-12:00 NN   No Room      %s\n", section);
    printf("NSTP 1       -       Lab       F        10:30-12:00 NN   COMP LAB A   %s\n", section);
    printf("IT 102       3       Lecture   M        04:00-06:00 PM   COMP LAB A   %s\n", section);
    printf("IT 102       -       Lab       S        10:00-01:00 PM   No Room      %s\n", section);
    printf("IT 103       3       Lecture   TH       04:00-07:00 PM   No Room      %s\n", section);
    printf("IT 101       3       Lecture   S        07:00-09:00 AM   COMP LAB B   %s\n", section);
    printf("IT 101       -       Lab       W        07:00-10:00 AM   COMP LAB B   %s\n", section);
    printf("IT ERA       3       Lecture   M        01:00-03:00 PM   No Room      %s\n", section);
    printf("IT ERA       -       Lab       W        01:00-04:00 PM   COMP LAB B   %s\n", section);
    printf("CL 1         1       Lecture   TH       08:00-09:00 AM   No Room      %s\n\n", section);

    // Fees
    printf("=== FEES ===\n");
    printf("Tuition             : P%d.%02d\n", tuition/100, tuition%100);
    printf("RLE                 : P%d.%02d\n", rle/100, rle%100);
    printf("Miscellaneous       : P%d.%02d\n", misc/100, misc%100);
    printf("Laboratory          : P%d.%02d\n", lab/100, lab%100);
    printf("Other Fee           : P%d.%02d\n", other/100, other%100);
    printf("Learning Materials  : P%d.%02d\n", learning/100, learning%100);
    printf("Installment Fee     : P%d.%02d\n", installment/100, installment%100);
    printf("Discounts           : P%d.%02d\n\n", discount/100, discount%100);

    // Payments
    printf("=== PAYMENT SCHEDULE ===\n");
    printf("Downpayment : P%d.%02d  (2025-08-09)\n", down/100, down%100);
    printf("1st Payment : P%d.%02d  (2025-08-30)\n", pay1/100, pay1%100);
    printf("2nd Payment : P%d.%02d  (2025-09-13)\n", pay2/100, pay2%100);
    printf("3rd Payment : P%d.%02d  (2025-10-18)\n", pay3/100, pay3%100);
    printf("4th Payment : P%d.%02d  (2025-11-08)\n", pay4/100, pay4%100);
    printf("5th Payment : P%d.%02d  (2025-12-06)\n", pay5/100, pay5%100);

    printf("\n=============================================\n");
    printf("         END OF STUDENT ENROLLMENT FORM       \n");
    printf("=============================================\n");

    return 0;
}
