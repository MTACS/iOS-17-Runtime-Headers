
@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>

@required

- (UIKeyboardTaskQueue *)taskQueue;
- (_UIKeyboardTextSelectionController *)textSelectionController;

@optional

- (void)didEndGesture;
- (bool)hasMarkedText;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (bool)shouldAllowSelectionGestures:(bool)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;
- (bool)shouldAllowTwoFingerSelectionGestureOnView:(UIView *)arg1;
- (double)timestampOfLastTouchesEnded;
- (bool)transitionInProgress;
- (void)willBeginGesture;

@end
