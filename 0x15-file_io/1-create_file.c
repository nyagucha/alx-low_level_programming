#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: -1 if fails, 1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, byte_w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	byte_w = write(file_d, text_content, leng);
	if (byte_w == -1)
		return (-1);

	close(file_d);

	return (1);
}
