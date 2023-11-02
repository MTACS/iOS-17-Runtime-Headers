
@protocol SBUIPresentableCancelSystemDragGestureRecognizerDelegate <UIGestureRecognizerDelegate>

@required

- (bool)gestureRecognizer:(SBUIPresentableCancelSystemDragGestureRecognizer *)arg1 shouldBeginWithTouches:(NSSet *)arg2 event:(UIEvent *)arg3;

@end
