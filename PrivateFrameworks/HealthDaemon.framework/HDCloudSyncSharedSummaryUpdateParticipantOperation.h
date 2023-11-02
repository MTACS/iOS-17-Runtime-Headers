
@interface HDCloudSyncSharedSummaryUpdateParticipantOperation : HDCloudSyncOperation {
    NSArray * _authorizationIdentifiersToAdd;
    NSArray * _authorizationIdentifiersToDelete;
    HDCodableSummarySharingEntry * _entry;
}

@property (nonatomic, copy) HDCodableSummarySharingEntry *entry;

- (void).cxx_destruct;
- (bool)_containsOnlyCategoriesToAddWithError:(id*)arg1;
- (id)_createOrUpdateAuthorizationRecordInZone:(id)arg1 participantRecord:(id)arg2 error:(id*)arg3;
- (id)_createOrUpdateParticipantRecordInZone:(id)arg1 entry:(id)arg2 error:(id*)arg3;
- (id)entry;
- (id)initWithConfiguration:(id)arg1 codableEntry:(id)arg2 authorizationIdentifiersToAdd:(id)arg3 authorizationIdentifiersToDelete:(id)arg4;
- (void)main;
- (void)setEntry:(id)arg1;

@end
