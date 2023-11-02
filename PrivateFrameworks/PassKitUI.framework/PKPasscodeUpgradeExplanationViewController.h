
@interface PKPasscodeUpgradeExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol> {
    long long  _context;
    id /* block */  _continuationHandler;
    PKPasscodeUpgradeFlowController * _flowController;
    bool  _isForWatch;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    id /* block */  _setupLaterHandler;
    bool  _upgradeRequiredToAddNewPass;
    bool  _viewHasAppeared;
}

@property (nonatomic, copy) id /* block */ continuationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ setupLaterHandler;
@property (readonly) Class superclass;
@property (nonatomic) bool upgradeRequiredToAddNewPass;

- (void).cxx_destruct;
- (void)_showSpinner:(bool)arg1;
- (id /* block */)continuationHandler;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithPasscodeUpgradeFlowController:(id)arg1 isForWatch:(bool)arg2;
- (unsigned long long)paymentSetupMarker;
- (void)setContinuationHandler:(id /* block */)arg1;
- (void)setSetupLaterHandler:(id /* block */)arg1;
- (void)setUpgradeRequiredToAddNewPass:(bool)arg1;
- (id /* block */)setupLaterHandler;
- (bool)upgradeRequiredToAddNewPass;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
