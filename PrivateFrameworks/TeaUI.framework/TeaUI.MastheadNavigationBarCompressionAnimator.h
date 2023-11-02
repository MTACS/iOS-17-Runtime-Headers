
@interface TeaUI.MastheadNavigationBarCompressionAnimator : NSObject <TUBarCompressionAnimating> {
    void barCompressionAnimator;
    void scrollView;
}

@property (nonatomic, readonly) bool shouldCloseGapOnScroll;
@property (nonatomic, readonly) bool shouldCompressAtTop;
@property (nonatomic, readonly) double topOffset;

- (void).cxx_destruct;
- (bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(bool)arg2;
- (id)init;
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
