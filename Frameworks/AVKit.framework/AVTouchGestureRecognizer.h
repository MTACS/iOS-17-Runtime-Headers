
@interface AVTouchGestureRecognizer : UIGestureRecognizer {
    NSMutableArray * _candidateGestureIncrementsMultiTouchInfo;
    NSTimer * _gestureWarmUpDelayTimer;
}

- (void).cxx_destruct;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
