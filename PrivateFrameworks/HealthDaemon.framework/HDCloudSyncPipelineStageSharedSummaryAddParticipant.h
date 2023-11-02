
@interface HDCloudSyncPipelineStageSharedSummaryAddParticipant : HDCloudSyncPipelineStage {
    NSArray * _authorizationIdentifiers;
    HDCodableSummarySharingEntry * _codableEntry;
    CKUserIdentity * _participantIdentity;
    HDCloudSyncShareSetupMetadata * _shareSetupMetadata;
}

@property (readonly) CKUserIdentity *participantIdentity;
@property (readonly) HDCloudSyncShareSetupMetadata *shareSetupMetadata;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 codableEntry:(id)arg3 authorizationIdentifiers:(id)arg4;
- (void)main;
- (id)participantIdentity;
- (id)shareSetupMetadata;

@end
