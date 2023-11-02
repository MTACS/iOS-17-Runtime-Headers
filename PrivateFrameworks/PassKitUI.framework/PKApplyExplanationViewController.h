
@interface PKApplyExplanationViewController : PKDynamicProvisioningPageViewController <PKApplyFlowControllerProtocol> {
    id /* block */  _auxiliaryAction;
    PKBusinessChatController * _businessChatController;
    id /* block */  _continueAction;
    PKApplyController * _controller;
    id /* block */  _doneAction;
    bool  _isLoading;
    id /* block */  _learnMoreAction;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKAccountTermsAndConditionsController * _termsController;
}

@property (nonatomic, copy) id /* block */ auxiliaryAction;
@property (nonatomic, copy) id /* block */ bodyButtonAction;
@property (nonatomic, copy) id /* block */ continueAction;
@property (nonatomic, retain) PKApplyController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ doneAction;
@property (nonatomic, copy) id /* block */ doneButtonAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ learnMoreAction;
@property (nonatomic, copy) id /* block */ primaryButtonAction;
@property (nonatomic, copy) id /* block */ secondaryButtonAction;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_analyticsReportButtonTap:(id)arg1;
- (void)_auxiliary;
- (void)_bodyButtonAction;
- (void)_cancel;
- (void)_continue;
- (void)_done;
- (void)_featureApplicationUpdated;
- (void)_learnMore;
- (void)_linkAction:(id)arg1;
- (void)_performActionForBlock:(id /* block */)arg1;
- (void)_performDoneAction:(bool)arg1;
- (void)_performLearnMoreAction;
- (void)_presentInvitationContactSupport;
- (void)_presentTermsWithIdentifier:(id)arg1;
- (id)analyticsAdditionalValues;
- (id)analyticsPageTag;
- (id /* block */)auxiliaryAction;
- (id /* block */)continueAction;
- (id)controller;
- (id)currentPage;
- (id /* block */)doneAction;
- (void)handleNextStep;
- (void)handleNextViewController:(id)arg1 displayableError:(id)arg2;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;
- (id /* block */)learnMoreAction;
- (void)setAuxiliaryAction:(id /* block */)arg1;
- (void)setContinueAction:(id /* block */)arg1;
- (void)setController:(id)arg1;
- (void)setDoneAction:(id /* block */)arg1;
- (void)setLearnMoreAction:(id /* block */)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (void)showNavigationBarSpinner:(bool)arg1;
- (void)terminateSetupFlow;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
