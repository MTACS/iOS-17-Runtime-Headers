
@protocol VideosUI.VUIScrollViewDelegate

@required

- (void)vuiScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)vuiScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(bool)arg2;
- (void)vuiScrollViewDidEndScrollingAnimation:(UIScrollView *)arg1;
- (void)vuiScrollViewDidScroll:(UIScrollView *)arg1;
- (void)vuiScrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;

@optional

- (bool)vuiScrollViewShouldScrollToTop:(UIScrollView *)arg1;

@end
