
@interface _MKLabelMarkerView : MKAnnotationView {
    MKMapView * _mapView;
}

@property (nonatomic) MKMapView *mapView;

+ (bool)_followsTerrain;

- (void).cxx_destruct;
- (void)_deregisterObserver;
- (void)_registerObserver;
- (void)_updateAnchorOffset;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)mapView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAnnotation:(id)arg1;
- (void)setMapView:(id)arg1;
- (bool)shouldShowCallout;
- (bool)updateCalloutViewIfNeededAnimated:(bool)arg1;

@end
