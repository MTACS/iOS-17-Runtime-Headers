
@interface NSUnitIlluminance : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)baseUnit;
+ (id)icuType;
+ (void)initialize;
+ (id)lux;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;

@end
