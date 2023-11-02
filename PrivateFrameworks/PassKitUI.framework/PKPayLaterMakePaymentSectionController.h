
@interface PKPayLaterMakePaymentSectionController : PKPayLaterSectionController {
    <PKPayLaterMakePaymentSectionControllerDelegate> * _delegate;
    PKPayLaterFinancingPlan * _financingPlan;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse * _intentDetails;
    NSDateFormatter * _mediumDateFormatter;
    NSNumberFormatter * _numberFormatter;
    unsigned long long  _selectedItem;
}

- (void).cxx_destruct;
- (id)_amountForItemType:(unsigned long long)arg1;
- (void)_configureNextPaymentSection:(id)arg1;
- (void)_configurePastDueAmountSection:(id)arg1;
- (void)_configureTotalPaymentSection:(id)arg1;
- (id)_detailFont;
- (id)_detailTextColor;
- (bool)_isItemAvailableToSelect:(unsigned long long)arg1;
- (id)_titleFont;
- (void)_updateSelectedItem:(unsigned long long)arg1;
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;
- (id)currentSelectedAmount;
- (id)footerContentForSectionIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithFinancingPlan:(id)arg1 payLaterAccount:(id)arg2 intentDetails:(id)arg3 dynamicContentPage:(id)arg4 delegate:(id)arg5;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
