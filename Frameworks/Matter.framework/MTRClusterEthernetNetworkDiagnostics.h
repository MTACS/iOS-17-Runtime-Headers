
@interface MTRClusterEthernetNetworkDiagnostics : MTRCluster {
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
- (id)readAttributeCarrierDetectWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeCollisionCountWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeFullDuplexWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeOverrunCountWithParams:(id)arg1;
- (id)readAttributePHYRateWithParams:(id)arg1;
- (id)readAttributePacketRxCountWithParams:(id)arg1;
- (id)readAttributePacketTxCountWithParams:(id)arg1;
- (id)readAttributeTimeSinceResetWithParams:(id)arg1;
- (id)readAttributeTxErrCountWithParams:(id)arg1;
- (void)resetCountsWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)resetCountsWithExpectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetCountsWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)resetCountsWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;

@end
