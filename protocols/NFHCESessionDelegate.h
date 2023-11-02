
@protocol NFHCESessionDelegate <NSObject>

@optional

- (void)hceSession:(NFHCESession *)arg1 didReceiveAPDU:(NSData *)arg2;
- (void)hceSession:(NFHCESession *)arg1 didReceiveField:(NFFieldNotification *)arg2;
- (void)hceSessionDidConnect:(NFHCESession *)arg1;
- (void)hceSessionDidDisconnect:(NFHCESession *)arg1;
- (void)hceSessionDidEndUnexpectedly:(NFHCESession *)arg1;

@end
