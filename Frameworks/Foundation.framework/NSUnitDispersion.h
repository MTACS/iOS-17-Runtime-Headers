
@interface NSUnitDispersion : NSDimension <NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)baseUnit;
+ (id)icuType;
+ (void)initialize;
+ (id)partsPerMillion;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_equivalentBaseUnit;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)wf_partsPerBillion;

@end
