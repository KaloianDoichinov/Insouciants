#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card {
char* name;
char* suit;
int value;
};



int main (int argc, const char * argv[])
{

struct card deck[] =
{
{"ace", "spades",1}, {"two", "spades",2}, {"three", "spades",3},
{"four", "spades",4}, {"five", "spades",5}, {"six", "spades",6},
{"seven", "spades",7}, {"eight", "spades",8}, {"nine", "spades",9},
{"ten", "spades",10}, {"jack", "spades",11}, {"queen", "spades",12},
{"king", "spades",13},
{"ace", "clubs",1}, {"two", "clubs",2}, {"three", "clubs",3},
{"four", "clubs",4}, {"five", "clubs",5}, {"six", "clubs",6},
{"seven", "clubs",7}, {"eight", "clubs",8}, {"nine", "clubs",9},
{"ten", "clubs",10}, {"jack", "clubs",11}, {"queen", "clubs",12},
{"king", "clubs",13},
{"ace", "hearts",1}, {"two", "hearts",2}, {"three", "hearts",3},
{"four", "hearts",4}, {"five", "hearts",5}, {"six", "hearts",6},
{"seven", "hearts",7}, {"eight", "hearts",8}, {"nine", "hearts",9},
{"ten", "hearts",10}, {"jack", "hearts",11}, {"queen", "hearts",12},
{"king", "hearts",13},
{"ace", "diamonds",1}, {"two", "diamonds",2}, {"three", "diamonds",3},
{"four", "diamonds",4}, {"five", "diamonds",5}, {"six", "diamonds",6},
{"seven", "diamonds",7}, {"eight", "diamonds",8}, {"nine", "diamonds",9},
{"ten", "diamonds",10}, {"jack", "diamonds",11}, {"queen", "diamonds",12},
{"king", "diamonds",13},

};

// Seed the random number generator
srandom( time( NULL ) );

int randomA, randomB;
struct card tempCard;

int i=0;
do {
// Generate 2 random numbers to determine which cards to swap
randomA = random() % 52;
randomB = random() % 52;

if (randomA == randomB)
{
continue;
}

// Swap slots A and B
tempCard = deck[randomA];
deck[randomA] = deck[randomB];
deck[randomB] = tempCard;

// Increment the counter
i++;

}
while (i<1000000);
for (i = 0; i < 52; i++) {

printf("The card is %s of %s\n", deck[i].name, deck[i].suit);
}

return 0;
}
