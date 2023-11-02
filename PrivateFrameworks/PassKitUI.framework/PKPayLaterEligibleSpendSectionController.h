
@interface PKPayLaterEligibleSpendSectionController : PKPayLaterSectionController {
    NSDateFormatter * _dateFormatter;
    PKCurrencyAmount * _eligibleSpendAmount;
    NSDate * _expirationDate;
    NSArray * _financingOptions;
    unsigned long long  _financingOptionsProductType;
    NSDecimalNumber * _maxAPR;
    NSDecimalNumber * _minAPR;
    PKPayLaterButtonRow * _newPurchaseButtonRow;
    NSNumberFormatter * _numberFormatter;
    PKPayLaterSetupFlowController * _payLaterSetupFlowController;
    NSNumberFormatter * _percentageFormatter;
    NSDateFormatter * _timeFormatter;
}

+ (id)dynamicContentPageForBNPLOption:(id)arg1;

- (void).cxx_destruct;
- (void)_configureEligbleSpendSection:(id)arg1;
- (void)_configureFinancingOptionsSectionWithSectionIdentifier:(id)arg1 snapshot:(id)arg2;
- (void)_configureNewPurchaseSection:(id)arg1;
- (void)_configureTotalCostSection:(id)arg1;
- (id)_firstFinancingOptionSectionIdentifier;
- (id)_lastFinancingOptionSectionIdentifier;
- (id)_paymentScheduleRowsForOption:(id)arg1;
- (id)_tileDetailRowForOption:(id)arg1;
- (void)_updateLocalState;
- (void)configureHeaderView:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)footerContentForSectionIdentifier:(id)arg1;
- (Class)headerViewClassForSectionIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithPayLaterAccount:(id)arg1 dynamicContentPage:(id)arg2 viewControllerDelegate:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setPayLaterAccount:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
