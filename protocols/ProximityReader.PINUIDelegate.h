
@protocol ProximityReader.PINUIDelegate

@required

- (void)pinAuthNeeded;
- (void)pinAuthResultWithError:(NSString *)arg1 cancelsFlow:(bool)arg2;
- (void)pinDataReceivedWithPinData:(_TtC15ProximityReader7PINData *)arg1 isCardRequest:(bool)arg2 isAccessibilityEnabled:(bool)arg3 accessibilityEntryType:(long long)arg4 drawNumberFailures:(long long)arg5;
- (void)pinUIDidLoad;
- (void)pinValidateSession;
- (void)reportPINErrorWithError:(long long)arg1 isCardRequest:(bool)arg2 isAccessibilityEnabled:(bool)arg3 accessibilityEntryType:(long long)arg4 drawNumberFailures:(long long)arg5;
- (void)setVoiceOverWithEnabled:(bool)arg1;

@end
