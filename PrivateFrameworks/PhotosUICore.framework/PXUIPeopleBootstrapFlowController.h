
@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController {
    PXPeopleBootstrapConfirmationViewController * _confirmationViewController;
    PXPeopleBootstrapSummaryViewController * _summaryViewController;
}

@property (nonatomic, retain) PXPeopleBootstrapConfirmationViewController *confirmationViewController;
@property (nonatomic, readonly) PHPerson *sourcePerson;
@property (nonatomic, retain) PXPeopleBootstrapSummaryViewController *summaryViewController;

- (void).cxx_destruct;
- (id)_postNamingViewControllers;
- (void)computeViewControllersForBootstrapFlow;
- (id)confirmationViewController;
- (void)done:(id)arg1;
- (void)recomputeViewControllersForChangeInKeyPath:(id)arg1;
- (void)setConfirmationViewController:(id)arg1;
- (void)setSummaryViewController:(id)arg1;
- (id)sourcePerson;
- (id)summaryViewController;

@end
