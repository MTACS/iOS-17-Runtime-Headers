
@protocol TUBarCompressionAnimating

@required

- (bool)animationShouldBeginForScrollView:(UIScrollView *)arg1 currentlyFullyCompressed:(bool)arg2;
- (double)maximumBarHeightForTraitCollection:(UITraitCollection *)arg1;
- (double)minimumBarHeightForTraitCollection:(UITraitCollection *)arg1;
- (void)prepareForUpdates;
- (void)reloadWithTraitCollection:(UITraitCollection *)arg1;
- (void)scrollViewIsAtTop:(bool)arg1 offset:(double)arg2;
- (bool)shouldCloseGapOnScroll;
- (bool)shouldCompressAtTop;
- (double)topOffset;
- (void)updateWithPercentage:(double)arg1;

@end
