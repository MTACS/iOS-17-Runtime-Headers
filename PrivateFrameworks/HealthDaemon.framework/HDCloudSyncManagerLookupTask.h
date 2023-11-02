
@interface HDCloudSyncManagerLookupTask : HDCloudSyncManagerPipelineTask {
    CKUserIdentityLookupInfo * _lookupInfo;
    HDCloudSyncPipelineStageLookupParticipant * _lookupStage;
}

@property (nonatomic, readonly, copy) CKShareParticipant *participant;

- (void).cxx_destruct;
- (id)initWithManager:(id)arg1 context:(id)arg2 lookupInfo:(id)arg3 accessibilityAssertion:(id)arg4 completion:(id /* block */)arg5;
- (id)participant;
- (id)pipelineForRepository:(id)arg1;

@end
