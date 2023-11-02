
@interface NTKRingsAndDotsView : UIView <CLKUIColoringView> {
    double  _appearanceAnimationProgress;
    double  _diameter;
    UIColor * _foregroundColor;
    bool  _hidesOverlapShadow;
    UIColor * _overrideColor;
    NSArray * _ringColors;
    double  _ringGapWidth;
    NSArray * _ringViews;
    double  _ringWidth;
    NSMutableArray * _ringsFillFractions;
    UIColor * _secondaryForegroundColor;
    bool  _shouldUseMonochromeAccentColor;
}

@property (nonatomic) double appearanceAnimationProgress;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double diameter;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesOverlapShadow;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic, copy) NSArray *ringColors;
@property (nonatomic) double ringGapWidth;
@property (nonatomic, retain) NSArray *ringViews;
@property (nonatomic) double ringWidth;
@property (nonatomic, copy) NSMutableArray *ringsFillFractions;
@property (nonatomic, retain) UIColor *secondaryForegroundColor;
@property (nonatomic) bool shouldUseMonochromeAccentColor;
@property (readonly) Class superclass;
@property (nonatomic) bool usesLegibility;

+ (id)emptyFillFractions;

- (void).cxx_destruct;
- (void)_setDiameter:(double)arg1;
- (double)appearanceAnimationProgress;
- (double)diameter;
- (id)foregroundColor;
- (bool)hidesOverlapShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 diameter:(double)arg2 ringWidth:(double)arg3 ringGapWidth:(double)arg4 overlapStrokeWidth:(double)arg5;
- (void)layoutSubviews;
- (id)overrideColor;
- (double)radiusForRingAtIndex:(long long)arg1;
- (id)ringColors;
- (double)ringGapWidth;
- (id)ringViews;
- (double)ringWidth;
- (id)ringsFillFractions;
- (id)secondaryForegroundColor;
- (void)setAppearanceAnimationProgress:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setDiameter:(double)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setHidesOverlapShadow:(bool)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setRingColors:(id)arg1;
- (void)setRingGapWidth:(double)arg1;
- (void)setRingViews:(id)arg1;
- (void)setRingWidth:(double)arg1;
- (void)setRingsFillFractions:(id)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setShouldUseMonochromeAccentColor:(bool)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (bool)shouldUseMonochromeAccentColor;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (bool)usesLegibility;

@end
