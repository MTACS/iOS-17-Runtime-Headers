
@interface PassKitUI.PaymentSetupPurchaseServiceProductFlowItem : NSObject <PKPaymentSetupPurchaseServiceProviderProductItemsViewControllerFlowDelegate> {
    void context;
    void delegate;
    void identifier;
    void product;
    void serviceProviderProduct;
    void viewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)purchaseServiceProviderProductItemsViewController:(id)arg1 didPerformPurchaseWithCredential:(id)arg2;
- (void)purchaseServiceProviderProductItemsViewControllerDidTerminate:(id)arg1;

@end
