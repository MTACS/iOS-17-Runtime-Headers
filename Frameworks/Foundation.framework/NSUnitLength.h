
@interface NSUnitLength : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;
+ (id)astronomicalUnits;
+ (id)baseUnit;
+ (id)centimeters;
+ (id)decameters;
+ (id)decimeters;
+ (id)fathoms;
+ (id)feet;
+ (id)furlongs;
+ (id)hectometers;
+ (id)icuType;
+ (id)inches;
+ (void)initialize;
+ (id)kilometers;
+ (id)lightyears;
+ (id)megameters;
+ (id)meters;
+ (id)micrometers;
+ (id)miles;
+ (id)millimeters;
+ (id)nanometers;
+ (id)nauticalMiles;
+ (id)parsecs;
+ (id)picometers;
+ (id)scandinavianMiles;
+ (bool)supportsRegionalPreference;
+ (id)yards;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_intents_stringRepresentation;

@end
