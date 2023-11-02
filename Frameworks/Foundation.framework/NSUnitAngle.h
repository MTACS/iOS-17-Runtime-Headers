
@interface NSUnitAngle : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)arcMinutes;
+ (id)arcSeconds;
+ (id)baseUnit;
+ (id)degrees;
+ (id)gradians;
+ (id)icuType;
+ (void)initialize;
+ (id)radians;
+ (id)revolutions;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;

@end
