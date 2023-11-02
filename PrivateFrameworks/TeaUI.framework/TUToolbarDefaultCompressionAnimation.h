
@interface TUToolbarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating> {
    UIToolbar * _toolbar;
    double  _topOffset;
}

@property (nonatomic, readonly) bool shouldCloseGapOnScroll;
@property (nonatomic, readonly) bool shouldCompressAtTop;
@property (nonatomic, retain) UIToolbar *toolbar;
@property (nonatomic, readonly) double topOffset;

- (void).cxx_destruct;
- (bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(bool)arg2;
- (id)initWithToolbar:(id)arg1;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (void)prepareForUpdates;
- (void)reloadWithTraitCollection:(id)arg1;
- (void)scrollViewIsAtTop:(bool)arg1 offset:(double)arg2;
- (void)setToolbar:(id)arg1;
- (bool)shouldCloseGapOnScroll;
- (bool)shouldCompressAtTop;
- (id)toolbar;
- (double)topOffset;
- (void)updateWithPercentage:(double)arg1;

@end
