
@protocol XPCNSClientConnectionDelegate <NSObject>

@required

- (void)XPCNSClientConnection:(XPCNSClientConnection *)arg1 didReceiveRequest:(XPCNSRequest *)arg2;

@end
