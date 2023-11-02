
@interface MTRClusterWiFiNetworkDiagnostics : MTRCluster {
    MTRDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

- (void).cxx_destruct;
- (id)device;
- (unsigned short)endpoint;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeBSSIDWithParams:(id)arg1;
- (id)readAttributeBeaconLostCountWithParams:(id)arg1;
- (id)readAttributeBeaconRxCountWithParams:(id)arg1;
- (id)readAttributeBssidWithParams:(id)arg1;
- (id)readAttributeChannelNumberWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeCurrentMaxRateWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeOverrunCountWithParams:(id)arg1;
- (id)readAttributePacketMulticastRxCountWithParams:(id)arg1;
- (id)readAttributePacketMulticastTxCountWithParams:(id)arg1;
- (id)readAttributePacketUnicastRxCountWithParams:(id)arg1;
- (id)readAttributePacketUnicastTxCountWithParams:(id)arg1;
- (id)readAttributeRSSIWithParams:(id)arg1;
- (id)readAttributeRssiWithParams:(id)arg1;
- (id)readAttributeSecurityTypeWithParams:(id)arg1;
- (id)readAttributeWiFiVersionWithParams:(id)arg1;
- (void)resetCountsWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)resetCountsWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetCountsWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)resetCountsWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;

@end
