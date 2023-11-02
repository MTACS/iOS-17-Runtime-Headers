
@interface HMMTRDescriptorClusterManager : HMFObject

+ (id)logCategory;
+ (id)sharedManager;

- (id)_buildClustersInUseDictWithClustersInUse:(id)arg1;
- (void)_populateAttributeValuesForClusterClassName:(id)arg1 clusterClassFeatureMap:(id)arg2 endpoint:(id)arg3 device:(id)arg4 deviceTopology:(id)arg5 callbackQueue:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)_queryEndpointsForClusterID:(id)arg1 endpoints:(id)arg2 device:(id)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_queryFeatureMapFromClusterAtCHIPEndpoint:(id)arg1 device:(id)arg2 callbackQueue:(id)arg3 clusterClassName:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_removeDisabledCharacteristicsFromServiceDescription:(id)arg1 endpoint:(id)arg2 topology:(id)arg3;
- (void)_runBlockForAllEndpointsWithClusterID:(id)arg1 endpoints:(id)arg2 device:(id)arg3 callbackQueue:(id)arg4 finishedRunningAllBlocksPromise:(id)arg5 block:(id /* block */)arg6;
- (void)_updateOTARequestorEndpointsInTopology:(id)arg1 device:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_verifyHAPCharacteristicSupportAtCHIPEndpoint:(id)arg1 device:(id)arg2 endpointDeviceTypes:(id)arg3 callbackQueue:(id)arg4 clusterClassToQueryForFeatureMap:(id)arg5 hapServicesToCheckForFeatureMap:(id)arg6 hapServicesInUse:(id)arg7 deviceTopology:(id)arg8 bridgeAggregateNodeEndpoint:(id)arg9 server:(id)arg10 lastError:(id)arg11 completionHandler:(id /* block */)arg12;
- (void)endpointForClusterID:(id)arg1 device:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchDeviceTypesForDevice:(id)arg1 atEndpoint:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchDeviceTypesForEndpoints:(id)arg1 device:(id)arg2 endpointDeviceTypes:(id)arg3 lastError:(id)arg4 callbackQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)fetchEndpointsForDevice:(id)arg1 endpointID:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchHAPCategoryForCHIPDevice:(id)arg1 nodeId:(id)arg2 server:(id)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchHAPServicesAtCHIPEndpoint:(id)arg1 deviceTopology:(id)arg2 endpointDeviceTypes:(id)arg3 accessoryInfo:(id)arg4 hapToCHIPClusterMappingArray:(id)arg5 device:(id)arg6 isBridge:(bool)arg7 bridgeAggregateNodeEndpoint:(id)arg8 isComposedDevice:(bool)arg9 server:(id)arg10 callbackQueue:(id)arg11 completionHandler:(id /* block */)arg12;
- (void)fetchHAPServicesForCHIPDevice:(id)arg1 nodeId:(id)arg2 server:(id)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchHAPServicesForEndpoints:(id)arg1 endpointDeviceTypes:(id)arg2 device:(id)arg3 nodeId:(id)arg4 isBridge:(bool)arg5 bridgeAggregateNodeEndpoint:(id)arg6 server:(id)arg7 topology:(id)arg8 hapAccessoryInfo:(id)arg9 callbackQueue:(id)arg10 completionHandler:(id /* block */)arg11;
- (id)getBridgeEndpointsDeviceTypes:(id)arg1 endpointDeviceTypes:(id)arg2;
- (id)hapServiceDescriptionForServiceType:(id)arg1 clustersInUse:(id)arg2 endpoint:(id)arg3 name:(id)arg4 hapToCHIPClusterMappingArray:(id)arg5 clusterClassToQueryForFeatureMap:(id)arg6 hapServicesToCheckForFeatureMap:(id)arg7 server:(id)arg8;
- (id)hapServiceDescriptionsForTopology:(id)arg1 namesDictionary:(id)arg2 server:(id)arg3;
- (id)runBlockForAllEndpointsWithClusterID:(id)arg1 device:(id)arg2 callbackQueue:(id)arg3 block:(id /* block */)arg4;

@end
