
@interface HDCloudSyncSharedSummarySynchronizeParticipantsOperation : HDCloudSyncOperation {
    HDCloudSyncCachedZone * _privateMetadataZone;
    NSMutableArray * _updatedAutorizationRecords;
    NSMutableArray * _updatedLocalEntries;
    NSMutableSet * _updatedParticipantRecordIDs;
}

- (void).cxx_destruct;
- (id)_authorizationRecordForParticipant:(id)arg1 error:(id*)arg2;
- (bool)_createProfileIfNecessaryForParticipant:(id)arg1 error:(id*)arg2;
- (bool)_createProfileIfNecessaryForSharingEntry:(id)arg1 error:(id*)arg2;
- (bool)_createProfileWithUUID:(id)arg1 contactIdentifier:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ownerParticipant:(id)arg5 error:(id*)arg6;
- (bool)_deleteLocalProfileIfNecessaryForParticipant:(id)arg1 error:(id*)arg2;
- (bool)_deleteProfilesForInactiveParticipants:(id)arg1 error:(id*)arg2;
- (id)_filterEntries:(id)arg1 active:(bool)arg2;
- (bool)_mergeLocalAndCloudParticipant:(id)arg1 error:(id*)arg2;
- (bool)_mergeLocalAndCloudParticipants:(id)arg1 error:(id*)arg2;
- (void)main;

@end
