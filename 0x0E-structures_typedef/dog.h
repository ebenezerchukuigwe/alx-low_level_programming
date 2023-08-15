#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Decription: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
i

	/**
	 * myDog - typedef for srtuct dog
	 */

	struct dog myDog = {
		.name = "poppy",
		.age = 3.5,
		.owner = "bob"
	};


	printf("Name:%/s\n", myDog.name);
	printf("Age: &.1f\n", myDog.age);
	printf("Owner: %s\n", myDog.owner);

	return 0;

#endif
