
@interface PKPayLaterFundingSourceSectionController : PKPayLaterSectionController <PKPaymentSetupDelegate> {
    PKPayLaterButtonRow * _addPaymentMethodRow;
    bool  _autoPayment;
    NSArray * _availableFundingSources;
    <PKPayLaterFundingSourceSectionControllerDelegate> * _delegate;
    NSMutableDictionary * _paymentSourceRows;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPayLaterFinancingOption * _selectedFinancingOption;
    PKPayLaterPaymentSource * _selectedFundingSource;
    PKPayLaterSetupFlowController * _setupController;
}

@property (nonatomic, copy) NSArray *availableFundingSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureAddPaymentMethoSectionSnapshot:(id)arg1;
- (void)_configureAutoPaySectionSnapshot:(id)arg1;
- (void)_configurePaymentPassSectionSnapshot:(id)arg1;
- (id)_pageItemForSectionIndex:(long long)arg1;
- (id)_paymentSourceRowForBankFundingSource:(id)arg1;
- (id)_paymentSourceRowForPassFundingSource:(id)arg1;
- (void)_presentProvisioningFlow;
- (id)_rowForPaymentSource:(id)arg1;
- (void)_showAddPaymentButtonSpinner:(bool)arg1;
- (id)availableFundingSources;
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;
- (void)didTapHyperLink:(id)arg1;
- (id)identifiers;
- (id)initWithPayLaterAccount:(id)arg1 dynamicContentPage:(id)arg2 peerPaymentAccount:(id)arg3 selectedFundingSource:(id)arg4 autoPayment:(bool)arg5 availableFundingSources:(id)arg6 setupController:(id)arg7 delegate:(id)arg8;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)setAvailableFundingSources:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
