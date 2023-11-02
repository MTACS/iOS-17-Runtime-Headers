
@interface PKApplyCollectionViewController : PKPaymentSetupOptionsViewController <PKApplyFlowControllerProtocol> {
    PKApplyController * _controller;
    PKDynamicProvisioningPageContent * _page;
    id /* block */  _primaryButtonAction;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKAccountTermsAndConditionsController * _termsController;
}

@property (nonatomic, readonly) PKApplyController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKDynamicProvisioningPageContent *page;
@property (nonatomic, copy) id /* block */ primaryButtonAction;
@property (nonatomic, readonly) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)_reportViewDidAppear:(bool)arg1;
- (id)_secondaryButton;
- (void)_withdrawApplicationTapped;
- (id)additionalAnalyticsDictionaryForViewAppearing:(bool)arg1;
- (id)controller;
- (id)currentPage;
- (void)didTapFooterLink:(id)arg1;
- (void)didTapLearnMore:(id)arg1;
- (void)didTapLink:(id)arg1 termsIdentifier:(id)arg2 analyticsIdentifier:(id)arg3;
- (void)displayDisplayableError:(id)arg1;
- (void)handleNextStep;
- (void)handleNextViewController:(id)arg1 displayableError:(id)arg2;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;
- (id)page;
- (id)pageTag;
- (id /* block */)primaryButtonAction;
- (void)primaryButtonTapped;
- (void)secondaryButtonTapped;
- (void)setPage:(id)arg1;
- (void)setPrimaryButtonAction:(id /* block */)arg1;
- (id)setupDelegate;
- (bool)shouldDisplayErrorOnWithdraw;
- (void)terminateSetupFlow;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
