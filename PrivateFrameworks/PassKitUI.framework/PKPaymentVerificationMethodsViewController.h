
@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController <PKLoadingUIProviding> {
    bool  _alwaysPerformExternalVerificationInline;
    <PKPaymentVerificationMethodsViewControllerFlowItemDelegate> * _flowItemDelegate;
    PKPaymentSetupVerificationMethodTableController * _methodTableController;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentVerificationController * _verificationController;
    long long  _verificationStatus;
}

@property (nonatomic) bool alwaysPerformExternalVerificationInline;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentVerificationMethodsViewControllerFlowItemDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentVerificationController *verificationController;

- (void).cxx_destruct;
- (void)_configure;
- (void)_handleVerificationFinished;
- (void)_loadVerificationOptions;
- (id)_newVerificationRequest;
- (id)_requestErrorAlertController:(id)arg1;
- (void)_showSetupAssistantVerifyLaterAlertAndTerminate;
- (void)_terminateSetupFlow;
- (bool)alwaysPerformExternalVerificationInline;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)dismissVerificationViewControllerAnimated:(bool)arg1;
- (id)flowItemDelegate;
- (void)handleNextButtonTapped:(id)arg1;
- (void)hideActivitySpinner;
- (id)initWithVerificationController:(id)arg1;
- (id)initWithVerificationController:(id)arg1 fieldsModel:(id)arg2;
- (id)initWithVerificationController:(id)arg1 verificationChannels:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (id)presentationContext;
- (id)provisioningController;
- (void)setAlwaysPerformExternalVerificationInline:(bool)arg1;
- (void)setFlowItemDelegate:(id)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)showActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)verificationController;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (id)visibleFieldIdentifiers;

@end
