
@interface SeymourUI.MarketingDynamicOfferCoordinator : NSObject <AMSUIDynamicViewControllerDelegate> {
    void eventHub;
    void purchaseHandler;
}

- (void).cxx_destruct;
- (void)dynamicViewController:(id)arg1 didFinishCarrierLinkingWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;
- (id)init;

@end
