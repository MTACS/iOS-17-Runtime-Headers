
@interface PKSubcredentialInvitationFlowController : NSObject <PKSubcredentialInvitationFlowControllerProtocol> {
    <PKSubcredentialProvisioningFlowControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSubcredentialProvisioningFlowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)canAttemptLocalDeviceProvisioningWithContext:(id)arg1 completion:(id /* block */)arg2;
+ (void)canAttemptRemoteDeviceProvisioningWithContext:(id)arg1 completion:(id /* block */)arg2;
+ (bool)isPassPersonalizedOrPersonalizing:(id)arg1;
+ (id)localDevicePassMatchingPairedTerminalIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_handOffToFlowManagerFromOperation:(id)arg1 completion:(id /* block */)arg2;
- (id)alertForOperation:(id)arg1 withError:(id)arg2 retryHandler:(id /* block */)arg3 cancelationHandler:(id /* block */)arg4;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)localDeviceProvisioningViewModelForOperation:(id)arg1;
- (id)localizedIssuerNameForProvisioningOperation:(id)arg1;
- (void)nextViewControllerFromProvisioningOperation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)provisioningFinishedWithOperation:(id)arg1;
- (void)provisioningWasCanceledWithOperation:(id)arg1;
- (id)remoteDeviceProvisioningViewModelForOperation:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
