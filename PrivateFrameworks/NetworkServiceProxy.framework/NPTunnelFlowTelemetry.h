
@interface NPTunnelFlowTelemetry : NPTunnelFlowHTTP

- (void)handleTunnelConnected;
- (id)initWithTunnel:(id)arg1 service:(id)arg2 postURL:(id)arg3;
- (bool)isBestEffort;
- (void)reportTelemetry:(id)arg1;

@end
