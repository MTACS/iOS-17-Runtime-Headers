
@interface HKQuantityRange : NSObject <NSCopying, NSSecureCoding> {
    bool  _isMaximumInclusive;
    bool  _isMinimumInclusive;
    HKQuantity * _maximum;
    HKQuantity * _minimum;
}

@property (nonatomic) bool isMaximumInclusive;
@property (nonatomic) bool isMinimumInclusive;
@property (nonatomic, copy) HKQuantity *maximum;
@property (nonatomic, copy) HKQuantity *minimum;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)ATTDEuglycemicRangeWithUnit:(id)arg1;
+ (id)ATTDGlycemicRangesWithUnit:(id)arg1;
+ (id)ATTDHyperglycemicRangeWithUnit:(id)arg1;
+ (id)ATTDLevel1HypoglycemicRangeWithUnit:(id)arg1;
+ (id)ATTDLevel2HypoglycemicRangeWithUnit:(id)arg1;
+ (bool)areRangesDisjoint:(id)arg1;
+ (id)exclusiveRangeWithMinimum:(id)arg1 maximum:(id)arg2;
+ (id)inclusiveRangeWithMinimum:(id)arg1 maximum:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsQuantity:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2 isMinimumInclusive:(bool)arg3 isMaximumInclusive:(bool)arg4;
- (bool)intersectsRange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMaximumInclusive;
- (bool)isMinimumInclusive;
- (id)maximum;
- (id)minimum;
- (void)setIsMaximumInclusive:(bool)arg1;
- (void)setIsMinimumInclusive:(bool)arg1;
- (void)setMaximum:(id)arg1;
- (void)setMinimum:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)valueRangeWithUnit:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)_valueStringForType:(id)arg1 parameters:(id)arg2;
- (id)localizedAttributedStringForType:(id)arg1;
- (id)localizedAttributedStringForType:(id)arg1 parameters:(id)arg2;
- (id)localizedStringForType:(id)arg1;
- (id)localizedStringForType:(id)arg1 parameters:(id)arg2;
- (id)unitStringForType:(id)arg1;
- (id)unitStringForType:(id)arg1 parameters:(id)arg2;

@end
