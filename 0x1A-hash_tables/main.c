#include "hash_tables.h"

/**
 * main - Driver code
 *
 * Return: EXIT_SUCCESS
 */
int main()
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_print(ht);
    hash_table_delete(ht);
    if (ht->array == NULL)
    {
        printf("Program Executed Succesfully and Memory Cleaned Up Before Close\n");
    }
    return (EXIT_SUCCESS);
}