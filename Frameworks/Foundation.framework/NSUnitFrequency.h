
@interface NSUnitFrequency : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;
+ (id)baseUnit;
+ (id)framesPerSecond;
+ (id)gigahertz;
+ (id)hertz;
+ (id)icuType;
+ (void)initialize;
+ (id)kilohertz;
+ (id)megahertz;
+ (id)microhertz;
+ (id)millihertz;
+ (id)nanohertz;
+ (id)terahertz;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;

@end
