
@interface PKPayLaterAvailableFundingSourcesFilter : NSObject {
    NSMutableDictionary * _availableFundingSources;
    NSString * _defaultPassUniqueIdentifier;
    PKPassLibrary * _passLibrary;
    PKPeerPaymentAccount * _peerPaymentAccount;
}

@property (nonatomic, retain) PKPeerPaymentAccount *peerPaymentAccount;

- (void).cxx_destruct;
- (void)_addAccountPaymentSourcesToPaymentSourcesIfNecessary:(id)arg1 supportedRepaymentTypes:(unsigned long long)arg2 eligibleBankSources:(id)arg3;
- (void)_assignPrioritiesToPaymentSources:(id)arg1 lastUsedFundingSources:(id)arg2;
- (id)_availableFundingSourcesForSupportedRepaymentTypes:(unsigned long long)arg1 supportedRepaymentCountries:(id)arg2 supportedRepaymentNetworks:(id)arg3 eligibleBankSources:(id)arg4 lastUsedFundingSources:(id)arg5 installmentAmount:(id)arg6;
- (void)_filterCashPassIfNecessaryFromPasses:(id)arg1 supportedRepaymentTypes:(unsigned long long)arg2 installmentAmount:(id)arg3;
- (id)_filterLastUsedFundingSources:(id)arg1 paymentSources:(id)arg2;
- (id)_payLaterPassPaymentSourcesForPasses:(id)arg1;
- (void)_prioritizePaymentSource:(id)arg1 inPaymentSources:(id)arg2;
- (id)_sortPaymentSources:(id)arg1;
- (id)availableFundingSourcesForFinancingOption:(id)arg1 eligibleBankSources:(id)arg2 lastUsedFundingSources:(id)arg3;
- (id)availableFundingSourcesForPaymentIntentDetails:(id)arg1 currencyAmount:(id)arg2 planIdentifier:(id)arg3 primaryPaymentSource:(id)arg4;
- (void)clearCache;
- (id)initWithPassLibrary:(id)arg1 peerPaymentAccount:(id)arg2 defaultPassUniqueIdentifier:(id)arg3;
- (id)peerPaymentAccount;
- (void)setPeerPaymentAccount:(id)arg1;

@end
