
@protocol PXGMutableScrollViewModel

@required

- (bool)alwaysBounceHorizontal;
- (bool)alwaysBounceVertical;
- (bool)clipsToBounds;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (bool)draggingPerformsScroll;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestContentInsets;
- (double)horizontalInterPageSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })horizontalScrollIndicatorInsets;
- (long long)scrollDecelerationRate;
- (long long)scrollRegime;
- (void)setAlwaysBounceHorizontal:(bool)arg1;
- (void)setAlwaysBounceVertical:(bool)arg1;
- (void)setClipsToBounds:(bool)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDraggingPerformsScroll:(bool)arg1;
- (void)setHitTestContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHorizontalInterPageSpacing:(double)arg1;
- (void)setHorizontalScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScrollDecelerationRate:(long long)arg1;
- (void)setScrollRegime:(long long)arg1;
- (void)setShowsHorizontalScrollIndicator:(bool)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (void)setVerticalScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)showsHorizontalScrollIndicator;
- (bool)showsVerticalScrollIndicator;
- (void)stopScrolling;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })verticalScrollIndicatorInsets;

@end
