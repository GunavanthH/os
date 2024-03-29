#include <stdio.h>

#define MAX_RECORDS 10

int main() {
    int index_block[MAX_RECORDS];
    int records[MAX_RECORDS];
    int num_records, i;

    // Initialize index block and records
    for (i = 0; i < MAX_RECORDS; i++) {
        index_block[i] = i; // Each index points to its corresponding block
        records[i] = i + 1; // Dummy data for records
    }

    printf("Enter the number of records to access: ");
    scanf("%d", &num_records);

    if (num_records <= 0 || num_records > MAX_RECORDS) {
        printf("Invalid number of records.\n");
        return 1;
    }

    printf("Accessing records...\n");
    for (i = 0; i < num_records; i++) {
        printf("Record %d: %d\n", i + 1, records[index_block[i]]);
    }

    return 0;
}

