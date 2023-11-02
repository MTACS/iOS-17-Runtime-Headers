
@interface HDCloudSyncSharedSummaryRevokeParticipantOperation : HDCloudSyncOperation {
    HDCodableSummarySharingEntry * _codableEntry;
}

- (void).cxx_destruct;
- (id)_deleteZonesOperationForParticipant:(id)arg1 error:(id*)arg2;
- (id)_updatedParticipantRecordInZone:(id)arg1 entry:(id)arg2 error:(id*)arg3;
- (id)initWithConfiguration:(id)arg1 codableEntry:(id)arg2;
- (void)main;

@end
