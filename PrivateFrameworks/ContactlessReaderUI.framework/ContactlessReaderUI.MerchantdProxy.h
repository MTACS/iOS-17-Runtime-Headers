
@interface ContactlessReaderUI.MerchantdProxy : _TtCs12_SwiftObject <ProximityReader.TransactionUI, ProximityReader.TransactionUIDelegate> {
    void pinUI;
    void proxyQueue;
    void remoteProxy;
    void tapUI;
}

- (void)closePINUI;
- (void)closePINUIImmediate;
- (void)closeUI;
- (void)closeUIImmediate;
- (void)errorInDaemonWithError:(long long)arg1;
- (void)notifyIncomingCall;
- (void)pinAuthNeeded;
- (void)pinAuthResultWithError:(id)arg1 cancelsFlow:(bool)arg2;
- (void)pinDataReceivedWithPinData:(id)arg1 isCardRequest:(bool)arg2 isAccessibilityEnabled:(bool)arg3 accessibilityEntryType:(long long)arg4 drawNumberFailures:(long long)arg5;
- (void)pinUIDidLoad;
- (void)pinValidateSession;
- (void)reportGuidanceUpdateWithVisible:(bool)arg1 trigger:(id)arg2;
- (void)reportPINErrorWithError:(long long)arg1 isCardRequest:(bool)arg2 isAccessibilityEnabled:(bool)arg3 accessibilityEntryType:(long long)arg4 drawNumberFailures:(long long)arg5;
- (void)reportProxEventInRange:(bool)arg1;
- (void)requiresCardPIN:(id)arg1;
- (void)setVoiceOverWithEnabled:(bool)arg1;
- (void)storeUILanguageForAnalyticsWithLanguage:(id)arg1;
- (void)tapUIDidLoad;
- (void)tapUIFinishedWithExpected:(bool)arg1;
- (void)tapUIRequestingCancel;
- (void)tapUIRequestingRetry;
- (void)updateSessionEventWithSessionEvent:(long long)arg1;
- (void)updateWithTransactionEvent:(long long)arg1;
- (void)vasReadSuccessWithMerchantNames:(id)arg1;

@end
