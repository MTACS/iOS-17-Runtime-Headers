
@interface MKLocalPointsOfInterestRequest : NSObject <NSCopying> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    bool  _createdFromRegion;
    MKPointOfInterestFilter * _pointOfInterestFilter;
    double  _radius;
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _region;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (getter=_createdFromRegion, nonatomic, readonly) bool createdFromRegion;
@property (nonatomic, copy) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;

- (void).cxx_destruct;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_clampedCoordinateRegionForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_createdFromRegion;
- (double)_deriveRadiusFromCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_isValidCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2;
- (id)initWithCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)pointOfInterestFilter;
- (double)radius;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (void)setPointOfInterestFilter:(id)arg1;

@end
