
@protocol GCPlayerIndicatorXPCProxyServiceClient <_GCIPCServiceClient>

@required

- (<_GCIPCEndpointConnection> *)playerIndicatorXPCProxyServiceConnection;
- (<GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> *)playerIndicatorXPCProxyServiceRemoteServer;

@end
