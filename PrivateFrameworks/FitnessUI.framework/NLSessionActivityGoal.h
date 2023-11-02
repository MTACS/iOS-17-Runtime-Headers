
@interface NLSessionActivityGoal : NSObject <NSSecureCoding> {
    unsigned long long  _goalTypeIdentifier;
    HKQuantity * _value;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) unsigned long long goalTypeIdentifier;
@property (nonatomic, copy) HKQuantity *value;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)goalWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_quantityForDoubleValue:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)goalTypeIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNLSessionActivityGoal:(id)arg1;
- (void)setGoalTypeIdentifier:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/WorkoutCore.framework/WorkoutCore

- (id)description;

@end
