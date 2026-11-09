//202610125311秦玉杰
#include <stdio.h>
struct Window{
    int buffer[3];
    int count;
};
struct Window push_data(struct Window win, int val){
    win.buffer[win.count%3]=val;
    win.count++;
    return win;
}
int get_average(struct Window win){
    int sum=0;
    int limit=(win.count<3)?win.count:3;
    for(int i=0;i<limit;i++){
        sum+=win.buffer[i];
    }
    return sum/limit;
}
int main(){
    int m;
    if (scanf("%d",&m)!=1)
    {return 0;
    }
    struct Window win={{0,0,0},0};
    for (int i = 0; i < m; i++)
    {int val;
        scanf("%d",&val);
        win=push_data(win,val);
       int avg=get_average(win);
       if (i>0)
       {printf(" ");
        
       }
       printf("%d",avg);
    }
    printf("\n");
    return 0;
    
}