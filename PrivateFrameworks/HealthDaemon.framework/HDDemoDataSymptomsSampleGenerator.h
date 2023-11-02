
@interface HDDemoDataSymptomsSampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _nextCommonColdSymptomsTime;
    double  _nextFoodPoisoningSymptomsTime;
    double  _nextSingleRandomSymptomTime;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
