
@interface HMMTRHAPEnumerator : HMFObject {
    NSDictionary * _clusterIDCharacteristicMap;
}

@property (nonatomic, retain) NSDictionary *clusterIDCharacteristicMap;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_createBridgedHAPAccessoryWithServer:(id)arg1 services:(id)arg2 instanceId:(id)arg3 endpointID:(id)arg4;
- (void)_createHAPServicesFromServiceDescriptions:(id)arg1 topology:(id)arg2 nodeID:(id)arg3 accessoryEndpointID:(id)arg4 services:(out id)arg5 startingServiceInstanceID:(inout long long*)arg6 primaryAccessory:(id)arg7;
- (id)clusterIDCharacteristicMap;
- (id)enumerateBridgedAccessoriesFromAccessories:(id)arg1 serviceDescriptionsDictionary:(id)arg2 namesDictionary:(id)arg3 topology:(id)arg4 server:(id)arg5 legacyInstanceIDAssignment:(bool)arg6;
- (id)enumerateServicesFromServices:(id)arg1 serviceDescriptionsDictionary:(id)arg2 topology:(id)arg3 nodeID:(id)arg4 primaryAccessory:(id)arg5 legacyInstanceIDAssignment:(bool)arg6;
- (id)initWithClusterIDCharacteristicMap:(id)arg1;
- (void)setClusterIDCharacteristicMap:(id)arg1;

@end
