
@interface HDCloudSyncAddSharingParticipantOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSMutableArray * _clonedParticipants;
    NSDictionary * _invitationTokensByShareURL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CKShareParticipant * _ownerParticipant;
    CKShareParticipant * _participant;
    bool  _requireExistingRelationship;
    NSArray * _shareURLs;
    HDSynchronousTaskGroup * _taskGroup;
    NSArray * _zoneIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *invitationTokensByShareURL;
@property (nonatomic, readonly, copy) CKShareParticipant *ownerParticipant;
@property (retain) CKShareParticipant *participant;
@property bool requireExistingRelationship;
@property (nonatomic, readonly, copy) NSArray *shareURLs;
@property (readonly) Class superclass;
@property (copy) NSArray *zoneIdentifiers;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)invitationTokensByShareURL;
- (void)main;
- (id)ownerParticipant;
- (id)participant;
- (bool)requireExistingRelationship;
- (void)setParticipant:(id)arg1;
- (void)setRequireExistingRelationship:(bool)arg1;
- (void)setZoneIdentifiers:(id)arg1;
- (id)shareURLs;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;
- (id)zoneIdentifiers;

@end
