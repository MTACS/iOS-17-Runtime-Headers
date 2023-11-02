
@interface NSUnitPower : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;
+ (id)baseUnit;
+ (id)femtowatts;
+ (id)gigawatts;
+ (id)horsepower;
+ (id)icuType;
+ (void)initialize;
+ (id)kilowatts;
+ (id)megawatts;
+ (id)microwatts;
+ (id)milliwatts;
+ (id)nanowatts;
+ (id)picowatts;
+ (bool)supportsRegionalPreference;
+ (id)terawatts;
+ (id)watts;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;

@end
