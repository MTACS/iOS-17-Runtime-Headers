
@interface MKUserLocationView : MKAnnotationView {
    _MKUserLocationView * _mkUserLocationView;
    bool  _selected;
}

@property (getter=_mkUserLocationView, setter=_setMKUserLocationView:, nonatomic, retain) _MKUserLocationView *mkUserLocationView;

- (void).cxx_destruct;
- (double)_accuracyRingAlpha;
- (bool)_allowedToShowCallout;
- (bool)_allowsAccuracyRing;
- (bool)_allowsPulse;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_annotationTrackingInsets;
- (bool)_canShowHeadingIndicator;
- (double)_heading;
- (long long)_headingIndicatorStyle;
- (id)_innerImageMask;
- (bool)_isStale;
- (id)_lastLocation;
- (void)_locationManagerFailedToUpdateLocation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_visibleRect;
- (double)_maxRadiusToShowAccuracyRing;
- (id)_mkUserLocationView;
- (double)_puckAlpha;
- (bool)_rotateInnerImageToMatchCourse;
- (float)_selectionPriority;
- (void)_setAccuracyRingAlpha:(double)arg1;
- (void)_setAllowsAccuracyRing:(bool)arg1;
- (void)_setAllowsPulse:(bool)arg1;
- (void)_setCanShowHeadingIndicator:(bool)arg1;
- (void)_setHeading:(double)arg1;
- (void)_setHeadingIndicatorStyle:(long long)arg1;
- (void)_setInnerImageMask:(id)arg1;
- (void)_setMKUserLocationView:(id)arg1;
- (void)_setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)_setMapPitchRadians:(double)arg1;
- (void)_setMapRotationRadians:(double)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setMaxRadiusToShowAccuracyRing:(double)arg1;
- (void)_setPuckAlpha:(double)arg1;
- (void)_setPuckScale:(double)arg1;
- (void)_setRotateInnerImageToMatchCourse:(bool)arg1;
- (void)_setSelected:(bool)arg1 animated:(bool)arg2;
- (void)_setSelectionPriority:(float)arg1;
- (void)_setShouldDisplayHeading:(bool)arg1;
- (void)_setShouldInnerPulse:(bool)arg1;
- (void)_setShouldShowOuterRing:(bool)arg1;
- (bool)_shouldDisplayHeading;
- (bool)_shouldInnerPulse;
- (bool)_shouldShowOuterRing;
- (void)_updateFromMap;
- (void)_updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (struct CGPoint { double x1; double x2; })calloutOffset;
- (bool)canShowCallout;
- (struct CGPoint { double x1; double x2; })centerOffset;
- (id)detailCalloutAccessoryView;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (bool)isDraggable;
- (bool)isSelected;
- (id)leftCalloutAccessoryView;
- (struct CGPoint { double x1; double x2; })leftCalloutOffset;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (id)rightCalloutAccessoryView;
- (struct CGPoint { double x1; double x2; })rightCalloutOffset;
- (void)setAnnotation:(id)arg1;
- (void)setCalloutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCanShowCallout:(bool)arg1;
- (void)setCenterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setLeftCalloutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (void)setRightCalloutOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
