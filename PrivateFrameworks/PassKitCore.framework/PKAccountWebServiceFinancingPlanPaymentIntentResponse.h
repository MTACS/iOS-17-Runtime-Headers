
@interface PKAccountWebServiceFinancingPlanPaymentIntentResponse : PKPaginatedAccountWebServiceResponse <NSSecureCoding> {
    NSArray * _acceptedFundingSources;
    NSDictionary * _bankAcceptedFundingSources;
    NSArray * _lastUsedFundingSources;
    unsigned long long  _merchantCapabilities;
    NSString * _merchantIdentifier;
    PKCurrencyAmount * _minimumAmount;
    PKCurrencyAmount * _payoffAmount;
    NSSet * _supportedRepaymentCountries;
    NSArray * _supportedRepaymentNetworks;
    unsigned long long  _supportedRepaymentTypes;
    PKCurrencyAmount * _totalSavedInterest;
}

@property (nonatomic, copy) NSArray *acceptedFundingSources;
@property (nonatomic, retain) NSArray *lastUsedFundingSources;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, retain) PKCurrencyAmount *minimumAmount;
@property (nonatomic, retain) PKCurrencyAmount *payoffAmount;
@property (nonatomic, copy) NSSet *supportedRepaymentCountries;
@property (nonatomic, copy) NSArray *supportedRepaymentNetworks;
@property (nonatomic) unsigned long long supportedRepaymentTypes;
@property (nonatomic, retain) PKCurrencyAmount *totalSavedInterest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptedFundingSources;
- (id)bankAcceptedFundingSources;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFinancingPlanPaymentIntentResponse:(id)arg1;
- (id)lastUsedFundingSources;
- (unsigned long long)merchantCapabilities;
- (id)merchantIdentifier;
- (id)minimumAmount;
- (id)payoffAmount;
- (void)setAcceptedFundingSources:(id)arg1;
- (void)setLastUsedFundingSources:(id)arg1;
- (void)setMerchantCapabilities:(unsigned long long)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMinimumAmount:(id)arg1;
- (void)setPayoffAmount:(id)arg1;
- (void)setSupportedRepaymentCountries:(id)arg1;
- (void)setSupportedRepaymentNetworks:(id)arg1;
- (void)setSupportedRepaymentTypes:(unsigned long long)arg1;
- (void)setTotalSavedInterest:(id)arg1;
- (id)supportedRepaymentCountries;
- (id)supportedRepaymentNetworks;
- (unsigned long long)supportedRepaymentTypes;
- (id)totalSavedInterest;

@end
