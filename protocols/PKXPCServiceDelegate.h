
@protocol PKXPCServiceDelegate <NSObject>

@required

- (void)remoteService:(PKXPCService *)arg1 didEstablishConnection:(NSXPCConnection *)arg2;
- (void)remoteService:(PKXPCService *)arg1 didInterruptConnection:(NSXPCConnection *)arg2;

@optional

- (void)remoteServiceDidResume:(PKXPCService *)arg1;
- (void)remoteServiceDidSuspend:(PKXPCService *)arg1;

@end
