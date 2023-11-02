
@interface GEOCelestialEphemeris : NSObject {
    long long  _body;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    GEOSolarEclipticCelestialBodyData * _eclipticCoord;
    double  _elongation;
    GEOEquatorialCelestialBodyData * _equatorialCoord;
    bool  _highPrecision;
    GEOHorizontalCelestialBodyData * _horizontalCoord;
    double  _illuminatedFraction;
    double  _julianDay;
    NSNumber * _librationPositionAngle;
    double  _parallacticAngle;
    double  _phaseAngle;
    NSNumber * _radiusVector;
    GEOCelestialRiseTransitSet * _riseTransitSet;
    NSNumber * _topocentricParallacticAngle;
    NSNumber * _topocentricRadiusVector;
}

@property (nonatomic, readonly) GEOSolarEclipticCelestialBodyData *eclipticCoord;
@property (nonatomic, readonly) double elongation;
@property (nonatomic, readonly) GEOEquatorialCelestialBodyData *equatorialCoord;
@property (nonatomic, readonly) GEOHorizontalCelestialBodyData *horizontalCoord;
@property (nonatomic, readonly) double illuminatedFraction;
@property (nonatomic, readonly) bool isTransitAboveHorizon;
@property (nonatomic, readonly) double librationPositionAngle;
@property (nonatomic, readonly) double parallacticAngle;
@property (nonatomic, readonly) double phaseAngle;
@property (nonatomic, readonly) double radiusVector;
@property (nonatomic, readonly) NSDate *rise;
@property (nonatomic, readonly) NSDate *set;
@property (nonatomic, readonly) double topocentricParallacticAngle;
@property (nonatomic, readonly) double topocentricRadiusVector;
@property (nonatomic, readonly) NSDate *transit;

- (void).cxx_destruct;
- (id)description;
- (id)eclipticCoord;
- (double)elongation;
- (id)equatorialCoord;
- (id)horizontalCoord;
- (double)illuminatedFraction;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 date:(id)arg2 body:(long long)arg3;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(bool)arg4;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 julianDay:(double)arg2 body:(long long)arg3 altitude:(double)arg4 useHighPrecision:(bool)arg5;
- (bool)isTransitAboveHorizon;
- (double)librationPositionAngle;
- (double)parallacticAngle;
- (double)phaseAngle;
- (double)radiusVector;
- (id)rise;
- (id)set;
- (double)topocentricParallacticAngle;
- (double)topocentricRadiusVector;
- (id)transit;

@end
