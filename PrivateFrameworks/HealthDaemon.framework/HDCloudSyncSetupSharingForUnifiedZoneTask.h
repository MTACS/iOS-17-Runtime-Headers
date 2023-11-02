
@interface HDCloudSyncSetupSharingForUnifiedZoneTask : HDCloudSyncManagerPipelineTask {
    CKUserIdentityLookupInfo * _lookupInfo;
    bool  _requireExistingRelationship;
    NSNumber * _requireZoneDeviceMode;
    HDCloudSyncShareToParticipantOperation * _shareOperation;
}

@property (nonatomic, readonly, copy) HDCloudSyncShareSetupMetadata *shareSetupMetadata;

- (void).cxx_destruct;
- (id)initWithManager:(id)arg1 context:(id)arg2 lookupInfo:(id)arg3 requireExistingRelationship:(bool)arg4 requireZoneDeviceMode:(id)arg5 accessibilityAssertion:(id)arg6 completion:(id /* block */)arg7;
- (id)pipelineForRepository:(id)arg1;
- (id)shareSetupMetadata;

@end
