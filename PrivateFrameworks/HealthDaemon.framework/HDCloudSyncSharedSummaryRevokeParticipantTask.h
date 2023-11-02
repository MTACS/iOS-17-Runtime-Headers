
@interface HDCloudSyncSharedSummaryRevokeParticipantTask : HDCloudSyncManagerPipelineTask {
    HDCodableSummarySharingEntry * _codableEntry;
}

- (void).cxx_destruct;
- (id)initWithManager:(id)arg1 context:(id)arg2 codableEntry:(id)arg3 accessibilityAssertion:(id)arg4 completion:(id /* block */)arg5;
- (id)pipelineForRepository:(id)arg1;

@end
