
@interface HKDiscreteQuantitySample : HKQuantitySample {
    bool  __hasMaximumQuantity;
    bool  __hasMinimumQuantity;
    bool  __hasMostRecentQuantity;
    bool  __hasMostRecentQuantityDateInterval;
    HKQuantity * _maximumQuantity;
    HKQuantity * _minimumQuantity;
    HKQuantity * _mostRecentQuantity;
    NSDateInterval * _mostRecentQuantityDateInterval;
}

@property (nonatomic) bool _hasMaximumQuantity;
@property (nonatomic) bool _hasMinimumQuantity;
@property (nonatomic) bool _hasMostRecentQuantity;
@property (nonatomic) bool _hasMostRecentQuantityDateInterval;
@property (setter=_setAverageQuantity:, nonatomic, copy) HKQuantity *averageQuantity;
@property (setter=_setMaximumQuantity:, nonatomic, copy) HKQuantity *maximumQuantity;
@property (setter=_setMinimumQuantity:, nonatomic, copy) HKQuantity *minimumQuantity;
@property (setter=_setMostRecentQuantity:, nonatomic, copy) HKQuantity *mostRecentQuantity;
@property (setter=_setMostRecentQuantityDateInterval:, nonatomic, copy) NSDateInterval *mostRecentQuantityDateInterval;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_hasMaximumQuantity;
- (bool)_hasMinimumQuantity;
- (bool)_hasMostRecentQuantity;
- (bool)_hasMostRecentQuantityDateInterval;
- (void)_setAverageQuantity:(id)arg1;
- (void)_setMaximumQuantity:(id)arg1;
- (void)_setMinimumQuantity:(id)arg1;
- (void)_setMostRecentQuantity:(id)arg1;
- (void)_setMostRecentQuantityDateInterval:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)asJSONObject;
- (id)averageQuantity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)maximumQuantity;
- (id)minimumQuantity;
- (id)mostRecentQuantity;
- (id)mostRecentQuantityDateInterval;
- (void)set_hasMaximumQuantity:(bool)arg1;
- (void)set_hasMinimumQuantity:(bool)arg1;
- (void)set_hasMostRecentQuantity:(bool)arg1;
- (void)set_hasMostRecentQuantityDateInterval:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

@end
