
@protocol NSFileProviderServiceSource

@required

- (NSXPCListenerEndpoint *)makeListenerEndpointAndReturnError:(id*)arg1;
- (NSString *)serviceName;

@optional

- (bool)isRestricted;

@end
