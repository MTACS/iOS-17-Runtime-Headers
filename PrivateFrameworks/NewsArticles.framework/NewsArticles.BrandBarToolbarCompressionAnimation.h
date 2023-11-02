
@interface NewsArticles.BrandBarToolbarCompressionAnimation : _TtCs12_SwiftObject <TUBarCompressionAnimating> {
    void brandBar;
    void shouldCloseGapOnScroll;
    void shouldCompressAtTop;
    void topOffset;
}

@property (nonatomic, readonly) bool shouldCloseGapOnScroll;
@property (nonatomic, readonly) bool shouldCompressAtTop;
@property (nonatomic, readonly) double topOffset;

- (bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(bool)arg2;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (void)prepareForUpdates;
- (void)reloadWithTraitCollection:(id)arg1;
- (void)scrollViewIsAtTop:(bool)arg1 offset:(double)arg2;
- (bool)shouldCloseGapOnScroll;
- (bool)shouldCompressAtTop;
- (double)topOffset;
- (void)updateWithPercentage:(double)arg1;

@end
