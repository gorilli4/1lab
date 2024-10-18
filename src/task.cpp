#include "../include/task.h"
#include <cmath>

int task(double UpSpeed, double DownSpeed, double DesiredHeight) {
    if(DesiredHeight < 0) { return -1; }

    if(DesiredHeight == 0) { return 0; }

    if(DownSpeed - UpSpeed >= 0)
    { 
        if(UpSpeed >= DesiredHeight) {return 1; } else { return -1; }
        return -1; 
    }

    //if(UpSpeed > DesiredHeight) { return 0; }
    
    return ceil((DesiredHeight - UpSpeed) / (UpSpeed - DownSpeed)) + 1;//ax + a - bx = c
    // int height = 0;
    // int cnt = 0;
    // if(DesiredHeight < 1) {
    //     return -1;
    // }
    // if(UpSpeed < DownSpeed) {
    //     if(UpSpeed < DesiredHeight) {
    //         return -1;
    //     }
    //     while(height + (UpSpeed - DownSpeed) > DesiredHeight) {
    //         cnt += 1;
    //         height += UpSpeed - DownSpeed;
    //     }
    //     return cnt + 1;
    // } else {
    //     if(UpSpeed > DesiredHeight) {
    //         return 0;
    //     }
    //     while(height + UpSpeed < DesiredHeight) {
    //         cnt += 1;
    //         height += UpSpeed - DownSpeed;
    //     }
    //     return cnt + 1;
    // }
}