
@interface _UILegacyPageControlVisualProvider : _UIPageControlVisualProvider {
    UIVisualEffectView * _backgroundVisualEffectView;
    UIImage * _currentPageImage;
    NSMutableArray * _currentPageImages;
    NSMutableArray * _indicators;
    UIImage * _pageImage;
    NSMutableArray * _pageImages;
}

- (void).cxx_destruct;
- (void)_cachePageIndicatorImages;
- (id)_cachedPageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_cachedPageIndicatorImageForPage:(long long)arg1;
- (void)_drawModernIndicatorInView:(id)arg1 enabled:(bool)arg2;
- (bool)_hasCustomImageForPage:(long long)arg1 enabled:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indicatorFrameAtIndex:(long long)arg1;
- (double)_indicatorSpacing;
- (id)_indicatorViewEnabled:(bool)arg1 index:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_modernBounds;
- (id)_modernColorEnabled:(bool)arg1;
- (double)_modernCornerRadius;
- (id)_pageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_pageIndicatorImageForPage:(long long)arg1;
- (void)_setDisplayedPage:(long long)arg1;
- (void)_transitionIndicator:(id)arg1 toEnabled:(bool)arg2 index:(long long)arg3;
- (id)defaultActivePageIndicatorImage;
- (void)didEndTrackingWithTouch:(id)arg1;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (void)didUpdateNumberOfPages;
- (void)didUpdatePageIndicatorTintColor;
- (id)effectiveContentView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIndicators;
- (void)layoutSubviews;
- (id)preferredIndicatorImage;
- (void)prepare;
- (void)pruneArchivedSubviews:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForNumberOfPages:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateDisplayedPageToCurrentPage;

@end
