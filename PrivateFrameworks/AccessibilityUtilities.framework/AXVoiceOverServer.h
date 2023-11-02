
@interface AXVoiceOverServer : AXServer

@property (getter=isScreenCurtainEnabled, nonatomic, readonly) bool isScreenCurtainEnabled;

+ (id)server;

- (bool)_connectIfNecessary;
- (id)_serviceName;
- (void)clearLastSoundsPlayed:(id /* block */)arg1;
- (void)clearLastSpokenPhrases:(id /* block */)arg1;
- (id)currentFocusedElement;
- (id)currentRotorName;
- (bool)isBluetoothBrailleDisplayConnected;
- (bool)isBrailleInputUIShowing;
- (bool)isHandwritingInputUIShowing;
- (bool)isScreenCurtainEnabled;
- (id)lastScreenChange;
- (id)lastSoundsPlayed;
- (id)lastSpokenContents;
- (id)lastSpokenPhrases;
- (void)performAutomationTestingCommand:(id)arg1 userInfo:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
- (bool)triggerCommand:(long long)arg1;
- (bool)triggerCommand:(long long)arg1 withArgument:(id)arg2;
- (bool)triggerEventCommand:(id)arg1;
- (bool)triggerGesture:(id)arg1;

@end
