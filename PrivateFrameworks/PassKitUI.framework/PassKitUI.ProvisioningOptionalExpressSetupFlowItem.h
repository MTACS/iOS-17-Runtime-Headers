
@interface PassKitUI.ProvisioningOptionalExpressSetupFlowItem : NSObject <PKPaymentSetupOptionalExpressModeViewControllerFlowDelegate> {
    void context;
    void delegate;
    void identifier;
    void provisionedPasses;
}

- (void).cxx_destruct;
- (id)init;
- (void)optionalExpressModeViewControllerDidFinish:(id)arg1;

@end
