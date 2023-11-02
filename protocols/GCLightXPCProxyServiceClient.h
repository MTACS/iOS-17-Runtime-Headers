
@protocol GCLightXPCProxyServiceClient <_GCIPCServiceClient>

@required

- (<_GCIPCEndpointConnection> *)lightXPCProxyServiceConnection;
- (<GCLightXPCProxyServiceRemoteServerInterface> *)lightXPCProxyServiceRemoteServer;

@end
