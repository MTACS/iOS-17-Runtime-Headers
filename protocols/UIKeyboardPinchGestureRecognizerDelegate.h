
@protocol UIKeyboardPinchGestureRecognizerDelegate

@required

- (void)didDetectPinchWithSeparation:(double)arg1;
- (bool)pinchCanBeginWithTouches:(NSSet *)arg1 andScale:(double)arg2;
- (void)pinchDidConsumeTouch:(UITouch *)arg1;

@end
