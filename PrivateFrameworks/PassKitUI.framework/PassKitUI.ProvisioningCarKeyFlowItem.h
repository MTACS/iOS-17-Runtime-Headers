
@interface PassKitUI.ProvisioningCarKeyFlowItem : NSObject <PKSubcredentialProvisioningFlowControllerDelegate> {
    void context;
    void credential;
    void delegate;
    void identifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)subcredentialProvisioningFlowController:(id)arg1 didFinishWithPass:(id)arg2 error:(id)arg3;
- (void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id)arg1;

@end
