
@interface HDDemoDataHeartSampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _lastHeartRateRecoveryValue;
    bool  _lastHeartRateRecoveryWorkoutWasActive;
    double  _lastRestingHeartRate;
    double  _lastVO2MaxValue;
    bool  _lastVO2MaxWorkoutWasActive;
    double  _lastWalkingHeartRateAverage;
    double  _meanVO2MaxValue;
    unsigned long long  _nextElectrocardiogramClassification;
    double  _nextElectrocardiogramSampleTime;
    double  _nextRestingHeartRateSampleTime;
    double  _nextVO2MaxSampleTime;
    double  _nextWalkingHeartRateAverageSampleTime;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (void)generateFirstRunObjectsForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setProfile:(id)arg1 provenance:(id)arg2;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
