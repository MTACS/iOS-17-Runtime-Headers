
@interface PassKitUI.PaymentSetupIdentityFlowItem : NSObject <CIDVUIProofingFlowManagerDelegate> {
    void context;
    void delegate;
    void identifier;
    void product;
    void viewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)proofingFlowManager:(id)arg1 completedProofingWithError:(id)arg2;
- (void)proofingFlowManager:(id)arg1 didChangeActiveConfigurations:(id)arg2;

@end
