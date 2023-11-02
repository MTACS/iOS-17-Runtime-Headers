
@protocol GCBatteryXPCProxyServiceClient <_GCIPCServiceClient>

@required

- (<_GCIPCEndpointConnection> *)batteryXPCProxyServiceConnection;
- (<GCBatteryXPCProxyServiceRemoteServerInterface> *)batteryXPCProxyServiceRemoteServer;

@end
