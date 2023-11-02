
@interface MKUserLocationHeadingConeLayer : CAGradientLayer <MKUserLocationHeadingAnimatableIndicator, MKUserLocationHeadingIndicator> {
    double  _halfMinAngle;
    double  _headingAccuracy;
    double  _lastAccuracyRadius;
    unsigned long long  _mapType;
    CAShapeLayer * _maskLayer;
    double  _minimumAccuracyRadius;
    bool  _shouldMatchAccuracyRadius;
    UIColor * _tintColor;
    UITraitCollection * _traitCollection;
    _MKPuckAnnotationView * _userLocationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mapType;
@property (nonatomic) double minimumAccuracyRadius;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)_accuracyGradientLocationsForAccuracyRadius:(double)arg1;
- (void)_animateToOpacity:(double)arg1 completion:(id /* block */)arg2;
- (id)_colorsForAccuracyRadius:(double)arg1;
- (void)_createMaskLayer;
- (double)_opacityForAccuracy:(double)arg1 locationAccuracy:(double)arg2;
- (bool)_shouldShowHeadingForAccuracy:(double)arg1;
- (void)_updateColors;
- (void)_updateHeadingMaskForAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)_updateShowHeadingForAccuracy:(double)arg1;
- (void)animateToSetVisible:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithUserLocationView:(id)arg1 shouldMatchAccuracyRadius:(bool)arg2 minimumPresentationAngle:(double)arg3;
- (unsigned long long)mapType;
- (double)minimumAccuracyRadius;
- (void)setAccuracyRadius:(double)arg1 duration:(double)arg2;
- (void)setMapType:(unsigned long long)arg1;
- (void)setMinimumAccuracyRadius:(double)arg1;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;
- (void)updateHeading:(double)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)updateTintColor:(id)arg1;

@end
