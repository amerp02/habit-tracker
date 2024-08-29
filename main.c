#include <stdio.h>
#include <stdlib.h>

void print_main_menu_options(void);
void wait_user_selection(void);
void view_habit_tracker(void);
void edit_habit_tracker(void);
void check_off_habit(void);

void print_main_menu_options(void) {
	printf("\t\tHABIT TRACKER\n");
	printf("1. View Habit Tracker\n");
	printf("2. Edit Habit Tracker\n");
	printf("3. Check off habit for the day\n");
	printf("4. Exit\n\n");
	
}

void wait_user_selection(void) {
	int option;
	scanf("%d", &option);
	switch (option) {
		case 1:
			view_habit_tracker();
			break;
		case 2:
			edit_habit_tracker();
			break;
		case 3:
			check_off_habit();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Not an option, please select again.\n");
			wait_user_selection();
	}
}

void view_habit_tracker(void) {
	printf("view_habit_tracker\n");
}

void edit_habit_tracker(void) {
	printf("edit_habit_tracker\n");
}

void check_off_habit(void) {
	printf("check_off_habit\n");
}

int main(void) {
	print_main_menu_options();
	wait_user_selection();
	return 0;
}
