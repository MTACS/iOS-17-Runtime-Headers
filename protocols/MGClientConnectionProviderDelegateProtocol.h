
@protocol MGClientConnectionProviderDelegateProtocol <NSObject>

@optional

- (void)connectionProvider:(id <MGClientConnectionProviderProtocol>)arg1 serviceLost:(NSXPCConnection *)arg2;
- (void)connectionProviderServiceAvailable:(id <MGClientConnectionProviderProtocol>)arg1;

@end
