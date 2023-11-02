
@interface UITouchData : NSObject {
    unsigned long long  lastTapCount;
    UITouch * lastTouch;
    double  lastTouchDownTimestamp;
    double  lastTouchUpTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  startTouchDownLocation;
    bool  touchIsValidTap;
}

@end
