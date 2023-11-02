
@interface PKSubcredentialInvitationViewController : PKPassShareRedemptionViewController <PKSubcredentialInvitationProvisioningFlowControllerOperation, PKViewControllerPreflightable> {
    NSString * _contactName;
    PKContactResolver * _contactResolver;
    <PKSubcredentialInvitationFlowControllerProtocol> * _flowController;
    PKSubcredentialInvitationFlowControllerContext * _provisioningContext;
    <PKSubcredentialProvisioningViewModelProtocol> * _provisioningViewModel;
    <PKSubcredentialProvisioningViewModelProtocol> * _remoteProvisioningViewModel;
    PKAppletSubcredentialSharingSession * _session;
    bool  _shouldSurfaceRemoteDeviceProvisioningErrors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PKSubcredentialInvitationFlowControllerProtocol> *flowController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long operation;
@property (nonatomic, retain) PKSubcredentialInvitationFlowControllerContext *provisioningContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bodyTextForContext:(id)arg1;
- (id)_titleTextForContext:(id)arg1;
- (void)activationCodeDidChangeToCode:(id)arg1;
- (void)advanceToNextState;
- (id)contactKeysToFetch;
- (void)continueButtonPressed;
- (void)continueLaterButtonPressed;
- (id)flowController;
- (id)initWithFlowController:(id)arg1 context:(id)arg2;
- (unsigned long long)operation;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)provisioningContext;
- (void)resetState;
- (void)setProvisioningContext:(id)arg1;
- (id)sharingSessionWithDelegate:(id)arg1 startSession:(bool)arg2;
- (void)startLocalDeviceProvisioning;
- (void)startRemoteDeviceProvisioning;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 inState:(long long)arg3;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2;
- (void)subcredentialProvisioningController:(id)arg1 shouldFailAfterError:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)viewDidLoad;

@end
