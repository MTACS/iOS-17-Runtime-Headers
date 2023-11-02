
@interface NSUnitDuration : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;
+ (id)baseUnit;
+ (id)hours;
+ (id)icuType;
+ (void)initialize;
+ (id)microseconds;
+ (id)milliseconds;
+ (id)minutes;
+ (id)nanoseconds;
+ (id)picoseconds;
+ (id)seconds;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;

// Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement

+ (id)microseconds;
+ (id)milliseconds;
+ (id)nanoseconds;

@end
