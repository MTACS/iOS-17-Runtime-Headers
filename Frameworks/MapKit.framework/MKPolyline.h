
@interface MKPolyline : MKMultiPoint <MKGeoJSONObject, MKOverlay, NSSecureCoding>

@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)polylineWithCoordinates:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithCoordinates:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 elevations:(const double*)arg2 count:(unsigned long long)arg3;
+ (id)polylineWithPoints:(const struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void)_calculateBounds;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2;
- (id)_initWithGeoJSONPoints:(id)arg1 error:(id*)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
