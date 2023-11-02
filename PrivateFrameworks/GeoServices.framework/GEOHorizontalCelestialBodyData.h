
@interface GEOHorizontalCelestialBodyData : NSObject {
    double  _altitude;
    double  _azimuth;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double azimuth;

- (double)altitude;
- (double)azimuth;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 date:(id)arg2 body:(long long)arg3;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(bool)arg4;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 julianDay:(double)arg2 body:(long long)arg3 useHighPrecision:(bool)arg4;

@end
