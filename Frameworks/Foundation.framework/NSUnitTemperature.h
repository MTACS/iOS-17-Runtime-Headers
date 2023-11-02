
@interface NSUnitTemperature : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)baseUnit;
+ (id)celsius;
+ (id)fahrenheit;
+ (id)icuType;
+ (void)initialize;
+ (id)kelvin;
+ (bool)supportsRegionalPreference;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_intents_stringRepresentation;

@end
