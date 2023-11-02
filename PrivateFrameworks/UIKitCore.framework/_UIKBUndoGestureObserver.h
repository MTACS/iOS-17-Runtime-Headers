
@interface _UIKBUndoGestureObserver : UIGestureRecognizer

+ (id)undoGestureObserverWithTarget:(id)arg1 action:(SEL)arg2 delegate:(id)arg3;

- (bool)_affectedByGesture:(id)arg1;
- (bool)_analyticsIsGestureHandled;
- (void)_failOrCancelIfNecessary;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
