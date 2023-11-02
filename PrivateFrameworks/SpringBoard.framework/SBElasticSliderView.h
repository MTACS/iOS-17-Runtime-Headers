
@interface SBElasticSliderView : CCUIContinuousSliderView {
    unsigned long long  _accessoryLayoutEdge;
    unsigned long long  _accessoryViewPadding;
    double  _additiveGlyphScaleFactor;
    MTMaterialView * _baseMaterialView;
    MTMaterialView * _captureOnlyMaterialView;
    double  _compactMinorAxisDimension;
    double  _cornerRadiusMinorAxisFraction;
    UIView * _leadingAccessoryView;
    UIView * _maskView;
    double  _regularMinorAxisDimension;
    unsigned long long  _shadowMode;
    UIView * _shadowView;
    UIView * _trailingAccessoryView;
}

@property (nonatomic) unsigned long long accessoryLayoutEdge;
@property (nonatomic) unsigned long long accessoryViewPadding;
@property (nonatomic) double additiveGlyphScaleFactor;
@property (nonatomic) double compactMinorAxisDimension;
@property (nonatomic) double cornerRadiusMinorAxisFraction;
@property (nonatomic, retain) UIView *leadingAccessoryView;
@property (nonatomic) double regularMinorAxisDimension;
@property (nonatomic) unsigned long long shadowMode;
@property (nonatomic, retain) UIView *trailingAccessoryView;

- (void).cxx_destruct;
- (id)_createElasticBackgroundView;
- (struct CGPoint { double x1; double x2; })_elasticGlyphCenterForDefaultGlyphCenter:(struct CGPoint { double x1; double x2; })arg1;
- (double)_fractionToRegularMetrics;
- (void)_layoutAccessoryViews;
- (double)_minorAxisElasticLength;
- (void)_updateCornerRadius;
- (void)_updateGlyphScaleForAdditiveScaleOrAxisUpdate;
- (void)_updateShadowMode;
- (unsigned long long)accessoryLayoutEdge;
- (unsigned long long)accessoryViewPadding;
- (double)additiveGlyphScaleFactor;
- (double)compactMinorAxisDimension;
- (double)cornerRadiusMinorAxisFraction;
- (id)createBackgroundView;
- (struct CGPoint { double x1; double x2; })glyphCenter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutElasticContentViews;
- (id)leadingAccessoryView;
- (double)regularMinorAxisDimension;
- (void)setAccessoryLayoutEdge:(unsigned long long)arg1;
- (void)setAccessoryViewPadding:(unsigned long long)arg1;
- (void)setAdditiveGlyphScaleFactor:(double)arg1;
- (void)setAxis:(unsigned long long)arg1;
- (void)setCompactMinorAxisDimension:(double)arg1;
- (void)setContinuousSliderCornerRadius:(double)arg1;
- (void)setCornerRadiusMinorAxisFraction:(double)arg1;
- (void)setLeadingAccessoryView:(id)arg1;
- (void)setRegularMinorAxisDimension:(double)arg1;
- (void)setShadowMode:(unsigned long long)arg1;
- (void)setTrailingAccessoryView:(id)arg1;
- (unsigned long long)shadowMode;
- (bool)shouldAlwaysEnableButtonElasticity;
- (id)trailingAccessoryView;

@end
