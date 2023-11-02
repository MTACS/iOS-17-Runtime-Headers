
@interface GEOSolarEclipticCelestialBodyData : NSObject {
    double  _latitude;
    double  _longitude;
}

@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;

- (id)initWithDate:(id)arg1 body:(long long)arg2;
- (id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(bool)arg3;
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(bool)arg3;
- (double)latitude;
- (double)longitude;

@end
