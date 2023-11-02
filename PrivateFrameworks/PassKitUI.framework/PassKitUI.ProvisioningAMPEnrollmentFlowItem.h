
@interface PassKitUI.ProvisioningAMPEnrollmentFlowItem : NSObject <PKPaymentPassAMPEnrollmentViewControllerFlowDelegate> {
    void context;
    void delegate;
    void identifier;
    void provisionedPasses;
}

- (void).cxx_destruct;
- (void)ampEnrollmentViewControllerDidFinish:(id)arg1;
- (id)init;

@end
