
@protocol MGClientConnectionProviderProtocol <NSObject>

@required

- (<MGClientConnectionProviderDelegateProtocol> *)delegate;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (NSXPCConnection *)serviceConnection;
- (NSString *)serviceName;
- (void)setDelegate:(id <MGClientConnectionProviderDelegateProtocol>)arg1;

@end
