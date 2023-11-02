
@interface MKUserLocationHeadingArrowLayer : CAShapeLayer <MKUserLocationHeadingAnimatableIndicator, MKUserLocationHeadingIndicator> {
    double  _baseHalfAngle;
    double  _baseRadius;
    double  _headingRadians;
    unsigned long long  _mapType;
    double  _maxUncertaintyAngleToShowArrow;
    double  _minimumAccuracyRadius;
    double  _tipRadius;
    UITraitCollection * _traitCollection;
    _MKPuckAnnotationView * _userLocationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headingRadians;
@property (nonatomic) unsigned long long mapType;
@property (nonatomic) double minimumAccuracyRadius;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (nonatomic, readonly) _MKPuckAnnotationView *userLocationView;

- (void).cxx_destruct;
- (id)_animationToSetVisible:(bool)arg1;
- (double)_baseRadiusWhenVisible:(bool)arg1;
- (id)_bezierPathWithBaseRadius:(double)arg1 tipRadius:(double)arg2 baseHalfAngle:(double)arg3;
- (struct CGPath { }*)_pathWhenVisible:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_positionWhenVisible:(bool)arg1;
- (bool)_shouldBeVisibleForAccuracy:(double)arg1;
- (double)_tipRadiusWhenVisible:(bool)arg1;
- (void)animateToSetVisible:(bool)arg1 completion:(id /* block */)arg2;
- (double)headingRadians;
- (id)initWithUserLocationView:(id)arg1;
- (unsigned long long)mapType;
- (double)minimumAccuracyRadius;
- (void)setAccuracyRadius:(double)arg1 duration:(double)arg2;
- (void)setHeadingRadians:(double)arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)setMinimumAccuracyRadius:(double)arg1;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;
- (void)updateHeading:(double)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)updateTintColor:(id)arg1;
- (id)userLocationView;

@end
