
@interface NSUnitConcentrationMass : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)baseUnit;
+ (id)gramsPerLiter;
+ (id)icuType;
+ (void)initialize;
+ (id)milligramsPerDeciliter;
+ (id)millimolesPerLiterWithGramsPerMole:(double)arg1;
+ (bool)supportsRegionalPreference;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)wf_microgramsPerCubicMeter;

@end
