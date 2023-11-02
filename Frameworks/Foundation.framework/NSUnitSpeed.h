
@interface NSUnitSpeed : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)baseUnit;
+ (id)icuType;
+ (void)initialize;
+ (id)kilometersPerHour;
+ (id)knots;
+ (id)metersPerSecond;
+ (id)milesPerHour;
+ (bool)supportsRegionalPreference;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_intents_stringRepresentation;

@end
