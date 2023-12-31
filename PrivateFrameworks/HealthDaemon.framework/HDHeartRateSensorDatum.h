
@interface HDHeartRateSensorDatum : HDQuantityDatum {
    long long  _heartRateContext;
}

@property (nonatomic, readonly) HKQuantity *heartRate;
@property (nonatomic, readonly) long long heartRateContext;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)heartRate;
- (long long)heartRateContext;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRate:(id)arg3 heartRateContext:(long long)arg4 resumeContext:(id)arg5;

@end
