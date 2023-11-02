
@interface _MKUserLocationView : _MKPuckAnnotationView <_MKBalloonCalloutViewConfiguring, _MKKVOProxyDelegate> {
    UIImage * _balloonImage;
    UIColor * _balloonImageTintColor;
    double  _externalMaxAccuracyRadius;
    bool  _hasExplicitCalloutStyle;
    _MKUserLocationViewImageProvider * _imageProvider;
    _MKKVOProxy * _kvoProxy;
    bool  _radiusBasedAccuracyOpacity;
    bool  _showingPreciseAuthorizedLocation;
}

@property (getter=_balloonCalloutShouldCenterWhenOffscreen, nonatomic, readonly) bool balloonCalloutShouldCenterWhenOffscreen;
@property (getter=_balloonCalloutShouldShowArrow, nonatomic, readonly) bool balloonCalloutShouldShowArrow;
@property (getter=_balloonCalloutStyle, nonatomic, readonly) long long balloonCalloutStyle;
@property (getter=_balloonContentView, nonatomic, readonly) UIView *balloonContentView;
@property (getter=_balloonImage, nonatomic, readonly) UIImage *balloonImage;
@property (getter=_balloonImageTintColor, nonatomic, readonly) UIColor *balloonImageTintColor;
@property (getter=_balloonInnerStrokeColor, nonatomic, readonly) UIColor *balloonInnerStrokeColor;
@property (getter=_balloonMaterial, nonatomic, readonly) UIBlurEffect *balloonMaterial;
@property (getter=_balloonStrokeColor, nonatomic, readonly) UIColor *balloonStrokeColor;
@property (getter=_balloonTintColor, nonatomic, readonly) UIColor *balloonTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_showingPreciseAuthorizedLocation, setter=_setShowingPreciseAuthorizedLocation:, nonatomic) bool showingPreciseAuthorizedLocation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowedToShowCallout;
- (bool)_balloonCalloutShouldCenterWhenOffscreen;
- (long long)_balloonCalloutStyle;
- (id)_balloonImage;
- (id)_balloonImageTintColor;
- (id)_balloonInnerStrokeColor;
- (id)_balloonStrokeColor;
- (id)_balloonTintColor;
- (void)_dismissCallout:(bool)arg1;
- (unsigned long long)_innerPulseFrameWhenDisabled:(unsigned long long)arg1;
- (void)_mkObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)_setBalloonImage:(id)arg1;
- (void)_setBalloonImageTintColor:(id)arg1;
- (void)_setCalloutStyle:(long long)arg1;
- (void)_setShowingPreciseAuthorizedLocation:(bool)arg1;
- (void)_showCallout:(bool)arg1;
- (bool)_showingPreciseAuthorizedLocation;
- (void)_startObservingAnnotation;
- (void)_stopObservingAnnotation;
- (void)_updateCalloutOffset;
- (void)_updateCalloutStyle;
- (void)_updateLegacyConfiguration;
- (void)_updateMaxRadiusToShowAccuracyRing;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setAnnotation:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setMaxRadiusToShowAccuracyRing:(double)arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (bool)shouldShowCallout;

@end
