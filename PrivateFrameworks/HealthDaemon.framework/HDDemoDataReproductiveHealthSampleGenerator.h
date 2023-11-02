
@interface HDDemoDataReproductiveHealthSampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray * _basalBodyTempMultiplierTable;
    NSArray * _cervicalMucusTable;
    double  _nextCycleDaySampleTime;
    double  _nextSexualActivitySampleTime;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_basalBodyTempMultiplier;
- (long long)_computeNextLuteinizingHormoneSurgeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (long long)cycleDayIndexAtTime:(double)arg1 demoPerson:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)generateFirstRunObjectsForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
