
@interface TSDPreventScrollGestureRecognizer : UIGestureRecognizer {
    TSDInteractiveCanvasController * mICC;
    UITouch * mSecondTouch;
    UITouch * mTouch;
}

- (id)initWithInteractiveCanvasController:(id)arg1;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
