
@interface HKGAD7Assessment : HKScoredAssessment <HDCoding, _HKScoredRiskAssessment> {
    NSArray * _answers;
    long long  _risk;
}

@property (nonatomic, readonly, copy) NSArray *answers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long risk;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (long long)_riskForAnswers:(id)arg1;
+ (long long)_scoreForAnswers:(id)arg1;
+ (id)assessmentWithDate:(id)arg1 answers:(id)arg2 metadata:(id)arg3;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;
+ (id)validateAnswers:(id)arg1;

- (void).cxx_destruct;
- (void)_setAnswers:(id)arg1;
- (void)_setRisk:(long long)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)answers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hk_integerValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 answers:(id)arg2 metadata:(id)arg3;
- (bool)isEquivalent:(id)arg1;
- (long long)risk;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)addDetailValuesToSection:(id)arg1;

@end
