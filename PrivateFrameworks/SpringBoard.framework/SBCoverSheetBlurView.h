
@interface SBCoverSheetBlurView : UIView <PBUIWallpaperObserver> {
    id /* block */  _alphaAdjustment;
    double  _blurRadius;
    UIColor * _dimmingColor;
    UIView * _reduceTransparencyView;
    id /* block */  _scaleAdjustment;
    long long  _variantToTrack;
    double  _weighting;
}

@property (nonatomic) double blurRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *dimmingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double weighting;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_averageWallpaperColor;
- (void)_configureForCurrentReduceTransparencySetting;
- (void)_createFilters;
- (void)_createReduceTransparencyView;
- (void)_reduceTransparencyEnabledStateDidChange:(id)arg1;
- (void)_removeFilters;
- (void)_removeReduceTransparencyView;
- (void)_updateForBlurRadius:(double)arg1 weighting:(double)arg2 forPresentationValue:(bool)arg3;
- (id)backdropLayer;
- (double)blurRadius;
- (void)dealloc;
- (id)dimmingColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scaleAdjustment:(id /* block */)arg2 alphaAdjustment:(id /* block */)arg3;
- (void)layoutSubviews;
- (void)setBlurRadius:(double)arg1;
- (void)setDimmingColor:(id)arg1;
- (void)setWeighting:(double)arg1;
- (void)setWeighting:(double)arg1 forPresentationValue:(bool)arg2;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (double)weighting;

@end
