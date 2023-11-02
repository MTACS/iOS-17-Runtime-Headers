
@protocol BYBuddyDaemonProximityTargetProtocol <NSObject>

@required

- (void)dismissProximityPinCode;
- (void)displayProximityPinCode:(NSString *)arg1 visual:(bool)arg2;
- (void)proximityConnectionInitiated;
- (void)proximityConnectionPreparing:(CUMessageSession *)arg1;
- (void)proximityConnectionReconnected;
- (void)proximityConnectionTerminated;
- (void)proximitySetupCompleted:(NSError *)arg1;
- (void)receivedLanguages:(NSArray *)arg1 locale:(NSString *)arg2 model:(NSString *)arg3 deviceClass:(NSString *)arg4 accessibilitySettings:(NSData *)arg5;

@end
