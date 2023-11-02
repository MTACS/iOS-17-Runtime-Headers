
@interface HMMTRSyncClusterThermostat : MTRClusterThermostat <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (id)readAttributeOccupiedHeatingOrCoolingSetpointWithParams:(id)arg1;
- (id)readAttributePluginActiveWithParams:(id)arg1;
- (id)readAttributePluginCurrentHeaterCoolerStateWithParams:(id)arg1;
- (id)readAttributePluginCurrentHeatingCoolingStateWithParams:(id)arg1;
- (id)readAttributePluginTargetHeaterCoolerStateWithParams:(id)arg1;
- (void)updatedValueForAttributeReport:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)updatedValuePluginActiveForAttributeReport:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)updatedValuePluginCurrentHeaterCoolerStateForAttributeReport:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)updatedValuePluginCurrentHeatingCoolingStateForAttributeReport:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)updatedValuePluginTargetHeaterCoolerStateForAttributeReport:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)writeAttributeOccupiedHeatingOrCoolingSetpointWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePluginActiveWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributePluginTargetHeaterCoolerStateWithValue:(id)arg1 expectedValueInterval:(id)arg2;

@end
