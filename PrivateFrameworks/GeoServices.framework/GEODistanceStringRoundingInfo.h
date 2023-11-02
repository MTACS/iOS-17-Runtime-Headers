
@interface GEODistanceStringRoundingInfo : NSObject {
    unsigned long long  _maxFractionDigits;
    unsigned long long  _minFractionDigits;
    NSMeasurement * _roundedDistanceMeasurement;
    double  _roundingIncrement;
}

@property (nonatomic, readonly) unsigned long long maxFractionDigits;
@property (nonatomic, readonly) unsigned long long minFractionDigits;
@property (nonatomic, readonly) NSMeasurement *roundedDistanceMeasurement;
@property (nonatomic, readonly) double roundingIncrement;

+ (const void*)_lookupTableForMeasurementSystem:(id)arg1 locale:(id)arg2 formatOptions:(unsigned long long)arg3;
+ (const struct _RoundingInfo { double x1; id x2; double x3; unsigned long long x4; unsigned long long x5; }*)_roundingInfoTierForDistanceMeasurement:(id)arg1 lookupTable:(const void*)arg2 formatOptions:(unsigned long long)arg3;
+ (id)roundingInfoForDistanceMeasurement:(id)arg1 measurementSystem:(id)arg2 locale:(id)arg3 formatOptions:(unsigned long long)arg4;

- (void).cxx_destruct;
- (unsigned long long)maxFractionDigits;
- (unsigned long long)minFractionDigits;
- (id)roundedDistanceMeasurement;
- (double)roundingIncrement;

@end
