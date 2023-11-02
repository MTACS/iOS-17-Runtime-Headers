
@protocol GCAdaptiveTriggersXPCProxyServiceClient <_GCIPCServiceClient>

@required

- (<_GCIPCEndpointConnection> *)adaptiveTriggersXPCProxyServiceConnection;
- (<GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface> *)adaptiveTriggersXPCProxyServiceRemoteServer;

@end
