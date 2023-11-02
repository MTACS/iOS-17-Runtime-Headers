
@protocol COServiceListenerProvider <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (NSXPCListener *)serviceListener;

@optional

- (bool)serviceShouldAcceptNewConnection:(NSXPCConnection *)arg1;

@end
