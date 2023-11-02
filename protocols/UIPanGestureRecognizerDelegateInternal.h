
@protocol UIPanGestureRecognizerDelegateInternal <UIGestureRecognizerDelegate>

@optional

- (bool)_panGestureRecognizer:(UIPanGestureRecognizer *)arg1 shouldTryToBeginHorizontallyWithEvent:(UIEvent *)arg2;
- (bool)_panGestureRecognizer:(UIPanGestureRecognizer *)arg1 shouldTryToBeginVerticallyWithEvent:(UIEvent *)arg2;

@end
