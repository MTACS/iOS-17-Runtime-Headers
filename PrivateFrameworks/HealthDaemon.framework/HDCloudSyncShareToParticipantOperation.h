
@interface HDCloudSyncShareToParticipantOperation : HDCloudSyncOperation {
    NSArray * _addedParticipants;
    NSNumber * _expectedDeviceMode;
    CKUserIdentityLookupInfo * _identityLookupInfo;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _ownerIdentifier;
    HDCloudSyncZone * _participantPushZone;
    bool  _requireExistingRelationship;
    HDCloudSyncShareSetupMetadata * _result;
    NSUUID * _storeIdentifier;
}

@property (readonly) HDCloudSyncShareSetupMetadata *result;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 identityLookupInfo:(id)arg3 requireExistingRelationship:(bool)arg4 requireZoneDeviceMode:(id)arg5;
- (void)main;
- (id)result;

@end
