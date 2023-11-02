
@interface HKHeartRateSummaryWorkoutStatistics : HKHeartRateSummaryStatistics {
    HKQuantity * _averageHeartRate;
    HKQuantity * _maximumHeartRate;
    unsigned long long  _workoutActivityType;
}

@property (setter=_setAverageHeartRate:, nonatomic, retain) HKQuantity *averageHeartRate;
@property (setter=_setMaximumHeartRate:, nonatomic, retain) HKQuantity *maximumHeartRate;
@property (nonatomic, readonly) unsigned long long workoutActivityType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setAverageHeartRate:(id)arg1;
- (void)_setMaximumHeartRate:(id)arg1;
- (id)averageHeartRate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initFromStatistics:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)maximumHeartRate;
- (unsigned long long)workoutActivityType;

@end
