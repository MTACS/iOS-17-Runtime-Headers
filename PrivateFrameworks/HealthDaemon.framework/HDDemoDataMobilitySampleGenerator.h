
@interface HDDemoDataMobilitySampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _nextAsymmetryPercentageSampleTime;
    double  _nextDoubleSupportPercentageSampleTime;
    double  _nextSixMinuteWalkTestDistanceSampleTime;
    double  _nextStairAscentSpeedSampleTime;
    double  _nextStairDescentSpeedSampleTime;
    double  _nextStepLengthSampleTime;
    double  _nextWalkingSpeedSampleTime;
    double  _nextWalkingSteadinessSampleTime;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (void)generateFirstRunObjectsForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
