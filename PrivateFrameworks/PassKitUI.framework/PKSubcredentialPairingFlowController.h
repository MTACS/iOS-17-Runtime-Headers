
@interface PKSubcredentialPairingFlowController : NSObject <PKSubcredentialPairingFlowControllerProtocol> {
    <PKSubcredentialProvisioningFlowControllerDelegate> * _delegate;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSubcredentialProvisioningFlowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;

+ (id)contextFromPaymentCredential:(id)arg1 provisioningController:(id)arg2;
+ (id)credentialToShareForContext:(id)arg1;
+ (id)sharingRequestForContext:(id)arg1 withCredential:(id)arg2;

- (void).cxx_destruct;
- (void)_handOffToFlowManagerFromOperation:(id)arg1 completion:(id /* block */)arg2;
- (id)alertForOperation:(id)arg1 withError:(id)arg2 retryHandler:(id /* block */)arg3 cancelationHandler:(id /* block */)arg4;
- (void)canProvisionOnRemoteDeviceWithContext:(id)arg1 sharingRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)localDeviceProvisioningViewModelForOperation:(id)arg1;
- (id)localizedIssuerNameForProvisioningOperation:(id)arg1;
- (void)nextViewControllerFromHeroViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)nextViewControllerFromProvisioningOperation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)prewarmPairingWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)provisioningFinishedWithOperation:(id)arg1;
- (void)provisioningWasCanceledWithOperation:(id)arg1;
- (id)remoteDeviceProvisioningViewModelForOperation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (id)startingViewControllerForContext:(id)arg1;

@end
