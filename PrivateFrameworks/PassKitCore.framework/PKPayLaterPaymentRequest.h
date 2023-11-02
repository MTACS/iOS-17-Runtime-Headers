
@interface PKPayLaterPaymentRequest : PKPaymentRequest {
    NSURL * _accountBaseURL;
    NSString * _accountIdentifier;
    NSDictionary * _bankIdentifierToFundingSource;
    PKCurrencyAmount * _currencyAmount;
    PKBankAccountInformation * _defaultBankAccount;
    NSString * _defaultPassUniqueID;
    PKPayLaterFinancingPlan * _financingPlan;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse * _intentDetails;
    NSString * _payLaterPassUniqueID;
    unsigned long long  _payLaterPaymentIntentType;
    unsigned long long  _supportedRepaymentTypes;
}

@property (nonatomic, readonly, copy) NSURL *accountBaseURL;
@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly) PKBankAccountInformation *defaultBankAccount;
@property (nonatomic, readonly) NSString *defaultPassUniqueID;
@property (nonatomic, readonly) PKPayLaterFinancingPlan *financingPlan;
@property (nonatomic, readonly, copy) NSString *payLaterPassUniqueID;
@property (nonatomic, readonly) unsigned long long payLaterPaymentIntentType;
@property (nonatomic, readonly) unsigned long long supportedRepaymentTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_acceptedBankAccountsForAcceptedFundingSources:(id)arg1;
- (id)acceptedPassesWithPassLibrary:(id)arg1 peerPaymentAccount:(id)arg2;
- (id)accountBaseURL;
- (id)accountIdentifier;
- (id)accountPaymentFundingSourceForBankIdentifier:(id)arg1;
- (id)defaultBankAccount;
- (id)defaultPassUniqueID;
- (void)encodeWithCoder:(id)arg1;
- (id)financingPlan;
- (bool)hasAvailableFundingSource;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntentDetails:(id)arg1 payLaterAccount:(id)arg2 financingPlan:(id)arg3 intent:(unsigned long long)arg4 acceptedFundingSources:(id)arg5 currencyAmount:(id)arg6 hasAdequateAppleCashBalance:(bool)arg7 countryCode:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPayLaterPaymentRequest:(id)arg1;
- (id)payLaterPassUniqueID;
- (unsigned long long)payLaterPaymentIntentType;
- (bool)showPeerPaymentBalance;
- (unsigned long long)supportedRepaymentTypes;

@end
