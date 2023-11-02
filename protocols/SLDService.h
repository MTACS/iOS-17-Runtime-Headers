
@protocol SLDService <NSObject>

@required

+ (Protocol *)remoteObjectProtocol;
+ (<SLDService> *)sharedService;

@optional

+ (void)setupInterface:(NSXPCInterface *)arg1;

- (bool)allowsConnection:(NSXPCConnection *)arg1;
- (void)lostConnection:(NSXPCConnection *)arg1;
- (void)receivedConnection:(NSXPCConnection *)arg1;

@end
