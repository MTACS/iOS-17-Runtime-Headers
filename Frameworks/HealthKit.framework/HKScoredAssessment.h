
@interface HKScoredAssessment : HKSample <NSCopying, NSSecureCoding> {
    long long  _score;
}

@property (setter=_setScore:, nonatomic) long long score;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)assessmentWithDate:(id)arg1 type:(id)arg2 score:(long long)arg3 metadata:(id)arg4 config:(id /* block */)arg5;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void)_setScore:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (long long)score;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

@end
