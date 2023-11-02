
@interface NewsSubscription.PaywallViewController : UIViewController {
    void $__lazy_storage_$_purchasingSpinner;
    void $__lazy_storage_$_verificationSpinner;
    void delegate;
    void eventHandler;
    void isBeingUsedAsPlugin;
    void lastPaywallLayout;
    void layoutOptionsProvider;
    void paidAccessChecker;
    void paywallModel;
    void personalizedPaywallDataService;
    void pluggableDelegate;
    void purchasePresenter;
    void purchasingSpinnerViewControllerFactory;
    void sceneStateManager;
    void viewProvider;
    void webOptinFlowManager;
}

- (void).cxx_destruct;
- (void)handlePurchaseAddedNotificationWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
