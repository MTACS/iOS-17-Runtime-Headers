
@protocol MRProtocolClientConnectionDelegate <NSObject>

@optional

- (void)clientConnection:(MRProtocolClientConnection *)arg1 didReceiveMessage:(MRProtocolMessage *)arg2;
- (void)clientDidDisconnect:(MRProtocolClientConnection *)arg1 error:(NSError *)arg2;

@end
