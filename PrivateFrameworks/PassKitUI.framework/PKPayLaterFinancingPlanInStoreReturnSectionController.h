
@interface PKPayLaterFinancingPlanInStoreReturnSectionController : PKPayLaterSectionController {
    PKPayLaterFinancingPlan * _financingPlan;
    double  _maxIconWidth;
    NSDictionary * _sectionIcons;
}

@property (nonatomic, retain) PKPayLaterFinancingPlan *financingPlan;

- (void).cxx_destruct;
- (void)_configureLearnMoreSection:(id)arg1;
- (void)_configurePANSection:(id)arg1;
- (void)_configureStoreCreditSection:(id)arg1;
- (void)_configureTappingPaymentMethodSection:(id)arg1;
- (id)_iconTitleDetailRowForSectionIdentifier:(id)arg1 title:(id)arg2 detail:(id)arg3;
- (id)financingPlan;
- (id)identifiers;
- (id)initWithFinancingPlan:(id)arg1 payLaterAccount:(id)arg2 delegate:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setFinancingPlan:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
