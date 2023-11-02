
@interface PassKitUI.PaymentSetupServiceProviderProductsFlowItem : NSObject <PKPaymentSetupPurchaseServiceProviderProductsViewControllerFlowDelegate> {
    void context;
    void delegate;
    void identifier;
    void product;
    void viewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)purchaseServiceProviderProductsViewController:(id)arg1 didSelectServiceProviderProduct:(id)arg2;

@end
