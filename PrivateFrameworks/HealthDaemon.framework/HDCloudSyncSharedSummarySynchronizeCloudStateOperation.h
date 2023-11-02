
@interface HDCloudSyncSharedSummarySynchronizeCloudStateOperation : HDCloudSyncOperation {
    NSArray * _participantRecords;
    NSDictionary * _participantRecordsByUUID;
    HDCloudSyncCachedZone * _privateMetadataZone;
    NSMutableSet * _sharesToDelete;
    NSMutableSet * _updatedParticipantRecordIDs;
}

- (void).cxx_destruct;
- (id)_currentZoneStateForParticipant:(id)arg1 zone:(id)arg2 error:(id*)arg3;
- (id)_deleteInvalidZonesOperationWithError:(id*)arg1;
- (bool)_isActiveParticipant:(id)arg1;
- (id)_removeInvalidSharesOperationWithError:(id*)arg1;
- (bool)_updateOwnerParticipantForParticipantRecord:(id)arg1 zone:(id)arg2 error:(id*)arg3;
- (bool)_updateShareForAllNonOwnerParticipantsInZone:(id)arg1 error:(id*)arg2;
- (bool)_validateCloudStateForParticipantRecord:(id)arg1 error:(id*)arg2;
- (bool)_validateParticipantRecordCloudStateWithError:(id*)arg1;
- (id)_zoneIdentifierForParticipant:(id)arg1;
- (id)_zonesForParticipant:(id)arg1 error:(id*)arg2;
- (void)main;

@end
