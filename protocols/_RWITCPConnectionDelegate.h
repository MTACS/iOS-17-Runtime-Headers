
@protocol _RWITCPConnectionDelegate <NSObject>

@optional

- (void)tcpConnection:(_RWITCPConnection *)arg1 didReceiveMessage:(NSData *)arg2;
- (void)tcpConnectionDidClose:(_RWITCPConnection *)arg1;

@end
