
@interface PKApplyFieldsViewController : PKDynamicProvisioningFieldsPageViewController <PKApplyFlowControllerProtocol, PKPaymentSetupPresentationProtocol> {
    PKApplyRequiredFieldsPage * _applyPage;
    PKApplyController * _controller;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_analyticsReportError:(id)arg1;
- (void)_analyticsReportRowTapForFieldCell:(id)arg1;
- (void)_completeInWalletLater;
- (void)_featureApplicationUpdated;
- (void)_handleNextStep;
- (void)_handleNextViewController:(id)arg1 displayableError:(id)arg2 terminationHandler:(id /* block */)arg3;
- (void)_terminateFlow;
- (void)_withdrawApplicationTapped;
- (id)currentPage;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)didTapFooterLink:(id)arg1;
- (void)didTapLink:(id)arg1 termsIdentifier:(id)arg2 analyticsIdentifier:(id)arg3;
- (void)fieldCellDidTapButton:(id)arg1;
- (bool)fieldCellEditableTextFieldShouldBeginEditing:(id)arg1;
- (void)handleCancelTapped;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 applyPage:(id)arg3;
- (unsigned long long)onPresentationRemoveViewControllersAfterMarker;
- (bool)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
