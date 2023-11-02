
@interface HDDemoDataPathologySampleGenerator : HDDemoDataBaseSampleGenerator {
    bool  _forcePEFR;
    double  _nextAsthmaAttackEndTime;
    double  _nextAsthmaAttackSampleTime;
    NSMutableDictionary * _nextSpirometrySampleTimes;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
