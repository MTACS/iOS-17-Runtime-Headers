
@protocol XPCClientConnectionDelegate <NSObject>

@required

- (void)XPCClientConnection:(XPCClientConnection *)arg1 didReceiveRequest:(XPCRequest *)arg2;

@end
