#include <stdlib.h>
#include <string.h>

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    char **words = malloc(sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int num_words = 0;
    char *word_start = NULL;
    char *p = str;
    while (*p != '\0') {
        if (*p != ' ' && word_start == NULL) {
            word_start = p;
        } else if (*p == ' ' && word_start != NULL) {
            int word_len = p - word_start;
            char *word = malloc(word_len + 1);
            if (word == NULL) {
                for (int i = 0; i < num_words; i++) {
                    free(words[i]);
                }
                free(words);
                return NULL;
            }
            memcpy(word, word_start, word_len);
            word[word_len] = '\0';
            words[num_words] = word;
            num_words++;
            char **tmp = realloc(words, (num_words + 1) * sizeof(char *));
            if (tmp == NULL) {
                for (int i = 0; i < num_words; i++) {
                    free(words[i]);
                }
                free(words);
                return NULL;
            }
            words = tmp;
            word_start = NULL;
        }
        p++;
    }

    if (word_start != NULL) {
        int word_len = p - word_start;
        char *word = malloc(word_len + 1);
        if (word == NULL) {
            for (int i = 0; i < num_words; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }
        memcpy(word, word_start, word_len);
        word[word_len] = '\0';
        words[num_words] = word;
        num_words++;
    }

    words[num_words] = NULL;
    return words;
}

