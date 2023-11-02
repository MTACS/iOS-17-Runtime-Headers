
@interface PXAnnotatedLocation : NSObject {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    CLLocation * _location;
    NSNumber * _locationType;
    PXPlaceAnnotation * _placeAnnotation;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, retain) CLLocation *location;
@property (retain) NSNumber *locationType;
@property (nonatomic, readonly) PXPlaceAnnotation *placeAnnotation;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 placeAnnotation:(id)arg2;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 placeAnnotation:(id)arg3;
- (id)initWithLocation:(id)arg1 placeAnnotation:(id)arg2;
- (id)location;
- (id)locationType;
- (id)placeAnnotation;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationType:(id)arg1;

@end
