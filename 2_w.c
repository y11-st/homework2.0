//202610125311
//秦玉杰
#include <stdio.h>
struct Sensor{
    int temp;
    int humi;
    int valid;
};
struct Sensor pack_sensor(int t, int h){
    struct Sensor s;
    s.temp=t;
    s.humi=h;
    if(t>=-20 && t<=50 && h>=0 && h<=100){
        s.valid=1;
    }else{
        s.valid=0;
    }
return s;
}
int main(){
    int t,h;
    if (scanf("%d %d",&t,&h)!=2)
    {return 0;
    }
    struct Sensor my_sensor=pack_sensor(t,h);
    if(my_sensor.valid==1){
        printf("TEMP=%d HUMI=%d\n",my_sensor.temp,my_sensor.humi);
    }
    else {
        printf("ERROR:Out of Range\n");
    }
    return 0;
    
}