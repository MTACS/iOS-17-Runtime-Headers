
@interface ARCoachingMotionTracker : NSObject {
    bool  _isMoving;
    void _lastPosition;
    double  _lastThresholdBreakTime;
    double  _lastTime;
    int  _thresholdBreakCount;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _velocities;
    int  _velocityIndex;
    bool  _wasMoving;
}

@property (nonatomic, readonly) bool didStartMoving;
@property (nonatomic, readonly) bool didStopMoving;
@property (nonatomic) bool isMoving;

- (void)calcAverageVelocity;
- (void)clear;
- (bool)didStartMoving;
- (bool)didStopMoving;
- (id)init;
- (bool)isMoving;
- (void)setIsMoving:(bool)arg1;
- (void)updateWithFrame:(id)arg1;

@end
