
@protocol WKDeferringGestureRecognizerDelegate

@required

- (void)deferringGestureRecognizer:(WKDeferringGestureRecognizer *)arg1 didEndTouchesWithEvent:(UIEvent *)arg2;
- (void)deferringGestureRecognizer:(WKDeferringGestureRecognizer *)arg1 didTransitionToState:(long long)arg2;
- (bool)deferringGestureRecognizer:(WKDeferringGestureRecognizer *)arg1 shouldDeferOtherGestureRecognizer:(UIGestureRecognizer *)arg2;
- (bool)deferringGestureRecognizer:(WKDeferringGestureRecognizer *)arg1 willBeginTouchesWithEvent:(UIEvent *)arg2;

@end
