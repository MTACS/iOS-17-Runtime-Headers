
@interface HMDCameraClipAddSignificantEventOperation : HMDCameraClipAddModelsOperation <HMBLocalZoneMirrorOutputObserver> {
    NSDictionary * _homePresenceByPairingIdentity;
    HMDCameraRecordingSessionSignificantEvent * _significantEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *homePresenceByPairingIdentity;
@property (readonly, copy) HMDCameraRecordingSessionSignificantEvent *significantEvent;
@property (readonly) Class superclass;

+ (unsigned long long)cameraClipOperationType;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)homePresenceByPairingIdentity;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 dataSource:(id)arg5;
- (id)modelsToAdd;
- (id)significantEvent;
- (void)updateMirrorOutputModel:(id)arg1;

@end
