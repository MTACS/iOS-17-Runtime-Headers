
@interface _CLPolygonalRegion : CLRegion {
    bool  _allowMonitoringWhileNearby;
    int  _geoReferenceFrame;
    NSArray * _vertices;
}

@property (nonatomic, readonly) bool allowMonitoringWhileNearby;
@property int geoReferenceFrame;
@property (nonatomic, readonly, copy) NSArray *vertices;

+ (bool)supportsSecureCoding;

- (bool)allowMonitoringWhileNearby;
- (bool)containsCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (bool)containsCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 withDistanceToBorder:(double*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)geoReferenceFrame;
- (id)initNearbyAllowedWithVertices:(id)arg1 identifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithVertices:(id)arg1 identifier:(id)arg2;
- (bool)pointInPolygonWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 withDistanceToBorder:(double*)arg2;
- (void)setGeoReferenceFrame:(int)arg1;
- (id)vertices;

@end
