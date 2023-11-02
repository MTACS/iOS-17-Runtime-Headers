
@interface PKAccountServicePayLaterFinancingPlanQueryInstallments : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _installmentIdentifierToFinancingPlan;
    NSArray * _installments;
}

@property (nonatomic, readonly, copy) NSDictionary *installmentIdentifierToFinancingPlan;
@property (nonatomic, readonly, copy) NSArray *installments;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_installmentIdentifierToFinancingPlanDictionaryRepresentation;
- (id)_installmentIdentifiers;
- (bool)_isEqualToPayLaterFinancingPlanQueryInstallments:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstallment:(id)arg1 installmentIdentifierToFinancingPlan:(id)arg2;
- (id)installmentIdentifierToFinancingPlan;
- (id)installments;
- (bool)isEqual:(id)arg1;

@end
