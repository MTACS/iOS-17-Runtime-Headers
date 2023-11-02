
@interface PKSelectActionViewController : UIViewController <PKPerformActionViewControllerDelegate, PKSelectActionViewDelegate> {
    unsigned long long  _actionType;
    PKSelectActionView * _actionView;
    NSArray * _actions;
    NSDictionary * _balances;
    <PKSelectActionViewControllerDelegate> * _delegate;
    PKPaymentPass * _pass;
    PKPerformActionPassView * _passView;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKPaymentPassAction * _selectedAction;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSelectActionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_reloadActionView;
- (void)_rightBarButtonPressed:(id)arg1;
- (id)delegate;
- (id)initWithPass:(id)arg1 actions:(id)arg2 actionType:(unsigned long long)arg3 paymentDataProvider:(id)arg4 webService:(id)arg5 balanceDictionary:(id)arg6;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)selectActionViewDidSelectAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRightBarButtonEnabled:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
