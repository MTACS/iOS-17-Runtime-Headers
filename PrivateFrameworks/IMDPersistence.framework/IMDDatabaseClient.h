
@interface IMDDatabaseClient : IMDDatabaseLegacyXPCBridge <IMDRemoteDatabaseProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_fetchMessageRecordsForChatRecordWithGUID:(id)arg1 filteredUsingPredicate:(id)arg2 sortedUsingDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)_sendAsyncXPCMessage:(id)arg1 action:(long long)arg2 responseHandler:(id /* block */)arg3;
- (void)_sendSyncXPCMessage:(id)arg1 action:(long long)arg2 responseHandler:(id /* block */)arg3;
- (id)chatRecordsFilteredByPredicate:(id)arg1;
- (id)chatRecordsWithHandles:(id)arg1 serviceName:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5;
- (id)chatRecordsWithIdentifier:(id)arg1;
- (void)clearRecoverableMessageTombStones;
- (void)coreSpotlightDeleteAttachmentGUIDs:(id)arg1;
- (void)deleteAttachmentsDirectWithPredicate:(id)arg1;
- (void)deleteJunkMessagesOlderThanDays:(long long)arg1;
- (void)deleteRecoverableMessagesOlderThanDays:(long long)arg1;
- (void)fetchAttachmentRecordsFilteredUsingPredicate:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)arg1 sortedUsingDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)arg1 sortedUsingLastMessageDateAscending:(bool)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)arg1 sortedUsingLastMessageDateAscending:(bool)arg2 olderThan:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchChatRecordsWithAtLeastHandles:(id)arg1 serviceName:(id)arg2 style:(unsigned char)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchChatRecordsWithPinningIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDataForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchGroupPhotoPathsForChatsWithGroupIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchInteger64ForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLastMessageRecordForChatRecordWithRowID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMessageRecordWithGUID:(id)arg1 excludeRecoverableMessages:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchMessageRecordsFilteredUsingPredicate:(id)arg1 sortedUsingDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchMessageRecordsForChatRecordWithGUID:(id)arg1 filteredUsingPredicate:(id)arg2 sortedUsingDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (id)loadRecoverableMessagesMetadataGroupedByChatGUID;
- (void)moveMessageRecordsToRecoveryForChatRecordsWithGUIDs:(id)arg1 deleteDate:(id)arg2;
- (void)moveMessageRecordsToRecoveryForMessageGUIDs:(id)arg1 deleteDate:(id)arg2;
- (void)notifyFirstUnlockComplete;
- (void)permanentlyDeleteRecoverableMessagesInChatsWithGUIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)postSharePlayNotificationForChatGUID:(id)arg1 faceTimeConversationUUID:(id)arg2 handleIdentifier:(id)arg3 localizedApplicationName:(id)arg4;
- (void)recoverMessageRecordsForChatRecordsWithGUIDs:(id)arg1;
- (id)recoverableMessagesMetadataPendingCloudKitDeleteWithLimit:(long long)arg1;
- (id)recoverableMessagesMetadataPendingCloudKitSaveWithLimit:(long long)arg1;
- (void)resolveInconsistentGUIDForChatRecordWithGUID:(id)arg1 newGUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendLegacyXPCCommandWithObject:(id)arg1 reply:(id /* block */)arg2;
- (void)storeData:(id)arg1 forKey:(id)arg2;
- (void)storeRecoverableMessagePartWithBody:(id)arg1 forMessageWithGUID:(id)arg2 deleteDate:(id)arg3;
- (void)updateAttachmentSyndicationRanges:(id)arg1 shouldHideFromSyndication:(bool)arg2;
- (void)updateAttachmentsSyncStatusTo:(long long)arg1 forGUIDs:(id)arg2;
- (void)updateChatsSyncStatusTo:(long long)arg1 forGUIDs:(id)arg2;
- (void)updateMessageSyndicationRanges:(id)arg1 shouldHideFromSyndication:(bool)arg2;
- (void)updateMessagesSyncStatusTo:(long long)arg1 forGUIDs:(id)arg2;
- (void)updateMessagesSyncedSyndicationRangesForGUIDs:(id)arg1 toStatus:(long long)arg2;
- (void)updateRecoverableMessageSyncState:(long long)arg1 forMessageGUIDs:(id)arg2;
- (void)updateRecoverableMessageSyncState:(long long)arg1 forMessageRowID:(long long)arg2 onPartIndex:(long long)arg3;

@end
