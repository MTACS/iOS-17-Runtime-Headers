
@protocol MFIMAPConnectionDelegate <NSObject>

@optional

- (void)connection:(MFIMAPConnection *)arg1 didReceiveResponse:(MFIMAPResponse *)arg2 forCommand:(_MFIMAPCommandParameters *)arg3;
- (bool)connection:(MFIMAPConnection *)arg1 shouldHandleUntaggedResponse:(MFIMAPResponse *)arg2 forCommand:(_MFIMAPCommandParameters *)arg3;
- (void)connectionDidDisconnect:(MFIMAPConnection *)arg1;
- (void)setHighestModSequence:(unsigned long long)arg1;
- (void)setServerMessageCount:(unsigned long long)arg1;
- (bool)shouldStartIdleForConnection:(MFIMAPConnection *)arg1;
- (void)willRemoveDelegation:(MFIMAPConnection *)arg1;

@end
