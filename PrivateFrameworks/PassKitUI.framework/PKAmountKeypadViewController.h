
@interface PKAmountKeypadViewController : UIViewController <PKPaymentSetupDelegate, PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate, PKPeerPaymentRecurringPaymentDetailViewControllerDelegate> {
    PKPeerPaymentMessagesContentAmountEntryViewController * _amountEntryViewController;
    PKAvatarView * _avatarView;
    UIView * _containerView;
    PKFamilyMemberCollection * _familyCollection;
    UIBarButtonItem * _nextButton;
    CNComposeRecipient * _recipient;
    PKPeerPaymentRecurringPayment * _recurringPayment;
    PKPeerPaymentRemoteMessagesComposer * _remoteMessagesComposer;
    long long  _sendFlowType;
    bool  _showCancelButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showCancelButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonPressed;
- (id)_composeRecipientForAddress:(id)arg1;
- (void)_configureAvatarView;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 paymentSetupMode:(long long)arg2;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (id)_peerPaymentController;
- (void)_presentRecurringDetailViewController;
- (id)currentBalance;
- (void)dealloc;
- (void)handleAction:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)initWithRemoteMessagesComposer:(id)arg1 recipient:(id)arg2 sendFlowType:(long long)arg3 familyCollection:(id)arg4;
- (id)initWithRemoteMessagesComposer:(id)arg1 recipientAddress:(id)arg2 sendFlowType:(long long)arg3 familyCollection:(id)arg4;
- (void)loadView;
- (id)maximumTransferAmount;
- (id)minimumTransferAmount;
- (void)paymentSetupDidFinish:(id)arg1;
- (double)percentExpanded;
- (struct { bool x1; long long x2; })pkui_navigationStatusBarStyleDescriptor;
- (void)recurringPaymentDetailViewControllerDidDisappearWithRecurringPayment:(id)arg1;
- (void)setRecurringPeerPayment:(id)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setUpContainerView;
- (void)setUpNavigationBar;
- (bool)showCancelButton;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
