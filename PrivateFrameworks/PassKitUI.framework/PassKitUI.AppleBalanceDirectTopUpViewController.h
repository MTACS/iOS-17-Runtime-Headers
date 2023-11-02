
@interface PassKitUI.AppleBalanceDirectTopUpViewController : UIViewController <AMSUIWebDelegate> {
    void account;
    void addItem;
    void amount;
    void context;
    void dtuModel;
    void hostingVC;
    void setupController;
    void uiManager;
}

- (void).cxx_destruct;
- (void)addAction;
- (void)dismissAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)webViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;

@end
