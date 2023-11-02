
@interface _UIFocusHaloView : UIView <PTSettingsKeyObserver> {
    UIColor * _gapColor;
    UITraitCollection * _gapSourceTraitCollection;
    _UIShapeView * _gapView;
    double  _gapWidth;
    bool  _geometryFrozen;
    _UIShapeView * _haloView;
    _UIShapeView * _maskViewWhenInside;
    long long  _position;
    _UIShape * _shape;
    double  _thickness;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *gapColor;
@property (nonatomic, retain) UITraitCollection *gapSourceTraitCollection;
@property (nonatomic, retain) _UIShapeView *gapView;
@property (nonatomic) double gapWidth;
@property (nonatomic) bool geometryFrozen;
@property (nonatomic, readonly) UIColor *haloColor;
@property (nonatomic, retain) _UIShapeView *haloView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIShapeView *maskViewWhenInside;
@property (nonatomic) long long position;
@property (nonatomic, copy) _UIShape *shape;
@property (readonly) Class superclass;
@property (nonatomic) double thickness;
@property (nonatomic, readonly) double totalConsumedSpace;

- (void).cxx_destruct;
- (bool)_debugEnabled;
- (bool)_ignoreRemoveAllAnimations;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_updateDebugUI;
- (void)_updateGapColor;
- (void)_updateHalo;
- (void)_updateHaloForCurrentUserInterfaceStyle;
- (id)description;
- (void)didMoveToSuperview;
- (id)gapColor;
- (id)gapSourceTraitCollection;
- (id)gapView;
- (double)gapWidth;
- (bool)geometryFrozen;
- (id)haloColor;
- (id)haloView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)maskViewWhenInside;
- (long long)position;
- (id)resolvedGapColor;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGapColor:(id)arg1;
- (void)setGapSourceTraitCollection:(id)arg1;
- (void)setGapView:(id)arg1;
- (void)setGapWidth:(double)arg1;
- (void)setGeometryFrozen:(bool)arg1;
- (void)setHaloView:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setMaskViewWhenInside:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setShape:(id)arg1;
- (void)setThickness:(double)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)shape;
- (double)thickness;
- (void)tintColorDidChange;
- (double)totalConsumedSpace;

@end
