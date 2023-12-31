
@interface NSUnitAcceleration : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)baseUnit;
+ (id)gravity;
+ (id)icuType;
+ (void)initialize;
+ (id)metersPerSecondSquared;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;

@end
