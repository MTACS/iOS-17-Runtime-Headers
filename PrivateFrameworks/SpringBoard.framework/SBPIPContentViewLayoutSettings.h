
@interface SBPIPContentViewLayoutSettings : NSObject {
    SBPIPContentViewLayoutContext * _context;
    SBPIPDefaults * _pipDefaults;
    SBPIPContentViewLayoutMetrics * _platformMetrics;
}

+ (id)pipDefaults;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_contentViewSizeForAspectRatio:(struct CGSize { double x1; double x2; })arg1 currentSize:(double)arg2;
- (struct CGSize { double x1; double x2; })_maximumContentViewSizeForAspectRatio:(struct CGSize { double x1; double x2; })arg1 maximumReferenceSize:(double)arg2;
- (struct CGSize { double x1; double x2; })_minimumContentViewSizeForAspectRatio:(struct CGSize { double x1; double x2; })arg1 minimumReferenceSize:(double)arg2;
- (double)contentViewPadding;
- (double)contentViewPaddingWhileStashed;
- (unsigned long long)currentContentViewPosition;
- (struct CGSize { double x1; double x2; })currentContentViewSizeForAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })defaultContentViewSizeForAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (double)defaultCornerRadius;
- (id)initWithPlatformMetrics:(id)arg1 contentSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })maximumPossibleContentViewSizeForAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })maximumPreferredContentViewSizeForAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })minimumPossibleContentViewSizeForAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })minimumPreferredContentViewSizeForAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })minimumStashedTabSize;
- (id)platformMetrics;
- (void)setContentViewPosition:(unsigned long long)arg1;
- (void)setContentViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMaximumSizeSpanForPreferredSizeTuning:(double)arg1;
- (void)setMinimumSizeSpanBetweenPreferredSizes:(double)arg1;
- (void)updatePlatformMetrics:(id)arg1;

@end
