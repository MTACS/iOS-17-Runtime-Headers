
@interface IMDCKAttachmentSyncCKOperationFactory : NSObject

+ (id)_desiredKeysArrayForType:(long long)arg1;

- (id)_attachmentFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4;
- (bool)_defaultsSayWeHaveSyncedOnce;
- (id)_operationGroupWithName:(id)arg1;
- (id)deleteAttachmentCKOperationUsingRecordIDstoDelete:(id)arg1;
- (id)fetchAttachmentZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4 operationGroupName:(id)arg5 activity:(id)arg6;
- (id)fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 operationGroupName:(id)arg3 activity:(id)arg4;
- (id)saveAttachmentsCKOperationUsingRecordsToSave:(id)arg1 operationGroupName:(id)arg2 activity:(id)arg3;

@end
