
@interface PKPayLaterFinancingOptionTermsDetails : NSObject <NSCopying, NSSecureCoding> {
    NSString * _installmentAgreementIdentifier;
    NSString * _riskPricingAgreementIdentifier;
    NSString * _termsIdentifier;
    NSURL * _termsURL;
}

@property (nonatomic, copy) NSString *installmentAgreementIdentifier;
@property (nonatomic, copy) NSString *riskPricingAgreementIdentifier;
@property (nonatomic, copy) NSString *termsIdentifier;
@property (nonatomic, copy) NSURL *termsURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)installmentAgreementIdentifier;
- (bool)isEqual:(id)arg1;
- (id)riskPricingAgreementIdentifier;
- (void)setInstallmentAgreementIdentifier:(id)arg1;
- (void)setRiskPricingAgreementIdentifier:(id)arg1;
- (void)setTermsIdentifier:(id)arg1;
- (void)setTermsURL:(id)arg1;
- (id)termsIdentifier;
- (id)termsURL;

@end
