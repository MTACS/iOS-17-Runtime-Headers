
@interface HKCategoryType : HKSampleType

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_categoryTypeWithCode:(long long)arg1;

- (bool)_acceptsValue:(long long)arg1;
- (long long)_categoryValueForValue:(long long)arg1;
- (long long)_defaultValue;
- (id)_predicateForSDKVersion:(unsigned int)arg1;
- (id)initWithIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)hk_enumeratedCategoryValueLabelsWithHealthStore:(id)arg1;

@end
