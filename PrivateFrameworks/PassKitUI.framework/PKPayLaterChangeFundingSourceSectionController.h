
@interface PKPayLaterChangeFundingSourceSectionController : PKPayLaterSectionController <PKPaymentSetupDelegate> {
    PKPayLaterButtonRow * _addPaymentMethodRow;
    PKPayLaterSwitchRow * _autoPaySwitchRow;
    bool  _autoPayment;
    NSArray * _availableFundingSources;
    NSDateFormatter * _dateFormatter;
    <PKPayLaterChangeFundingSourceSectionControllerDelegate> * _delegate;
    PKPayLaterFinancingPlan * _financingPlan;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse * _intentDetails;
    PKPaymentPass * _payLaterPass;
    PKPayLaterPaymentIntentController * _paymentIntentController;
    NSMutableDictionary * _paymentSourceRows;
    PKPeerPaymentAccount * _peerPaymentAccount;
    bool  _preventTouches;
    PKPayLaterPaymentSource * _selectedFundingSource;
    NSString * _selectedFundingSourceCellIdentifier;
    PKPassSnapshotter * _snapshotter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPayLaterFinancingPlan *financingPlan;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKAccountWebServiceFinancingPlanPaymentIntentResponse *intentDetails;
@property (nonatomic, retain) PKPayLaterPaymentIntentController *paymentIntentController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureAddPaymentMethodSection:(id)arg1;
- (void)_configureAutoPaymentAgreementSection:(id)arg1;
- (void)_configureAutoPaymentNextPaymentSection:(id)arg1;
- (void)_configureAutoPaymentSection:(id)arg1;
- (void)_configureFundingSourceSection:(id)arg1;
- (void)_handleAutoPaySwitchEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })_passImageSize;
- (id)_paymentSourceRowForBankFundingSource:(id)arg1;
- (id)_paymentSourceRowForPassFundingSource:(id)arg1;
- (void)_presentAutoPayOverdueAlertWithCompletion:(id /* block */)arg1;
- (void)_presentMakePaymentWithCompletion:(id /* block */)arg1;
- (void)_presentProvisioningFlowFromRow:(id)arg1;
- (id)_rowForPaymentSource:(id)arg1;
- (bool)_shouldShowAddPaymentMethodSection;
- (bool)_shouldShowAutoPaymentAgreementSection;
- (bool)_shouldShowNextPaymentSection;
- (void)_showButtonSpinnerForRow:(id)arg1 showSpinner:(bool)arg2;
- (id)_snapshotForPass:(id)arg1 completion:(id /* block */)arg2;
- (id)_unavailablePaymentSourceRowForFundingSource:(id)arg1;
- (void)_updateCachedValues;
- (id)financingPlan;
- (id)footerContentForSectionIdentifier:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithFinancingPlan:(id)arg1 payLaterPass:(id)arg2 paymentIntentController:(id)arg3 intentDetails:(id)arg4 dynamicContentPage:(id)arg5 delegate:(id)arg6;
- (id)intentDetails;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)paymentIntentController;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)setFinancingPlan:(id)arg1;
- (void)setIntentDetails:(id)arg1;
- (void)setPaymentIntentController:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
