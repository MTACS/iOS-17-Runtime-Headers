
@interface MTRClusterGeneralDiagnostics : MTRCluster {
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
- (id)readAttributeActiveHardwareFaultsWithParams:(id)arg1;
- (id)readAttributeActiveNetworkFaultsWithParams:(id)arg1;
- (id)readAttributeActiveRadioFaultsWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeBootReasonWithParams:(id)arg1;
- (id)readAttributeBootReasonsWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeNetworkInterfacesWithParams:(id)arg1;
- (id)readAttributeRebootCountWithParams:(id)arg1;
- (id)readAttributeTestEventTriggersEnabledWithParams:(id)arg1;
- (id)readAttributeTotalOperationalHoursWithParams:(id)arg1;
- (id)readAttributeUpTimeWithParams:(id)arg1;
- (void)testEventTriggerWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)testEventTriggerWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;

@end
