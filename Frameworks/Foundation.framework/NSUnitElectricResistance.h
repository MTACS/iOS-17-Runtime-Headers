
@interface NSUnitElectricResistance : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;
+ (id)baseUnit;
+ (id)icuType;
+ (void)initialize;
+ (id)kiloohms;
+ (id)megaohms;
+ (id)microohms;
+ (id)milliohms;
+ (id)ohms;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;

@end
