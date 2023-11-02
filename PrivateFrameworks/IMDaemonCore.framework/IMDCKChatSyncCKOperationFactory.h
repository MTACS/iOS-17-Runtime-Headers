
@interface IMDCKChatSyncCKOperationFactory : NSObject

- (id)_chatFetchRecordZoneChangesCKConfiguration:(id)arg1;
- (id)_chatFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3;
- (id)_chatSyncOperationGroup;
- (id)_chatSyncOperationGroupWithName:(id)arg1;
- (id)_chatWriteRecordsCKConfiguration:(id)arg1;
- (id)deleteChatCKOperationUsingRecordIDstoDelete:(id)arg1;
- (id)fetchChatCKOperationUsingRecordIDs:(id)arg1;
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 activity:(id)arg4;
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 groupName:(id)arg4 activity:(id)arg5;
- (id)saveChatsCKOperationUsingRecordsToSave:(id)arg1 activity:(id)arg2;

@end
