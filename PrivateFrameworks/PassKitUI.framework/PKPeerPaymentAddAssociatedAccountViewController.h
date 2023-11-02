
@interface PKPeerPaymentAddAssociatedAccountViewController : PKExplanationViewController <PKPeerPaymentSetupFlowControllerDataSource> {
    PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration * _configuration;
    PKFamilyMemberCollection * _familyCollection;
    PKFamilyMember * _familyMember;
    CLInUseAssertion * _inUseAssertion;
    unsigned long long  _operations;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPeerPaymentSetupFlowController * _peerPaymentSetupFlowController;
    long long  _setupType;
    PKWatchDeviceImageOverlayView * _watchDeviceImageView;
    PKPeerPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_imageForWatchView;
- (void)_invalidateCLInUseAssertion;
- (void)_presentDisplayableError:(id)arg1;
- (void)_showSpinner:(bool)arg1;
- (void)_terminateAddAssociatedAccountFlow;
- (void)dealloc;
- (void)explanationViewDidSelectBodyButton:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithFamilyMember:(id)arg1 familyCollection:(id)arg2 webService:(id)arg3 passLibraryDataProvider:(id)arg4 delegate:(id)arg5 context:(long long)arg6 setupType:(long long)arg7;
- (bool)shouldPushTerms;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
