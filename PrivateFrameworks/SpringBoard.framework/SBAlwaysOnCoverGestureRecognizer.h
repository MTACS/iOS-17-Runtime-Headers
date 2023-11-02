
@interface SBAlwaysOnCoverGestureRecognizer : NSObject {
    SEL  _action;
    double  _maximumCoverDuration;
    float  _minimumScreenCoverage;
    long long  _state;
    id  _target;
    BSContinuousMachTimer * _timer;
}

@property (nonatomic) double maximumCoverDuration;
@property (nonatomic) float minimumScreenCoverage;

- (void).cxx_destruct;
- (void)_gestureBeganWithEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_gestureCanceledWithEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_gestureEndedWithEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_setState:(long long)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)maximumCoverDuration;
- (float)minimumScreenCoverage;
- (void)processHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)setMaximumCoverDuration:(double)arg1;
- (void)setMinimumScreenCoverage:(float)arg1;

@end
