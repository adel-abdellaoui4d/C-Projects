#include "my_custom_header.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t my_custom_read_file(const char *file, size_t num_letters)
{
    int file_descriptor;
    ssize_t bytes_read, bytes_written;
    char *data_buffer;

    if (!file)
        return (0);

    file_descriptor = open(file, O_RDONLY);

    if (file_descriptor == -1)
        return (0);

    data_buffer = malloc(sizeof(char) * (num_letters));
    if (!data_buffer)
        return (0);

    bytes_read = read(file_descriptor, data_buffer, num_letters);
    bytes_written = write(STDOUT_FILENO, data_buffer, bytes_read);

    close(file_descriptor);

    free(data_buffer);

    return (bytes_written);
}
