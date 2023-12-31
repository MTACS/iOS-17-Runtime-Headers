
@interface WFStubInterface : WFInterface {
    WFNetworkScanRecord * _currentNetwork;
    bool  _currentNetworkIsDirected;
    bool  _hasNoGatewayIP;
    bool  _ipv4SelfAssigned;
}

@property bool currentNetworkIsDirected;
@property bool hasNoGatewayIP;
@property bool ipv4SelfAssigned;

- (void).cxx_destruct;
- (id)currentNetwork;
- (bool)currentNetworkIsDirected;
- (bool)hasNoGatewayIP;
- (id)interfaceName;
- (bool)ipv4SelfAssigned;
- (void)setCurrentNetwork:(id)arg1;
- (void)setCurrentNetworkIsDirected:(bool)arg1;
- (void)setHasNoGatewayIP:(bool)arg1;
- (void)setIpv4SelfAssigned:(bool)arg1;

@end
