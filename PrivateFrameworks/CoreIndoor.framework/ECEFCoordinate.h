
@interface ECEFCoordinate : NSObject {
    double  _x;
    double  _y;
    double  _z;
}

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

+ (id)fromLatLon:(id)arg1;

- (id)init;
- (id)initFromLatLon:(id)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void)setFromLatLon:(id)arg1;
- (void)setFromX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (void)setZ:(double)arg1;
- (struct point_xy<double, boost::geometry::cs::cartesian> { double x1[2]; })toBoostEnuWithLatLonOrigin:(id)arg1 andEcefOrigin:(id)arg2 usingENU:(id)arg3;
- (double)x;
- (double)y;
- (double)z;

@end
