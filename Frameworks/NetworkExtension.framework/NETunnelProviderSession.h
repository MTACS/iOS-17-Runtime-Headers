
@interface NETunnelProviderSession : NEVPNConnection

- (bool)sendProviderMessage:(id)arg1 returnError:(id*)arg2 responseHandler:(id /* block */)arg3;
- (bool)startTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2;
- (void)stopTunnel;

@end
