
@protocol UIScrollViewIntersectionDelegate

@required

- (void)scrollView:(UIScrollView *)arg1 didFinishPanGesture:(UIPanGestureRecognizer *)arg2;
- (void)scrollView:(UIScrollView *)arg1 didPanWithGesture:(UIPanGestureRecognizer *)arg2;

@end
