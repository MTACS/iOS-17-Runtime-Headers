
@interface PKPaymentSetupVerificationCompletionViewController : PKPaymentSetupTableViewController <PKForegroundActiveArbiterObserver, PKLoadingUIProviding, PKPaymentVerificationObserverDelegate, UITextFieldDelegate> {
    UIColor * _editableTextFieldColor;
    <PKPaymentSetupVerificationCompletionViewControllerFlowItemDelegate> * _flowItemDelegate;
    struct { 
        bool foreground; 
        bool foregroundActive; 
    }  _foregroundActiveState;
    long long  _mode;
    bool  _offerOtherMethods;
    PKPaymentProvisioningController * _provisioningController;
    bool  _resignedResponder;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    PKPaymentSetupFooterView * _tableFooter;
    PKTableHeaderView * _tableHeader;
    bool  _verificationAlreadyHandled;
    bool  _verificationCodeAccepted;
    PKActivityTableCell * _verificationCodeCell;
    PKPaymentVerificationController * _verificationController;
    PKPaymentVerificationObserver * _verificationObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentSetupVerificationCompletionViewControllerFlowItemDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentVerificationController *verificationController;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive;
- (void)_applicationWillResignActive;
- (void)_disableUI;
- (void)_enableUI;
- (void)_handleNextStep;
- (void)_handlePassVerifiedNotification:(id)arg1;
- (void)_showActivationError:(id)arg1;
- (void)_showCompletedUIForPass:(id)arg1;
- (void)_showCompletedUIWithNextHandler:(id /* block */)arg1;
- (void)_startVerificationObserver;
- (void)_stopVerificationObserver;
- (void)_submitVerificationCode;
- (void)_terminateFlow;
- (void)dealloc;
- (id)flowItemDelegate;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)initWithVerificationController:(id)arg1 mode:(long long)arg2 offerOtherMethods:(bool)arg3;
- (void)loadView;
- (void)next:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (id)provisioningController;
- (void)selectOtherVerificationMethod;
- (void)setFlowItemDelegate:(id)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)verificationController;
- (void)verificationObserver:(id)arg1 didObserveVerificationCode:(id)arg2;
- (void)verificationObserverDidTimeout:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
