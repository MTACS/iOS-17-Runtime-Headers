
@interface ABFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing> {
    double  _bounce;
    double  _duration;
    bool  _tracking;
    double  _trackingBounce;
    double  _trackingDuration;
}

@property (nonatomic) double input;
@property (nonatomic) double output;
@property (nonatomic) bool tracking;

- (id)init;
- (double)input;
- (double)output;
- (struct { double x1; double x2; bool x3; bool x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (double)projectForDeceleration:(double)arg1;
- (double)projectForTime:(double)arg1;
- (void)setBounce:(double)arg1 duration:(double)arg2;
- (void)setInput:(double)arg1;
- (void)setOutput:(double)arg1;
- (void)setTracking:(bool)arg1;
- (void)setTrackingBounce:(double)arg1 duration:(double)arg2;
- (bool)tracking;

@end
