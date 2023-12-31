
@protocol NPTunnelDelegate <NSObject>

@required

- (bool)isFirstTunnel;
- (void)tunnel:(NPTunnel *)arg1 flowDidFallbackWithReason:(long long)arg2;
- (void)tunnelDidCancel:(NPTunnel *)arg1;
- (void)tunnelDidConnect:(NPTunnel *)arg1;
- (void)tunnelIsReady:(NPTunnel *)arg1;

@end
