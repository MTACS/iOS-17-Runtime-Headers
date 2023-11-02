
@interface HKHeartRateSummaryWorkoutRecoveryStatistics : HKHeartRateSummaryStatistics {
    NSDictionary * _perMinuteReadings;
    unsigned long long  _workoutActivityType;
}

@property (setter=_setPerMinuteReadings:, nonatomic, retain) NSDictionary *perMinuteReadings;
@property (nonatomic, readonly) unsigned long long workoutActivityType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setPerMinuteReadings:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initFromStatistics:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)perMinuteReadings;
- (unsigned long long)workoutActivityType;

@end
