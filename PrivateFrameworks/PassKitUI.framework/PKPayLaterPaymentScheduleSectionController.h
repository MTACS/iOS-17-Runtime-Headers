
@interface PKPayLaterPaymentScheduleSectionController : PKPayLaterSectionController {
    NSDateFormatter * _dateFormatter;
    <PKPayLaterPaymentScheduleSectionControllerDelegate> * _delegate;
    PKPayLaterFinancingOption * _selectedFinancingOption;
    PKPayLaterSetupFlowController * _setupController;
}

- (void).cxx_destruct;
- (void)_configurePaymentsSectionSnapshot:(id)arg1;
- (void)_configureTotalAmountSection:(id)arg1;
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;
- (void)didTapHyperLink:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithSetupFlowController:(id)arg1 dynamicContentPage:(id)arg2 selectedFinancingOption:(id)arg3 delegate:(id)arg4;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
