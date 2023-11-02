
@protocol GCSettingsXPCProxyServiceClient <_GCIPCServiceClient>

@required

- (<_GCIPCEndpointConnection> *)settingsXPCProxyServiceConnection;
- (<GCSettingsXPCProxyServiceRemoteServerInterface> *)settingsXPCProxyServiceRemoteServer;

@end
