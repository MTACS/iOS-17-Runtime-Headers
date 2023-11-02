
@interface AMSUIPaymentSetupViewController : UIViewController {
    UIViewController * _childViewController;
    <AMSUIPaymentSetupViewControllerDelegate> * _delegate;
    PKPaymentSetupRequest * _paymentSetupRequest;
}

@property (nonatomic, retain) UIViewController *childViewController;
@property (nonatomic) <AMSUIPaymentSetupViewControllerDelegate> *delegate;
@property (nonatomic, readonly) PKPaymentSetupRequest *paymentSetupRequest;

- (void).cxx_destruct;
- (void)_setup;
- (id)childViewController;
- (id)delegate;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithPaymentSetupRequest:(id)arg1;
- (void)loadView;
- (id)paymentSetupRequest;
- (void)setChildViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
