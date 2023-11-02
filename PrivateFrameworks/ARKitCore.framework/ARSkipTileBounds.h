
@interface ARSkipTileBounds : NSObject {
    double  _maxLatitude;
    double  _maxLongitude;
    double  _minLatitude;
    double  _minLongitude;
}

+ (double)_normalizeLongitude:(double)arg1;

- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (bool)isInside:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

@end
