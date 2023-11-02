
@interface HDDemoDataAlcoholSampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _nextCheckInTime;
}

@property (nonatomic) double nextCheckInTime;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 foodSampleGenerator:(id)arg5 statisticsSampleGenerator:(id)arg6 bodySampleGenerator:(id)arg7 objectCollection:(id)arg8;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)nextCheckInTime;
- (void)setNextCheckInTime:(double)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
