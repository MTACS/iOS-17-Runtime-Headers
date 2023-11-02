
@interface HDCloudSyncLookupParticipantOperation : HDCloudSyncOperation {
    CKUserIdentityLookupInfo * _identityLookupInfo;
    CKShareParticipant * _participant;
}

@property (readonly) CKShareParticipant *participant;

- (void).cxx_destruct;
- (void)_unitTest_setParticipant:(id)arg1;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 identityLookupInfo:(id)arg3;
- (void)main;
- (id)participant;

@end
