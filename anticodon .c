#include <stdio.h>// by this we can use printf scanf
#include <string.h>// by this we can use strlen etc.

int main() {
    char codon[100];   // really we need only 3 but we can type upto 100

    printf("Enter codon (3 letters): ");
    scanf("%s", codon);

    if (strlen(codon) != 3) {
        printf("Error: Please enter exactly 3 letters!\n");
        return 1;
    }

    // convert lowercase to uppercase
    for (int i = 0; i < 3; i++)//Start at the first letter (i=0), go until the third letter (i=2), one by one.
    {
        if (codon[i] >= 'a' && codon[i] <= 'z') //Is this letter a lowercase English letter?
        {
            codon[i] = codon[i] - 'a' + 'A';//turn a small letter into a capital letter
        }
    }

    // print anticodon (reverse order)
    for (int i = 2; i >= 0; i--) //int i = 2; → Start with i = 2.
//(Because in a 3-letter codon, the last letter has index 2 → remember, computers count from 0: [0][1][2].)

//i >= 0; → Keep looping as long as i is not negative.
//So it runs for i = 2, 1, 0.

//i-- → After each loop, decrease i by 1.
//So it goes 2 → 1 → 0 → stop.
    {
        if (codon[i] == 'A') {
            printf("U");
        }
        else if (codon[i] == 'U') {
            printf("A");
        }
        else if (codon[i] == 'G') {
            printf("C");
        }
        else if (codon[i] == 'C') {
            printf("G");
        }
        else {
            printf("?");
        }
    }

    printf("\n");
    return 0;
}
