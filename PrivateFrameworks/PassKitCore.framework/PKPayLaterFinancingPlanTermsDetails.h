
@interface PKPayLaterFinancingPlanTermsDetails : NSObject <NSCopying, NSSecureCoding> {
    NSString * _installmentAgreementIdentifier;
}

@property (nonatomic, copy) NSString *installmentAgreementIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)installmentAgreementIdentifier;
- (bool)isEqual:(id)arg1;
- (void)setInstallmentAgreementIdentifier:(id)arg1;

@end
