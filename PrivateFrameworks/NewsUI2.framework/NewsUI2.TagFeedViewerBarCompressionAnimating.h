
@interface NewsUI2.TagFeedViewerBarCompressionAnimating : _TtCs12_SwiftObject <TUBarCompressionAnimating> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  mastheadModel;
    void percentage;
    void scrollPosition;
    void scrollView;
    void sectionModel;
    void viewController;
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
