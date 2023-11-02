
@protocol SBIconScrollViewDelegate <BSUIScrollViewDelegate>

@required

- (bool)iconScrollView:(SBIconScrollView *)arg1 shouldSetAutoscrollContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (bool)iconScrollView:(SBIconScrollView *)arg1 shouldSetContentOffset:(struct CGPoint { double x1; double x2; }*)arg2 animated:(bool)arg3;
- (void)iconScrollViewDidCancelTouchTracking:(SBIconScrollView *)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(SBIconScrollView *)arg1;

@end
