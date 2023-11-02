
@protocol UIGestureRecognizerDelegateInternal <UIGestureRecognizerDelegatePrivate>

@optional

- (void)_gestureRecognizerFailed:(UIGestureRecognizer *)arg1;
- (bool)gestureRecognizer:(UIGestureRecognizer *)arg1 canBePreventedByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (bool)gestureRecognizer:(UIGestureRecognizer *)arg1 canPreventGestureRecognizer:(UIGestureRecognizer *)arg2;

@end
