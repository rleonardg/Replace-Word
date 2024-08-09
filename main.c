#include <stdio.h>
#include "replace.c"

int main()
{
    char word[] = "book";
    char text[] = "In my favorite book, the book that changed the way I see the world, every page of the book is filled with wisdom and adventure. I often find myself lost in the book, unable to put it down. The book has become a part of my life, and I return to it whenever I need inspiration";

    printf("%s\n", replace(word, text));
}