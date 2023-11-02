
@interface _MKPointOfInterestAnnotationView : _MKMapFeatureAnnotationView <_MKBalloonCalloutViewConfiguring> {
    _MKMarkerAnnotationBaseImageView * _anchorDotView;
    long long  _balloonCalloutStyle;
    UIColor * _balloonFillColor;
    UIImage * _balloonImage;
    UIColor * _balloonStrokeColor;
    MKMapView * _mapView;
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
@property (nonatomic) MKMapView *mapView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAnchorDotView;
- (long long)_balloonCalloutStyle;
- (id)_balloonImage;
- (id)_balloonStrokeColor;
- (id)_balloonTintColor;
- (long long)_baseImageType;
- (bool)_isMetroArea;
- (void)_resolveBalloonAttributes;
- (void)_updateAnchorOffset;
- (void)_updateFromMap;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)mapView;
- (void)setAnnotation:(id)arg1;
- (void)setMapView:(id)arg1;
- (bool)shouldShowCallout;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (bool)updateCalloutViewIfNeededAnimated:(bool)arg1;

@end
