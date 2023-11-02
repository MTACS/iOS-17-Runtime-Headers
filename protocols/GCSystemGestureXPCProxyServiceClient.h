
@protocol GCSystemGestureXPCProxyServiceClient <_GCIPCServiceClient>

@required

- (<_GCIPCEndpointConnection> *)systemGestureXPCProxyServiceConnection;
- (<GCSystemGestureXPCProxyServiceRemoteServerInterface> *)systemGestureXPCProxyServiceRemoteServer;

@end
