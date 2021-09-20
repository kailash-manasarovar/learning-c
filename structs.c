#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
	
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
};

void Person_destroy(struct Person *who) {

	assert(who != NULL);
	
	free(who->name);
	free(who);
}

void Person_print(struct Person *who) {
	
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
	struct Person *joe = Person_create("Joe", 32, 64, 140);
	struct Person *frances = Person_create("Frances", 20, 72, 180);

	// print them out and where they are in memory
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);

        printf("Frances is at memory location %p:\n", frances);
        Person_print(frances);

	// add 20 years and print again
	joe->age += 20;
	Person_print(joe);
	frances->age += 20;
	Person_print(frances);

	// destroy them both to clean up
	Person_destroy(joe);
	Person_destroy(frances);

	return 0;
}
