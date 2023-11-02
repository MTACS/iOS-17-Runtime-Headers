
@interface HMDMRSetEndpointVolumeOperation : HMFOperation <HMFLogging, HMFObject> {
    <HMDMPCAssistantDiscovery> * _discovery;
    <HMDMRSetEndpointVolumeOperationExternalObjectInterface> * _externalObjectInterface;
    NSError * _partialExecutionError;
    NSArray * _routeIDs;
    NSNumber * _volume;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <HMDMPCAssistantDiscovery> *discovery;
@property (readonly) <HMDMRSetEndpointVolumeOperationExternalObjectInterface> *externalObjectInterface;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSError *partialExecutionError;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly, copy) NSArray *routeIDs;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *volume;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (bool)cancelOnSetup;
- (id)connectToEndpoint:(id)arg1 connection:(id)arg2;
- (id)description;
- (id)discoverRemoteControlEndpointsForUIDs:(id)arg1;
- (id)discovery;
- (id)externalObjectInterface;
- (void)generateOverallResultAndFinishWithDeviceStatuses:(id)arg1;
- (id)getVolumeCapabilitiesForEndpoint:(id)arg1 outputDeviceUID:(id)arg2;
- (id)initWithRouteIDs:(id)arg1 volume:(id)arg2;
- (id)initWithRouteIDs:(id)arg1 volume:(id)arg2 externalObjectInterface:(id)arg3;
- (void)main;
- (id)partialExecutionError;
- (id)privateDescription;
- (id)routeIDs;
- (void)setDiscovery:(id)arg1;
- (void)setPartialExecutionError:(id)arg1;
- (id)setVolumeOnEndpoint:(id)arg1 outputDeviceUID:(id)arg2;
- (id)shortDescription;
- (id)volume;

@end
