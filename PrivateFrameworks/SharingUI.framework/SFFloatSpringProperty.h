
@interface SFFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing> {
    double  _dampingRatio;
    bool  _primed;
    double  _response;
    bool  _tracking;
    double  _trackingDampingRatio;
    double  _trackingResponse;
}

@property (nonatomic) double input;
@property (nonatomic) double output;
@property (nonatomic) bool primed;
@property (nonatomic) bool tracking;

+ (void)_withoutAnimation:(id /* block */)arg1;

- (id)init;
- (double)input;
- (double)output;
- (struct { double x1; double x2; bool x3; bool x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (bool)primed;
- (double)projectForDeceleration:(double)arg1;
- (double)projectForTime:(double)arg1;
- (void)setDampingRatio:(double)arg1 response:(double)arg2;
- (void)setInput:(double)arg1;
- (void)setOutput:(double)arg1;
- (void)setPrimed:(bool)arg1;
- (void)setTracking:(bool)arg1;
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2;
- (bool)tracking;

@end
