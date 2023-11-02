
@interface PKPayLaterProductAssessment : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _financingEligibility;
    NSDictionary * _financingOptionIdentifierMap;
    NSArray * _financingOptions;
    PKPayLaterProductAssessmentInstallmentSummary * _lowestPossibleInstallmentSummary;
    NSDecimalNumber * _maximumAPR;
    NSDecimalNumber * _minimumAPR;
    PKPayLaterPreliminaryAssessment * _preliminaryAssessment;
    unsigned long long  _productType;
}

@property (nonatomic, readonly) unsigned long long financingEligibility;
@property (nonatomic, readonly, copy) NSArray *financingOptions;
@property (nonatomic, readonly) PKPayLaterPreliminaryAssessment *preliminaryAssessment;
@property (nonatomic, readonly) unsigned long long productType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsFinancingOptionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)financingEligibility;
- (id)financingOptionWithIdentifier:(id)arg1;
- (id)financingOptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEligible;
- (bool)isEqual:(id)arg1;
- (id)preliminaryAssessment;
- (unsigned long long)productType;

@end
