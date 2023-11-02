
@interface PassKitUI.PaymentSetupPurchaseProductFlowItem : NSObject <PKPaymentSetupPurchaseViewControllerFlowDelegate> {
    void _isManualProvisioning;
    void context;
    void delegate;
    void identifier;
    void product;
    void viewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)purchaseViewController:(id)arg1 didPerformPurchaseWithCredential:(id)arg2;
- (void)purchaseViewControllerDidRequestTransferBalance:(id)arg1;

@end
