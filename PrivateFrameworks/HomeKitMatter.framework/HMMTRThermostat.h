
@interface HMMTRThermostat : MTRBaseClusterThermostat <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void)readAttributeOccupiedHeatingOrCoolingSetpointWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributePluginActiveWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributePluginCurrentHeaterCoolerStateWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributePluginCurrentHeatingCoolingStateWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributePluginTargetHeaterCoolerStateWithCompletionHandler:(id /* block */)arg1;
- (void)updatedValueForAttributeReport:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)updatedValuePluginActiveForAttributeReport:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)updatedValuePluginCurrentHeaterCoolerStateForAttributeReport:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)updatedValuePluginCurrentHeatingCoolingStateForAttributeReport:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)updatedValuePluginTargetHeaterCoolerStateForAttributeReport:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)writeAttributeOccupiedHeatingOrCoolingSetpointWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributePluginActiveWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributePluginTargetHeaterCoolerStateWithValue:(id)arg1 completionHandler:(id /* block */)arg2;

@end
