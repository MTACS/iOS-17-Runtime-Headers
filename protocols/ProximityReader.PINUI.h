
@protocol ProximityReader.PINUI

@required

- (void)closePINUI;
- (void)closePINUIImmediate;
- (void)errorInDaemonWithError:(long long)arg1;
- (void)notifyIncomingCall;
- (void)updateSessionEventWithSessionEvent:(long long)arg1;

@end
