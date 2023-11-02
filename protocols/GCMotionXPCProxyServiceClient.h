
@protocol GCMotionXPCProxyServiceClient <_GCIPCServiceClient>

@required

- (<_GCIPCEndpointConnection> *)motionXPCProxyServiceConnection;
- (<GCMotionXPCProxyServiceRemoteServerInterface> *)motionXPCProxyServiceRemoteServer;

@end
