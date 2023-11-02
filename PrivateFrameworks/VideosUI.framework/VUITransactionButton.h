
@interface VUITransactionButton : VUIButton {
    bool  _monitorTransaction;
    VUICircularProgress * _progressIndicator;
    NSString * _textContentTitleBackup;
    NSString * _transactionID;
    bool  _waitingForTransactionToStart;
}

@property (nonatomic) bool monitorTransaction;
@property (nonatomic, retain) VUICircularProgress *progressIndicator;
@property (nonatomic, copy) NSString *textContentTitleBackup;
@property (nonatomic, copy) NSString *transactionID;
@property (getter=isWaitingForTransactionToStart, nonatomic) bool waitingForTransactionToStart;

- (void).cxx_destruct;
- (void)_addProgressIndicatorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_buttonTapped:(id)arg1 eventName:(id)arg2;
- (id)_carouselView;
- (void)_handleTransactionDidFinishNotification:(id)arg1;
- (void)_handleTransactionDidStartNotification:(id)arg1;
- (void)_layoutProgressIndicatorIfNeeded;
- (void)_registerForTransactionNotification;
- (void)_startListeningForTransactionWithTransactionID:(id)arg1;
- (void)_unregisterTransactionNotifications;
- (void)_updateProgressIndicatorTintColor:(id)arg1;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 interfaceStyle:(unsigned long long)arg2;
- (bool)isWaitingForTransactionToStart;
- (bool)monitorTransaction;
- (id)progressIndicator;
- (void)setMonitorTransaction:(bool)arg1;
- (void)setProgressIndicator:(id)arg1;
- (void)setTextContentTitleBackup:(id)arg1;
- (void)setTransactionID:(id)arg1;
- (void)setWaitingForTransactionToStart:(bool)arg1;
- (id)textContentTitleBackup;
- (id)transactionID;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
