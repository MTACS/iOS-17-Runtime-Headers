
@interface PassKitUI.ProvisioningPeerPaymentCredentialFlowItem : NSObject <PKPeerPaymentSetupFlowControllerDelegate> {
    void context;
    void credential;
    void delegate;
    void identifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)peerPaymentSetupFlowControllerDidFinish:(id)arg1;

@end
