
@interface AVScrubbingPanGestureRecognizer : UIGestureRecognizer {
    NSMutableArray * _candidateGestureIncrements;
    AVPanGestureIncrement * _lastPanGestureIncrement;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } translation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } velocity;

- (void).cxx_destruct;
- (void)_debugLogGestureIncrements:(id)arg1 withPrefix:(id)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })translation;
- (struct CGPoint { double x1; double x2; })velocity;

@end
