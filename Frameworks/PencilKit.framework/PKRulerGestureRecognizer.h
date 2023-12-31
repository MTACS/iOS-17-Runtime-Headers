
@interface PKRulerGestureRecognizer : PKFreeTransformGestureRecognizer {
    bool  _initialSnap;
    double  _startDelay;
    double  _startSnapThreshold;
    NSTimer * _startTimer;
}

@property (nonatomic) double startDelay;
@property (nonatomic) double startSnapThreshold;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })freeTransform;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)resetAndAccumulateTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rulerTransform;
- (void)setStartDelay:(double)arg1;
- (void)setStartSnapThreshold:(double)arg1;
- (void)start;
- (double)startDelay;
- (double)startSnapThreshold;
- (void)stopTimer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })unscaledFreeTransform;

@end
