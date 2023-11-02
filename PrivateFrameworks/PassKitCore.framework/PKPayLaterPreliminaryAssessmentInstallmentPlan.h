
@interface PKPayLaterPreliminaryAssessmentInstallmentPlan : NSObject <NSCopying, NSSecureCoding> {
    bool  _hasAPR;
    PKPayLaterFinancingAmount * _installmentAmount;
    long long  _installmentCount;
    NSDecimalNumber * _maximumAPR;
    NSDecimalNumber * _minimumAPR;
    unsigned long long  _productType;
}

@property (nonatomic) bool hasAPR;
@property (nonatomic, retain) PKPayLaterFinancingAmount *installmentAmount;
@property (nonatomic) long long installmentCount;
@property (nonatomic, copy) NSDecimalNumber *maximumAPR;
@property (nonatomic, copy) NSDecimalNumber *minimumAPR;
@property (nonatomic) unsigned long long productType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAPR;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 productType:(unsigned long long)arg2;
- (id)installmentAmount;
- (long long)installmentCount;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPreliminaryAssessmentInstallmentPlan:(id)arg1;
- (id)maximumAPR;
- (id)minimumAPR;
- (unsigned long long)productType;
- (void)setHasAPR:(bool)arg1;
- (void)setInstallmentAmount:(id)arg1;
- (void)setInstallmentCount:(long long)arg1;
- (void)setMaximumAPR:(id)arg1;
- (void)setMinimumAPR:(id)arg1;
- (void)setProductType:(unsigned long long)arg1;

@end
