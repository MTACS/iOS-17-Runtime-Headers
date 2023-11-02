
@protocol NMSSHSessionDelegate <NSObject>

@optional

- (void)session:(NMSSHSession *)arg1 didDisconnectWithError:(NSError *)arg2;
- (NSString *)session:(NMSSHSession *)arg1 keyboardInteractiveRequest:(NSString *)arg2;
- (bool)session:(NMSSHSession *)arg1 shouldConnectToHostWithFingerprint:(NSString *)arg2;

@end
