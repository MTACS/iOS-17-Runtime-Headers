
@interface PKPencilObserverGestureRecognizer : UIGestureRecognizer {
    bool  _delegateRespondsToDidBegin;
    bool  _delegateRespondsToDidEnd;
    bool  _delegateRespondsToDidMove;
    UITouch * _drawingTouch;
}

- (void).cxx_destruct;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
