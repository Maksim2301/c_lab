#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    double price;
    int pages;
    char language[30];
    double weight;
    int year;
    struct Book* next;
};

int main() {
    struct Book* book1 = (struct Book*)malloc(sizeof(struct Book));
    struct Book* book2 = (struct Book*)malloc(sizeof(struct Book));
    struct Book* book3 = (struct Book*)malloc(sizeof(struct Book));
    struct Book* book4 = (struct Book*)malloc(sizeof(struct Book));
    struct Book* book5 = (struct Book*)malloc(sizeof(struct Book));
    struct Book* book6 = (struct Book*)malloc(sizeof(struct Book));
    struct Book* book7 = (struct Book*)malloc(sizeof(struct Book));

    strcpy(book1->title, "Harry Potter and the Philosopher's Stone");
    book1->price = 250.0; book1->pages = 320;
    strcpy(book1->language, "Ukrainian");
    book1->weight = 0.45; book1->year = 1997;
    book1->next = book2;

    strcpy(book2->title, "Harry Potter and the Chamber of Secrets");
    book2->price = 270.0; book2->pages = 352;
    strcpy(book2->language, "Ukrainian");
    book2->weight = 0.47; book2->year = 1998;
    book2->next = book3;

    strcpy(book3->title, "Harry Potter and the Prisoner of Azkaban");
    book3->price = 300.0; book3->pages = 448;
    strcpy(book3->language, "Ukrainian");
    book3->weight = 0.50; book3->year = 1999;
    book3->next = book4;

    strcpy(book4->title, "Harry Potter and the Goblet of Fire");
    book4->price = 400.0; book4->pages = 636;
    strcpy(book4->language, "Ukrainian");
    book4->weight = 0.70; book4->year = 2000;
    book4->next = book5;

    strcpy(book5->title, "Harry Potter and the Order of the Phoenix");
    book5->price = 450.0; book5->pages = 766;
    strcpy(book5->language, "Ukrainian");
    book5->weight = 0.80; book5->year = 2003;
    book5->next = book6;

    strcpy(book6->title, "Harry Potter and the Half-Blood Prince");
    book6->price = 420.0; book6->pages = 607;
    strcpy(book6->language, "Ukrainian");
    book6->weight = 0.75; book6->year = 2005;
    book6->next = book7;

    strcpy(book7->title, "Harry Potter and the Deathly Hallows");
    book7->price = 500.0; book7->pages = 607;
    strcpy(book7->language, "Ukrainian");
    book7->weight = 0.78; book7->year = 2007;
    book7->next = NULL;

    struct Book* current = book1;
    while (current != NULL) {
        printf("Title: %s\n", current->title);
        printf("Price: %.2f UAH\n", current->price);
        printf("Pages: %d\n", current->pages);
        printf("Language: %s\n", current->language);
        printf("Weight: %.2f kg\n", current->weight);
        printf("Year: %d\n", current->year);
        printf("\n");
        current = current->next;
    }
    free(book1);
    free(book2);
    free(book3);
    free(book4);
    free(book5);
    free(book6);
    free(book7);
    return 0;
}
