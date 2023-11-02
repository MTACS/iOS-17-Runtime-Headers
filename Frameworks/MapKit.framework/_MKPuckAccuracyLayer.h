
@interface _MKPuckAccuracyLayer : CALayer {
    double  _additionalOpacityMultiplier;
    double  _additionalStrokeOpacityMultiplier;
    double  _baseOpacity;
    double  _baseStrokeOpacity;
    bool  _externallyHidden;
    bool  _faux3DEnabled;
    CAGradientLayer * _faux3DHighlight;
    CALayer * _faux3DHighlightMask;
    NSArray * _faux3DHighlightMaskRings;
    CALayer * _faux3DShadow;
    UIColor * _fullOpacityFillColor;
    UIColor * _fullOpacityStrokeColor;
    bool  _internallyHidden;
    double  _mapCameraDistance;
    double  _mapPitchRadians;
    unsigned long long  _mapType;
    double  _minimumRadius;
    CALayer * _ring;
    bool  _shouldShowAnimationsIfAvailable;
    bool  _stale;
    UIColor * _tintColor;
    UITraitCollection * _traitCollection;
    bool  _useDarkAppearance;
}

@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) double currentAccuracy;
@property (getter=isFaux3DEnabled, nonatomic) bool faux3DEnabled;
@property (nonatomic) double mapCameraDistance;
@property (nonatomic) double mapPitchRadians;
@property (nonatomic) unsigned long long mapType;
@property (nonatomic) double minimumRadius;
@property (nonatomic, readonly) double presentationFillOpacity;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } significantBounds;
@property (getter=isStale, nonatomic) bool stale;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (void)_createFaux3DRings;
- (void)_updateColors;
- (void)_updateFaux3DRingsIfNecessary;
- (double)accuracy;
- (double)currentAccuracy;
- (id)init;
- (bool)isFaux3DEnabled;
- (bool)isStale;
- (double)mapCameraDistance;
- (double)mapPitchRadians;
- (unsigned long long)mapType;
- (double)minimumRadius;
- (double)presentationFillOpacity;
- (void)setAccuracy:(double)arg1 duration:(double)arg2;
- (void)setFaux3DEnabled:(bool)arg1;
- (void)setFillOpacity:(double)arg1 duration:(double)arg2;
- (void)setHidden:(bool)arg1;
- (void)setMapCameraDistance:(double)arg1;
- (void)setMapPitchRadians:(double)arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)setMinimumRadius:(double)arg1;
- (void)setStale:(bool)arg1;
- (void)setStrokeOpacity:(double)arg1 duration:(double)arg2;
- (void)setTintColor:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })significantBounds;
- (void)startAnimationsIfNecessary;
- (void)stopAnimations;
- (id)tintColor;
- (id)traitCollection;
- (void)updateLegacyConfiguration;

@end
