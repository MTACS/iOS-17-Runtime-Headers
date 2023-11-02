
@interface PKRemoteActionGroupViewController : UIViewController <PKPerformActionViewControllerDelegate, PKSelectActionGroupActionsViewDelegate> {
    PKPaymentPassActionGroup * _actionGroup;
    PKSelectActionGroupActionsView * _actionGroupActionView;
    <PKRemoteActionGroupViewControllerDelegate> * _delegate;
    PKPaymentPass * _pass;
    <PKPaymentDataProvider> * _paymentDataProvider;
    bool  _remoteContentFetched;
    PKPaymentPassAction * _selectedAction;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKRemoteActionGroupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_fetchRemoteContentIfNeeded;
- (void)_reloadActionGroupActionsView;
- (void)_rightBarButtonPressed:(id)arg1;
- (void)_showGenericErrorAlert:(id /* block */)arg1;
- (id)delegate;
- (id)initWithPass:(id)arg1 actionGroup:(id)arg2 paymentDataProvider:(id)arg3 webService:(id)arg4;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)selectActionGroupActionsViewDidSelectActionGroupAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRightBarButtonEnabled:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
