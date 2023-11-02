
@interface HDCloudSyncSharedSummarySetupTask : HDCloudSyncManagerPipelineTask {
    HDCloudSyncPipelineStageSharedSummaryAddParticipant * _addParticipantStage;
    NSArray * _authorizationIdentifiers;
    HDCodableSummarySharingEntry * _codableEntry;
}

@property (nonatomic, readonly, copy) CKUserIdentity *participantIdentity;
@property (nonatomic, readonly, copy) HDCloudSyncShareSetupMetadata *shareSetupMetadata;

- (void).cxx_destruct;
- (id)initWithManager:(id)arg1 context:(id)arg2 codableEntry:(id)arg3 authorizationIdentifiers:(id)arg4 accessibilityAssertion:(id)arg5 completion:(id /* block */)arg6;
- (id)participantIdentity;
- (id)pipelineForRepository:(id)arg1;
- (id)shareSetupMetadata;

@end
