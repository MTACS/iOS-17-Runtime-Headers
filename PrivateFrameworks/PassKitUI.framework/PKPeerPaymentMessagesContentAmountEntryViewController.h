
@interface PKPeerPaymentMessagesContentAmountEntryViewController : PKPeerPaymentMessagesContentBaseViewController {
    PKCurrencyAmount * _amount;
    <PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate> * _delegate;
    PKPeerPaymentMessagesContentAmountEntryView * _mainView;
    bool  _showSendAndRequest;
    bool  _showSetupRecurringSend;
    unsigned long long  _sourceType;
    bool  _usesAccessibilityLayout;
}

@property (nonatomic, copy) PKCurrencyAmount *amount;
@property (nonatomic) <PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate> *delegate;
@property (nonatomic, readonly) PKPeerPaymentMessagesContentAmountEntryView *mainView;
@property (nonatomic) bool showSendAndRequest;
@property (nonatomic) bool showSetupRecurringSend;
@property (nonatomic) unsigned long long sourceType;

- (void).cxx_destruct;
- (id)_currentBalance;
- (bool)_isExpansionSupported;
- (bool)_isKeypadSupported;
- (id)_maximumTransferAmount;
- (id)_minimumTransferAmount;
- (void)_noteAmountChanged;
- (id)amount;
- (id)delegate;
- (id)init;
- (id)initWithMessagesAppController:(id)arg1;
- (id)mainView;
- (bool)pkui_navigationBarHidden;
- (struct { bool x1; long long x2; })pkui_navigationStatusBarStyleDescriptor;
- (void)reloadContent;
- (void)sendAnalyticsForAction:(unsigned long long)arg1;
- (void)setAmount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowSendAndRequest:(bool)arg1;
- (void)setShowSetupRecurringSend:(bool)arg1;
- (void)setSourceType:(unsigned long long)arg1;
- (bool)showSendAndRequest;
- (bool)showSetupRecurringSend;
- (unsigned long long)sourceType;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
