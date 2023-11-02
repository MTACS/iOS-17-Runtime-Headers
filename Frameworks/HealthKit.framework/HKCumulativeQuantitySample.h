
@interface HKCumulativeQuantitySample : HKQuantitySample

@property (setter=_setSumQuantity:, nonatomic, copy) HKQuantity *sumQuantity;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (bool)supportsSecureCoding;

- (void)_setSumQuantity:(id)arg1;
- (id)sum;
- (id)sumQuantity;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

@end
