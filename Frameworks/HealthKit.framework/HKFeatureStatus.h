
@interface HKFeatureStatus : NSObject <NSCopying, NSSecureCoding> {
    HKFeatureOnboardingRecord * _onboardingRecord;
    NSDictionary * _requirementsEvaluationByContext;
}

@property (nonatomic, readonly) bool isOnboardingRecordPresent;
@property (nonatomic, readonly, copy) HKFeatureOnboardingRecord *onboardingRecord;
@property (nonatomic, readonly, copy) NSDictionary *requirementsEvaluationByContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyUpdatingRequirement:(id)arg1 fromRequirements:(id)arg2 isSatisfied:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includesContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOnboardingRecord:(id)arg1 requirementsEvaluationByContext:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isOnboardingRecordPresent;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)onboardingRecord;
- (id)requirementsEvaluationByContext;

@end
