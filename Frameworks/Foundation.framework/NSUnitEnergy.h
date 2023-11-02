
@interface NSUnitEnergy : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;
+ (id)baseUnit;
+ (id)calories;
+ (id)foodcalories;
+ (id)icuType;
+ (void)initialize;
+ (id)joules;
+ (id)kilocalories;
+ (id)kilojoules;
+ (id)kilowattHours;
+ (bool)supportsRegionalPreference;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_intents_stringRepresentation;

@end
