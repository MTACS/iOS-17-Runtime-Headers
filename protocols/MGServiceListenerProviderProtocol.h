
@protocol MGServiceListenerProviderProtocol <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (NSString *)entitlement;
- (NSXPCListener *)serviceListener;
- (NSString *)serviceName;
- (bool)serviceShouldAcceptNewConnection:(NSXPCConnection *)arg1;

@end
