
@protocol NSXPCStoreServerEndpointFactory <NSObject>

@required

- (NSXPCListenerEndpoint *)newEndpoint;

@optional

- (NSXPCListenerEndpoint *)newEndpointWithError:(id*)arg1;

@end
