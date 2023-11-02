
@interface NEAgentPacketTunnelExtension : NEAgentTunnelExtension {
    long long  _interfaceType;
    bool  _isUserEthernetInterfaceCreated;
}

- (void)extension:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleExtensionStartedWithCompletionHandler:(id /* block */)arg1;
- (void)setAppUUIDMap:(id)arg1;

@end
