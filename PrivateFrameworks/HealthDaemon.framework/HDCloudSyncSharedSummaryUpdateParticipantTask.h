
@interface HDCloudSyncSharedSummaryUpdateParticipantTask : HDCloudSyncManagerPipelineTask {
    NSArray * _authorizationIdentifiersToAdd;
    NSArray * _authorizationIdentifiersToDelete;
    HDCodableSummarySharingEntry * _codableEntry;
}

- (void).cxx_destruct;
- (id)initWithManager:(id)arg1 context:(id)arg2 codableEntry:(id)arg3 authorizationIdentifiersToAdd:(id)arg4 authorizationIdentifiersToDelete:(id)arg5 accessibilityAssertion:(id)arg6 completion:(id /* block */)arg7;
- (id)pipelineForRepository:(id)arg1;

@end
