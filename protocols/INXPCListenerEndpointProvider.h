
@protocol INXPCListenerEndpointProvider

@required

- (NSXPCListenerEndpoint *)xpcListenerEndpointWithInterface:(NSXPCInterface *)arg1 object:(id)arg2;

@end
