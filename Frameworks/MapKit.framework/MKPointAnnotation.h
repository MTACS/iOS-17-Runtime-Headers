
@interface MKPointAnnotation : MKShape <MKAnnotationPrivate, MKAnnotationRepresentation, MKCustomFeatureAnnotation, MKGeoJSONObject> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    VKCustomFeature * _customFeature;
    CLLocation * _location;
    long long  _representation;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic) double course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) long long representation;
@property (nonatomic, readonly) bool showsBalloonCallout;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2;
- (void)_invalidateCachedCoordinate;
- (bool)_isPendingSelectionAnimated;
- (void)_setHiddenForOffscreen:(bool)arg1;
- (bool)_shouldDeselectWhenDragged;
- (id)annotation;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)feature;
- (id)init;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 title:(id)arg2 subtitle:(id)arg3;
- (bool)isPersistent;
- (id)location;
- (void)prepareForReuse;
- (long long)representation;
- (id)reuseIdentifier;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setLocation:(id)arg1;
- (void)setRepresentation:(long long)arg1;
- (void)setShowsBalloonCallout:(bool)arg1;
- (bool)shouldRepresentSelf;
- (bool)showsBalloonCallout;
- (id)viewRepresentation;

@end
