
@protocol _UIEventObserver <NSObject>

@optional

- (void)_gestureRecognizer:(UIGestureRecognizer *)arg1 didTransitionToState:(long long)arg2;
- (NSArray *)_gestureRecognizersForEvent:(UIEvent *)arg1;

@end
