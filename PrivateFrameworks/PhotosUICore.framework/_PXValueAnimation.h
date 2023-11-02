
@interface _PXValueAnimation : NSObject {
    double  _currentMediaTime;
    double  _duration;
    struct _PXValueAnimationSpec { 
        long long type; 
        double duration; 
        long long curve; 
        double epsilon; 
        double stiffness; 
        double dampingRatio; 
        double initialVelocity; 
    }  _spec;
    double  _startTime;
}

@property (nonatomic, readonly) double approximateVelocity;
@property (nonatomic, readonly) bool completed;
@property (nonatomic) double currentMediaTime;
@property (nonatomic, readonly) double currentValue;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) struct _PXValueAnimationSpec { long long x1; double x2; long long x3; double x4; double x5; double x6; double x7; } spec;
@property (nonatomic) double startTime;

- (double)approximateVelocity;
- (bool)completed;
- (double)currentMediaTime;
- (double)currentValue;
- (id)description;
- (double)duration;
- (double)elapsedTime;
- (id)init;
- (id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec { long long x1; double x2; long long x3; double x4; double x5; double x6; double x7; })arg3;
- (double)remainingTime;
- (void)setCurrentMediaTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (struct _PXValueAnimationSpec { long long x1; double x2; long long x3; double x4; double x5; double x6; double x7; })spec;
- (double)startTime;

@end
