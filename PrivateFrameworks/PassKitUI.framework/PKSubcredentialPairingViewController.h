
@interface PKSubcredentialPairingViewController : UIViewController <PKSubcredentialLocalDevicePairingFlowControllerOperation> {
    <PKSubcredentialPairingFlowControllerProtocol> * _flowController;
    PKIdleTimerAssertion * _idleTimerAssertion;
    bool  _isAdvancing;
    bool  _isCancelling;
    bool  _outstandingAlert;
    PKAppletSubcredentialPairingSession * _pairingSession;
    PKSubcredentialPairingFlowControllerContext * _provisioningContext;
    PKCredentialProvisioningView * _provisioningView;
    <PKSubcredentialProvisioningViewModelProtocol> * _provisioningViewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PKSubcredentialPairingFlowControllerProtocol> *flowController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long operation;
@property (nonatomic, retain) PKSubcredentialPairingFlowControllerContext *provisioningContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressFieldDetect;

- (void).cxx_destruct;
- (void)advanceToNextState;
- (void)dealloc;
- (id)flowController;
- (void)handleCancelButton;
- (void)hostApplicationDidEnterBackground;
- (id)initWithFlowController:(id)arg1 context:(id)arg2;
- (unsigned long long)operation;
- (id)pairingSessionWithDelegate:(id)arg1;
- (id)provisioningContext;
- (void)setIdleTimerDisabled:(bool)arg1;
- (void)setProvisioningContext:(id)arg1;
- (void)startProvisioning;
- (void)subcredentialProvisioningController:(id)arg1 didEnterState:(long long)arg2;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 inState:(long long)arg3;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2;
- (void)subcredentialProvisioningController:(id)arg1 shouldFailAfterError:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)suppressFieldDetect;
- (void)updateUIForState:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
