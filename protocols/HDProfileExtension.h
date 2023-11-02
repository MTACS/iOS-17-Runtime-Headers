
@protocol HDProfileExtension <NSObject>

@optional

- (NSXPCListenerEndpoint *)listenerEndpointForClient:(HDXPCClient *)arg1 error:(id*)arg2;
- (void)prepareForObliteration;

@end
