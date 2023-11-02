
@interface TUNavigationBarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating> {
    NSArray * _barButtonItemViews;
    bool  _compressTitleView;
    TUNavigationBarCompressibleTitleView * _compressibleTitleView;
    bool  _hideTitleOnTop;
    UINavigationBar * _navigationBar;
    TUAnimationFloatFunction * _opacityFunction;
    TUAnimationFloatFunction * _scaleFunction;
    TUAnimationFloatFunction * _translateFunction;
    bool  shouldCloseGapOnScroll;
    bool  shouldCompressAtTop;
    double  topOffset;
}

@property (nonatomic, retain) NSArray *barButtonItemViews;
@property (nonatomic) bool compressTitleView;
@property (nonatomic, retain) TUNavigationBarCompressibleTitleView *compressibleTitleView;
@property (nonatomic) bool hideTitleOnTop;
@property (nonatomic, readonly) UINavigationBar *navigationBar;
@property (nonatomic, retain) TUAnimationFloatFunction *opacityFunction;
@property (nonatomic, retain) TUAnimationFloatFunction *scaleFunction;
@property (nonatomic, readonly) bool shouldCloseGapOnScroll;
@property (nonatomic, readonly) bool shouldCompressAtTop;
@property (nonatomic, readonly) double topOffset;
@property (nonatomic, retain) TUAnimationFloatFunction *translateFunction;

- (void).cxx_destruct;
- (bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(bool)arg2;
- (id)barButtonItemViews;
- (bool)compressTitleView;
- (id)compressibleTitleView;
- (bool)hideTitleOnTop;
- (id)initWithNavigationBar:(id)arg1;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (id)navigationBar;
- (id)opacityFunction;
- (void)prepareForUpdates;
- (void)reloadWithTraitCollection:(id)arg1;
- (id)scaleFunction;
- (void)scrollViewIsAtTop:(bool)arg1 offset:(double)arg2;
- (void)setBarButtonItemViews:(id)arg1;
- (void)setCompressTitleView:(bool)arg1;
- (void)setCompressibleTitleView:(id)arg1;
- (void)setHideTitleOnTop:(bool)arg1;
- (void)setOpacityFunction:(id)arg1;
- (void)setScaleFunction:(id)arg1;
- (void)setTranslateFunction:(id)arg1;
- (bool)shouldCloseGapOnScroll;
- (bool)shouldCompressAtTop;
- (double)topOffset;
- (id)translateFunction;
- (void)updateWithPercentage:(double)arg1;

@end
