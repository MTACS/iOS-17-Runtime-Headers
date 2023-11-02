
@interface PKPayLaterUnavailablePassPaymentSource : PKPayLaterPaymentSource <NSSecureCoding> {
    PKPayLaterFinancingPlanFundingSource * _fundingSource;
}

@property (nonatomic, readonly) PKPayLaterFinancingPlanFundingSource *fundingSource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fundingSource;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFundingSource:(id)arg1;
- (id)name;
- (unsigned long long)type;

@end
