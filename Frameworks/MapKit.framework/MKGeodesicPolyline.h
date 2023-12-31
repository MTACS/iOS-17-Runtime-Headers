
@interface MKGeodesicPolyline : MKPolyline

+ (id)polylineWithCoordinates:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithPoints:(const struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;

@end
