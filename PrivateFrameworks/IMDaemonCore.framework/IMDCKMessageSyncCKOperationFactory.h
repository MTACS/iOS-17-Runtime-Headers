
@interface IMDCKMessageSyncCKOperationFactory : NSObject

- (id)_fetchOptionsDictionaryWithFetchOptions:(id)arg1 andZoneID:(id)arg2;
- (id)_messageFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3;
- (id)_operationGroupWithName:(id)arg1;
- (id)deleteMessageCKOperationUsingRecordIDstoDelete:(id)arg1;
- (id)deleteRecoverableMessageCKOperationUsingRecordIDstoDelete:(id)arg1;
- (id)fetchArchivedRecordsOperationWithSyncToken:(id)arg1 zoneID:(id)arg2 activity:(id)arg3;
- (id)fetchMessageZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 operationGroupName:(id)arg4 activity:(id)arg5;
- (id)saveMessagesCKOperationUsingRecordsToSave:(id)arg1 operationGroupName:(id)arg2 activity:(id)arg3;

@end
