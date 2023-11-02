
@protocol SBIconListPageControlDelegate

@required

- (UIView *)highlightingViewForPageControl:(SBIconListPageControl *)arg1;
- (void)pageControl:(SBIconListPageControl *)arg1 didMoveCurrentPageToPage:(long long)arg2 withScrubbing:(bool)arg3;
- (void)pageControlDidBeginScrubbing:(SBIconListPageControl *)arg1;
- (void)pageControlDidEndScrubbing:(SBIconListPageControl *)arg1;
- (void)pageControlDidReceiveButtonTap:(SBIconListPageControl *)arg1;

@end
