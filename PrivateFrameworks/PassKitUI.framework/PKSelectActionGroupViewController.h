
@interface PKSelectActionGroupViewController : UIViewController <PKRemoteActionGroupViewControllerDelegate, PKSelectActionGroupViewDelegate> {
    PKSelectActionGroupView * _actionGroupView;
    NSArray * _actionGroups;
    <PKSelectActionGroupViewControllerDelegate> * _delegate;
    PKPaymentPass * _pass;
    PKPerformActionPassView * _passView;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKPaymentPassActionGroup * _selectedActionGroup;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSelectActionGroupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_reloadActionGroupView;
- (void)_rightBarButtonPressed:(id)arg1;
- (id)delegate;
- (id)initWithPass:(id)arg1 actionGroups:(id)arg2 paymentDataProvider:(id)arg3 webService:(id)arg4;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)remoteGroupActionsViewControllerDidCancel:(id)arg1;
- (void)remoteGroupActionsViewControllerDidPerformFetchActionGroup:(id)arg1;
- (void)selectActionGroupViewDidSelectActionGroup:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRightBarButtonEnabled:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
