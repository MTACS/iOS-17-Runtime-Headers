
@interface PKPayLaterReviewPlanSectionController : PKPayLaterSectionController {
    <PKPayLaterReviewPlanSectionControllerDelegate> * _delegate;
    PKPayLaterFinancingOption * _financingOption;
    PKPayLaterSetupFlowController * _setupController;
    bool  _useDynamicContent;
}

- (void).cxx_destruct;
- (void)_configureDynamicSection:(id)arg1 snapshot:(id)arg2;
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;
- (void)didTapHyperLink:(id)arg1;
- (id)identifiers;
- (id)initWithSetupFlowController:(id)arg1 dynamicContentPage:(id)arg2 financingOption:(id)arg3 delegate:(id)arg4;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
