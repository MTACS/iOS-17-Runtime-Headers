
@interface GEOEquatorialCelestialBodyData : NSObject {
    double  _declination;
    double  _rightAscension;
}

@property (nonatomic, readonly) double declination;
@property (nonatomic, readonly) double rightAscension;

- (double)declination;
- (id)initWithDate:(id)arg1 body:(long long)arg2;
- (id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(bool)arg3;
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2;
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(bool)arg3;
- (double)rightAscension;

@end
