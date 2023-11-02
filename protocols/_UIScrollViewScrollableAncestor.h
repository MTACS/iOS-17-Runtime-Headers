
@protocol _UIScrollViewScrollableAncestor <NSObject>

@required

- (bool)_descendentScrollView:(UIScrollView *)arg1 shouldPreserveStartOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)_descendentScrollViewDidCancelDragging:(UIScrollView *)arg1;
- (void)_descendentScrollViewDidEndDragging:(UIScrollView *)arg1;
- (bool)_descendentScrollViewShouldScrollHorizontally:(UIScrollView *)arg1;
- (bool)_descendentScrollViewShouldScrollVertically:(UIScrollView *)arg1;
- (struct CGPoint { double x1; double x2; })_scrollView:(UIScrollView *)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(struct CGPoint { double x1; double x2; })arg2 startOffset:(struct CGPoint { double x1; double x2; })arg3 horizontalVelocity:(inout double*)arg4 verticalVelocity:(inout double*)arg5 animator:(out id*)arg6;

@end
