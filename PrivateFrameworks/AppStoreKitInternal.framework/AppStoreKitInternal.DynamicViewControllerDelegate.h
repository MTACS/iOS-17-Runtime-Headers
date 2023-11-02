
@interface AppStoreKitInternal.DynamicViewControllerDelegate : NSObject <AMSUIDynamicViewControllerDelegate> {
    void carrierLinkFailureHandler;
    void carrierLinkSuccessHandler;
    void contentViewConstructor;
    void didDismissHandler;
    void purchaseFailureHandler;
    void purchaseSuccessHandler;
    void subscriptionManager;
}

- (void).cxx_destruct;
- (id)dynamicViewController:(id)arg1 contentViewWithDictionary:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)dynamicViewController:(id)arg1 didFinishCarrierLinkingWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;
- (id)init;

@end
