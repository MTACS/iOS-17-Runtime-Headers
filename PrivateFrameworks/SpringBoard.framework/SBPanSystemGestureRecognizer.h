
@interface SBPanSystemGestureRecognizer : UIPanGestureRecognizer {
    bool  _failsPastMaximumPressDurationWithoutHysteresis;
    bool  _initialTouchReceived;
    double  _initialTouchReceivedTime;
    double  _maximumPressDuration;
    NSTimer * _noHysterisisCancellationTimer;
}

@property (nonatomic) <SBPanSystemGestureRecognizerDelegate> *delegate;
@property (nonatomic) bool failsPastMaximumPressDurationWithoutHysteresis;
@property (nonatomic) double maximumPressDuration;
@property (nonatomic, retain) NSTimer *noHysterisisCancellationTimer;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)failsPastMaximumPressDurationWithoutHysteresis;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidateNoHysterisisCancellationTimer;
- (double)maximumPressDuration;
- (id)noHysterisisCancellationTimer;
- (void)reset;
- (void)setFailsPastMaximumPressDurationWithoutHysteresis:(bool)arg1;
- (void)setMaximumPressDuration:(double)arg1;
- (void)setNoHysterisisCancellationTimer:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setupNoHysterisisCancellationTimerIfNeeded;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
