
@interface MTRClusterPumpConfigurationAndControl : MTRCluster {
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
- (id)readAttributeCapacityWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeControlModeWithParams:(id)arg1;
- (id)readAttributeEffectiveControlModeWithParams:(id)arg1;
- (id)readAttributeEffectiveOperationModeWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeLifetimeEnergyConsumedWithParams:(id)arg1;
- (id)readAttributeLifetimeRunningHoursWithParams:(id)arg1;
- (id)readAttributeMaxCompPressureWithParams:(id)arg1;
- (id)readAttributeMaxConstFlowWithParams:(id)arg1;
- (id)readAttributeMaxConstPressureWithParams:(id)arg1;
- (id)readAttributeMaxConstSpeedWithParams:(id)arg1;
- (id)readAttributeMaxConstTempWithParams:(id)arg1;
- (id)readAttributeMaxFlowWithParams:(id)arg1;
- (id)readAttributeMaxPressureWithParams:(id)arg1;
- (id)readAttributeMaxSpeedWithParams:(id)arg1;
- (id)readAttributeMinCompPressureWithParams:(id)arg1;
- (id)readAttributeMinConstFlowWithParams:(id)arg1;
- (id)readAttributeMinConstPressureWithParams:(id)arg1;
- (id)readAttributeMinConstSpeedWithParams:(id)arg1;
- (id)readAttributeMinConstTempWithParams:(id)arg1;
- (id)readAttributeOperationModeWithParams:(id)arg1;
- (id)readAttributePowerWithParams:(id)arg1;
- (id)readAttributePumpStatusWithParams:(id)arg1;
- (id)readAttributeSpeedWithParams:(id)arg1;
- (void)writeAttributeControlModeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeControlModeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeLifetimeEnergyConsumedWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeLifetimeEnergyConsumedWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeLifetimeRunningHoursWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeLifetimeRunningHoursWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;
- (void)writeAttributeOperationModeWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeOperationModeWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end
