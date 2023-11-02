
@interface HDHeartEventSensorDatum : HDDataCollectorSensorDatum {
    NSArray * _associatedSampleUUIDs;
    HKQuantity * _heartRateThreshold;
}

@property (nonatomic, readonly) NSArray *associatedSampleUUIDs;
@property (nonatomic, readonly) HKQuantity *heartRateThreshold;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedSampleUUIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)heartRateThreshold;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRateThreshold:(id)arg3 associatedSampleUUIDs:(id)arg4 resumeContext:(id)arg5;

@end
