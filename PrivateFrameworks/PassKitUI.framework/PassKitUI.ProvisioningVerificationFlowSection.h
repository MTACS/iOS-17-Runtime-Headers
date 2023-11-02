
@interface PassKitUI.ProvisioningVerificationFlowSection : NSObject <PKPaymentVerificationControllerFlowDelegate> {
    void context;
    void delegate;
    void identifier;
    void provisionedPasses;
    void verificationController;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didFinishVerification;
- (id)init;
- (id)presentationContext;

@end
