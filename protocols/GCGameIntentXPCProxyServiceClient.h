
@protocol GCGameIntentXPCProxyServiceClient <_GCIPCServiceClient>

@required

- (<_GCIPCEndpointConnection> *)gameIntentXPCProxyServiceConnection;
- (<GCGameIntentXPCProxyServiceRemoteServerInterface> *)gameIntentXPCProxyServiceRemoteServer;

@end
