#pragma once


//Nodes in a one-way-forward lst
typedef struct norm_node{
	int key;
	struct norm_node* next;
}norm_node;

//Nodes in a dual lst
typedef struct dual_node {
	int key;
	struct dual_node* next;
	struct dual_node* prev;
}dual_node;

typedef struct {
	norm_node* lst_head;
}lkd_lst;

typedef struct {
	norm_node* lst_head;
	norm_node* lst_tail;
}cycle_lst;

typedef struct {
	dual_node* head;
}dual_lst;


