
@interface AnimationEngine : NSObject {
    double  _animationDuration;
    unsigned long long  _animationOptions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastAnimationDriveTime;
    float  _position;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
    float  _targetPosition;
    float  _velocity;
}

@property (nonatomic) float position;
@property (nonatomic) float velocity;

- (void)_resetAnimations;
- (void)animateWithDuration:(double)arg1 toTarget:(float)arg2 options:(unsigned long long)arg3 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)driveAnimationAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withConstraints:(struct AnimationEngineAnimationConstraints { struct MotionConstraints { float x_1_1_1; float x_1_1_2; } x1; struct MotionConstraints { float x_2_1_1; float x_2_1_2; } x2; struct MotionConstraints { float x_3_1_1; float x_3_1_2; } x3; })arg2 withMultiplier:(float)arg3;
- (id)initWithInitialPosition:(float)arg1;
- (float)position;
- (void)setPosition:(float)arg1;
- (void)setVelocity:(float)arg1;
- (float)velocity;

@end
