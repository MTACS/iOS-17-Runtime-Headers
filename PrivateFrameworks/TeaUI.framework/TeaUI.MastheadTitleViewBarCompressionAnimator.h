
@interface TeaUI.MastheadTitleViewBarCompressionAnimator : NSObject <TUBarCompressionAnimating> {
    void compressibleTitleView;
    void navigationBar;
    void shouldAnimate;
    void topOffset;
}

@property (nonatomic, readonly) bool shouldCloseGapOnScroll;
@property (nonatomic, readonly) bool shouldCompressAtTop;
@property (nonatomic) double topOffset;

- (void).cxx_destruct;
- (bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(bool)arg2;
- (id)init;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (void)prepareForUpdates;
- (void)reloadWithTraitCollection:(id)arg1;
- (void)scrollViewIsAtTop:(bool)arg1 offset:(double)arg2;
- (void)setTopOffset:(double)arg1;
- (bool)shouldCloseGapOnScroll;
- (bool)shouldCompressAtTop;
- (double)topOffset;
- (void)updateWithPercentage:(double)arg1;

@end
