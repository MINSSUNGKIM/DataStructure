/*Stack 이란 위(Top)에서 아래(Bottom)으로 쌓이는 구조의 자료구조이다.
LIFO, 예시로는 call stack, 뒤로가기 등 (프링글스통)
구현해야할 function 은 push, pop , isfull, isempty 등이 있다. */

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

typedef struct {
    int item;
}element; // stack 의 단위.
int top = -1; // stack 의 시작점.
element stack[MAX_SIZE]; 

int isFull(){
    if(top+1>=MAX_SIZE){
        printf("Stack is Full. No More push.\n"); 
        return 0;
    }
    else return 1;
}

int isEmpty(){
    if(top==-1){
        printf("Stack is empty. No more pop.\n");
        return 0;
    }
    else return 1;

}

void push(int item){
    if(isFull()){
        top ++;
        stack[top].item = item;
        printf("%d is inserted at the stack.\n",item);
    }
}

void printStack(){
    printf("bottom -> ");
    for (int i=0; i<=top; i++){
        printf("%d ",stack[i].item);
    }
    printf("<- top");
    printf("\n");
}

void pop(){
    if(isEmpty()){
        printf("%d is removed from the stack\n",stack[top].item);
        top--;
    }
    
    }



int main(){

    int opt;
    while(1){

        printf("    1.push 2.pop 3.print 4.exit \n");
        scanf("%d",&opt);

        if(opt == 1) {
            printf("type the number which you want to insert : ");
            int tmp;
            scanf("%d",&tmp);
            push(tmp);
        }

        else if(opt== 2){
            pop();
        }
        else if (opt ==3){
            printStack();
        }
        else if(opt ==4){
            return 0;
        }
    }


    return 0;
}
