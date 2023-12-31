
@interface PUGridPinchGestureRecognizer : UIPinchGestureRecognizer {
    double  _lastTransitionProgress;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touch0InitialLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touch1InitialLocation;
    unsigned long long  _transitionDirection;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } centerOffset;
@property (nonatomic, readonly) unsigned long long transitionDirection;
@property (nonatomic, readonly) double transitionProgress;
@property (nonatomic, readonly) bool transitionShouldFinish;

- (void)_resetTransitionState;
- (struct CGSize { double x1; double x2; })centerOffset;
- (void)reset;
- (void)setState:(long long)arg1;
- (unsigned long long)transitionDirection;
- (double)transitionProgress;
- (bool)transitionShouldFinish;

@end
