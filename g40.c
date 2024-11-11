/*Cornelia is building a program to rate novels. She needs your help to write a program that takes the user's input for the number of pages in a novel and its publication year. 



Implement the following rating system:

If the novel has more than 300 pages (exclusive) and was published after 2000 (exclusive), rate it as "Excellent".
If the novel has between 200 and 300 pages and was published between 1990 and 2000 (both inclusive), rate it as "Good".
For all other cases, rate it as "Average". 
Input format :
The first line of input consists of an integer value n, representing the number of pages in the novel.

The second line of input consists of an integer value n1, representing the publication year of the novel.

Output format :
The output displays "Rating: " followed by the rating of the novel based on the given criteria.*/

#include <stdio.h>

int main() {
    int pages, year;
    scanf("%d", &pages);
    scanf("%d", &year);
    if (pages > 300 && year > 2000) {
        printf("Rating: Excellent");
    } else if (pages >= 200 && pages <= 300 && year >= 1990 && year <= 2000) {
        printf("Rating: Good");
    } else {
        printf("Rating: Average");
    }
    return 0;
}
