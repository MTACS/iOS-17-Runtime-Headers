
@protocol GCAdaptiveTriggersXPCProxyServerEndpointDelegate

@required

- (void)adaptiveTriggersXPCProxyServerEndpoint:(GCAdaptiveTriggersXPCProxyServerEndpoint *)arg1 didReceiveAdaptiveTriggersChange:(GCDeviceAdaptiveTriggersPayload *)arg2 forIndex:(int)arg3;

@end
