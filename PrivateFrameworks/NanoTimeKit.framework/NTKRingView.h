
@interface NTKRingView : CLKUIColoringView {
    double  _fillFraction;
    <CLKMonochromeFilterProvider> * _filterProvider;
    bool  _hidesOverlapShadow;
    double  _overlapWidth;
    double  _radius;
    double  _ringWidth;
    bool  _shouldUseMonochromeAccentColor;
}

@property (nonatomic) double fillFraction;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic) bool hidesOverlapShadow;
@property (nonatomic, readonly) double overlapWidth;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) double ringWidth;
@property (nonatomic) bool shouldUseMonochromeAccentColor;

- (void).cxx_destruct;
- (void)_drawBackgroundRings;
- (void)_drawRingWithRadius:(double)arg1 fillFraction:(double)arg2 alpha:(double)arg3 hidesOverlapShadow:(bool)arg4;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)fillFraction;
- (id)filterProvider;
- (long long)filterStyle;
- (bool)hidesOverlapShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 radius:(double)arg2 ringWidth:(double)arg3 overlapWidth:(double)arg4;
- (double)overlapWidth;
- (double)radius;
- (double)ringWidth;
- (void)setFillFraction:(double)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)setHidesOverlapShadow:(bool)arg1;
- (void)setShouldUseMonochromeAccentColor:(bool)arg1;
- (bool)shouldUseMonochromeAccentColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
