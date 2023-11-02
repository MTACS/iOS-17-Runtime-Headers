
@interface HDDemoDataSleepSampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _nextSleepDurationSampleTime;
    NSArray * _sleepGraphsArray;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)computeAwakeTimeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)computeSleepTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (id)createSleepSamplesFromSleepGraph:(id)arg1 sleepCategoryType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDemoPersonAwake:(id)arg1 atTime:(double)arg2;
- (bool)isDemoPersonSleeping:(id)arg1 atTime:(double)arg2;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (id)sleepGraphsFileName;

@end
