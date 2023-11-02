
@interface ContactlessReaderUI.WeakTapUI : _TtCs12_SwiftObject <ProximityReader.TransactionUI> {
    void ui;
}

- (void)closePINUI;
- (void)closePINUIImmediate;
- (void)closeUI;
- (void)closeUIImmediate;
- (void)errorInDaemonWithError:(long long)arg1;
- (void)notifyIncomingCall;
- (void)requiresCardPIN:(id)arg1;
- (void)updateSessionEventWithSessionEvent:(long long)arg1;
- (void)updateWithTransactionEvent:(long long)arg1;
- (void)vasReadSuccessWithMerchantNames:(id)arg1;

@end
