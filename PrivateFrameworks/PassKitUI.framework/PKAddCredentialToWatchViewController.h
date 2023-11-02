
@interface PKAddCredentialToWatchViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKSubcredentialRemoteDevicePairingFlowControllerOperation, PKViewControllerPreflightable> {
    LAContext * _LAContext;
    PKPaymentAuthorizationCoordinator * _authorizationCoordinator;
    id /* block */  _authorizationRequestCompletion;
    <PKSubcredentialPairingFlowControllerProtocol> * _flowController;
    PKHeroCardWatchExplainationHeaderView * _heroCardView;
    bool  _isAdvancing;
    PKSubcredentialPairingFlowControllerContext * _provisioningContext;
    <PKSubcredentialProvisioningViewModelProtocol> * _provisioningViewModel;
    PKAppletSubcredentialSharingSession * _sharingSession;
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
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)flowController;
- (id)initWithFlowController:(id)arg1 context:(id)arg2;
- (void)invalidateUserAuth;
- (void)loadView;
- (unsigned long long)operation;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeContextWithHandler:(id /* block */)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)presentPaymentSheetForSharingRequest:(id)arg1;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg1;
- (id)provisioningContext;
- (void)resetState;
- (void)setProvisioningContext:(id)arg1;
- (id)sharingSessionWithDelegate:(id)arg1;
- (void)showActivityIndicator:(bool)arg1;
- (void)showSuccessCheckmark:(bool)arg1;
- (void)startProvisioning;
- (void)subcredentialProvisioningConfiguration:(id)arg1 requestUserAuthWithCompletion:(id /* block */)arg2;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 inState:(long long)arg3;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2;
- (bool)suppressFieldDetect;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
