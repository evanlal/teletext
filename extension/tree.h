/*
 * Written by Evan Lalopoulos <evan.lalopoulos.2017@my.bristol.ac.uk>
 * Copyright (C) 2018 - All rights reserved.
 * Unauthorized copying of this file is strictly prohibited.
 */

#ifndef TREE_H_
#define TREE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "../source/token.h"

#define ON_ERROR(STR) fprintf(stderr, STR); exit(EXIT_FAILURE)

struct node {
   Token token;
   struct node* parent;
   /* An array to hold pointers to children nodes */
   /* Allocate space for max 40 children */
   struct node* child[40];
   /* Number of children */
   int n;
};
typedef struct node Node;

struct tree {
   Node* root;
};
typedef struct tree Tree;

Tree* tree_init(Token token);
Node* tree_insert_child(Node* parent, Token token);

#endif /* TREE_H_ */
