
@interface NSUnitVolume : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;
+ (id)acreFeet;
+ (id)baseUnit;
+ (id)bushels;
+ (id)centiliters;
+ (id)cubicCentimeters;
+ (id)cubicDecimeters;
+ (id)cubicFeet;
+ (id)cubicInches;
+ (id)cubicKilometers;
+ (id)cubicMeters;
+ (id)cubicMiles;
+ (id)cubicMillimeters;
+ (id)cubicYards;
+ (id)cups;
+ (id)deciliters;
+ (id)fluidOunces;
+ (id)gallons;
+ (id)icuType;
+ (id)imperialFluidOunces;
+ (id)imperialGallons;
+ (id)imperialPints;
+ (id)imperialQuarts;
+ (id)imperialTablespoons;
+ (id)imperialTeaspoons;
+ (void)initialize;
+ (id)kiloliters;
+ (id)liters;
+ (id)megaliters;
+ (id)metricCups;
+ (id)milliliters;
+ (id)pints;
+ (id)quarts;
+ (bool)supportsRegionalPreference;
+ (id)tablespoons;
+ (id)teaspoons;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_intents_stringRepresentation;

@end
