
@protocol AXDragEndpointRequestSatisfierDelegate <NSObject>

@required

- (NSXPCListenerEndpoint *)endpointForConnection:(NSXPCConnection *)arg1 forEndpointRequestSatisfier:(AXDragEndpointRequestSatisfier *)arg2;
- (void)endpointRequestSatisfierDidDisconnect:(AXDragEndpointRequestSatisfier *)arg1;

@end
