
@interface PKPeerPaymentExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPeerPaymentSetupFlowControllerDataSource> {
    bool  _allowsManualEntry;
    PKPeerPaymentSetupFlowProvisionConfiguration * _configuration;
    bool  _hidesSetupLater;
    UIViewController * _nextViewController;
    unsigned long long  _operations;
    PKPeerPaymentSetupFlowController * _peerPaymentSetupFlowController;
}

@property (nonatomic) bool allowsManualEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDifferentCard;
- (id)_bodyText;
- (void)_presentDisplayableError:(id)arg1;
- (void)_showSpinner:(bool)arg1;
- (void)_terminateSetupFlow;
- (bool)allowsManualEntry;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithProvisoningController:(id)arg1 setupDelegate:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4 credential:(id)arg5;
- (void)setAllowsManualEntry:(bool)arg1;
- (bool)shouldPushTerms;
- (void)viewDidLoad;

@end
