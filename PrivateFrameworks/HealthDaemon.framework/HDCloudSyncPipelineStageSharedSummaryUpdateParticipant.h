
@interface HDCloudSyncPipelineStageSharedSummaryUpdateParticipant : HDCloudSyncPipelineStage {
    NSArray * _authorizationIdentifiersToAdd;
    NSArray * _authorizationIdentifiersToDelete;
    HDCodableSummarySharingEntry * _codableEntry;
}

- (void).cxx_destruct;
- (id)initWithSummarySharingEntry:(id)arg1 configuration:(id)arg2;
- (id)initWithSummarySharingEntry:(id)arg1 configuration:(id)arg2 authorizationIdentifiersToAdd:(id)arg3 authorizationIdentifiersToDelete:(id)arg4;
- (void)main;

@end
