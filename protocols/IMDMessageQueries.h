
@protocol IMDMessageQueries <NSObject>

@required

- (void)clearRecoverableMessageTombStones;
- (void)deleteJunkMessagesOlderThanDays:(long long)arg1;
- (void)deleteRecoverableMessagesOlderThanDays:(long long)arg1;
- (void)fetchLastMessageRecordForChatRecordWithRowID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IMDMessageRecord *, void*
- (void)fetchMessageRecordWithGUID:(void *)arg1 excludeRecoverableMessages:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IMDMessageRecord *, void*
- (void)fetchMessageRecordsFilteredUsingPredicate:(void *)arg1 sortedUsingDescriptors:(void *)arg2 limit:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSPredicate *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchMessageRecordsForChatRecordWithGUID:(void *)arg1 filteredUsingPredicate:(void *)arg2 sortedUsingDescriptors:(void *)arg3 limit:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSPredicate *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)moveMessageRecordsToRecoveryForMessageGUIDs:(NSArray *)arg1 deleteDate:(NSDate *)arg2;
- (void)permanentlyDeleteRecoverableMessagesInChatsWithGUIDs:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (NSArray *)recoverableMessagesMetadataPendingCloudKitDeleteWithLimit:(long long)arg1;
- (NSArray *)recoverableMessagesMetadataPendingCloudKitSaveWithLimit:(long long)arg1;
- (void)storeRecoverableMessagePartWithBody:(NSAttributedString *)arg1 forMessageWithGUID:(NSString *)arg2 deleteDate:(NSDate *)arg3;
- (void)updateAttachmentSyndicationRanges:(NSString *)arg1 shouldHideFromSyndication:(bool)arg2;
- (void)updateMessageSyndicationRanges:(NSString *)arg1 shouldHideFromSyndication:(bool)arg2;
- (void)updateMessagesSyncStatusTo:(long long)arg1 forGUIDs:(NSArray *)arg2;
- (void)updateMessagesSyncedSyndicationRangesForGUIDs:(NSArray *)arg1 toStatus:(long long)arg2;
- (void)updateRecoverableMessageSyncState:(long long)arg1 forMessageGUIDs:(NSArray *)arg2;
- (void)updateRecoverableMessageSyncState:(long long)arg1 forMessageRowID:(long long)arg2 onPartIndex:(long long)arg3;

@end
