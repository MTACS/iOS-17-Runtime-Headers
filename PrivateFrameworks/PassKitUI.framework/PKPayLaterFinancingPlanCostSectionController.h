
@interface PKPayLaterFinancingPlanCostSectionController : PKPayLaterSectionController {
    PKPayLaterFinancingPlan * _financingPlan;
    PKPayLaterButtonRow * _loanAgreementButton;
    PKPayLaterTitleDetailRow * _loanIdentifierRow;
    PKPaymentPass * _payLaterPass;
    PKAccountTermsAndConditionsController * _termsController;
    NSDateFormatter * _transactionDateFormatter;
}

@property (nonatomic, retain) PKPayLaterFinancingPlan *financingPlan;

- (void).cxx_destruct;
- (void)_configureCostSummarySection:(id)arg1;
- (void)_configureIssuerBrandSection:(id)arg1;
- (void)_configureLoanAgreementSection:(id)arg1;
- (void)configureHeaderView:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)contextMenuForPayLaterItem:(id)arg1;
- (id)financingPlan;
- (id)footerContentForSectionIdentifier:(id)arg1;
- (Class)headerViewClassForSectionIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithFinancingPlan:(id)arg1 payLaterAccount:(id)arg2 delegate:(id)arg3;
- (void)setFinancingPlan:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
