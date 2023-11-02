
@interface IMDChatStore : NSObject <IMStateLoggable, RecordStoreDeleting, RecordStoreProviding> {
    NSString * _lastModificationStamp;
    <IMDMessagePTaskStore> * _messagePTaskStore;
    IMStateCaptureAssistant * _stateCaptureAssistant;
}

@property (nonatomic, readonly) <IMDRemoteDatabaseProtocol> *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <IMDMessagePTaskStore> *messagePTaskStore;
@property (retain) NSString *modificationStamp;
@property (nonatomic, retain) IMStateCaptureAssistant *stateCaptureAssistant;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addGroupPhotoToTransferCenterForChat:(id)arg1;
- (void)_broadcastToForceReloadChats;
- (id)_chatRegistry;
- (id)_fetchChatRecordsToUploadWithLimit:(unsigned long long)arg1;
- (id)_generateCKRecordsFromChatRecords:(id)arg1;
- (void)_hasMarkedAllChatsAsNeedingSync;
- (id)_incomingChatWithChatRecord:(id)arg1;
- (id)_incomingChatsWithChatRecords:(id)arg1;
- (id)_loadChatsIncludingAllChats:(bool)arg1;
- (id)_lockRecord;
- (void)_markAllChatsAsNeedingSync;
- (unsigned long long)_maxFetchChatAttempts;
- (void)_performOrScheduleSpotlightIndexingOfAddedMessageWithGUID:(id)arg1 chat:(id)arg2 shouldDeferIndexing:(bool)arg3;
- (void)_processIncomingChat:(id)arg1;
- (bool)_shouldMarkAllChatsAsNeedingSync;
- (void)_updateModificationDate;
- (void)addMessageWithGUID:(id)arg1 toChat:(id)arg2;
- (void)addMessageWithGUID:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(bool)arg3;
- (void)archiveChat:(id)arg1;
- (id)batchOfRecordIDsToDeleteWithLimit:(long long)arg1 error:(id*)arg2;
- (id)batchOfRecordsToWriteWithLimit:(long long)arg1 error:(id*)arg2;
- (void)blackholeChat:(id)arg1;
- (id)chatWithGUID:(id)arg1;
- (id)chatsFilteredUsingPredicate:(id)arg1;
- (id)chatsFilteredUsingPredicate:(id)arg1 sortedUsingDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (id)chatsFilteredUsingPredicate:(id)arg1 sortedUsingLastMessageDateAscending:(bool)arg2 olderThan:(id)arg3 limit:(unsigned long long)arg4;
- (id)chatsGUIDsForMessageWithGUID:(id)arg1;
- (id)chatsGUIDsForMessageWithIdentifier:(long long)arg1;
- (id)chatsWithGroupID:(id)arg1;
- (id)chatsWithHandle:(id)arg1 onService:(id)arg2;
- (id)chatsWithHandles:(id)arg1 onService:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5;
- (id)chatsWithIdentifier:(id)arg1;
- (id)chatsWithIdentifier:(id)arg1 onService:(id)arg2;
- (id)chatsWithPinningIdentifier:(id)arg1;
- (id)chatsWithRoomname:(id)arg1 onService:(id)arg2;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)clearTombstonesForRecordIDs:(id)arg1;
- (id)database;
- (void)deleteChat:(id)arg1;
- (void)enumerateBatchedChatsFilteredUsingPredicate:(id)arg1 batchSize:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)enumerateBatchedChatsFilteredUsingPredicate:(id)arg1 block:(id /* block */)arg2;
- (id)init;
- (void)legacyImport:(id)arg1;
- (id)loadAllChats;
- (id)loadRecentChats;
- (id)messagePTaskStore;
- (id)modificationStamp;
- (id)newestChatWithGroupID:(id)arg1 onService:(id)arg2;
- (id)newestChatWithOriginalGroupID:(id)arg1 onService:(id)arg2;
- (void)recordUpdateFailedWithID:(id)arg1 localGUID:(id)arg2 error:(id)arg3;
- (void)recordUpdateSucceededWithRecord:(id)arg1;
- (void)remapMessageError:(unsigned int)arg1 toError:(unsigned int)arg2 forChat:(id)arg3 completion:(id /* block */)arg4;
- (void)removeMessageWithGUID:(id)arg1 fromChat:(id)arg2;
- (void)resetLocalSyncStateIfAppropriate;
- (void)setChatIsFiltered:(long long)arg1 withChatGuid:(id)arg2;
- (void)setMessagePTaskStore:(id)arg1;
- (void)setModificationStamp:(id)arg1;
- (void)setStateCaptureAssistant:(id)arg1;
- (void)setSyncStatusForGUIDs:(id)arg1 toStatus:(long long)arg2;
- (id)stateCaptureAssistant;
- (id)stateDictionaryForDiagnosticsRequest;
- (bool)storeChat:(id)arg1;
- (id)syncTokenStore;
- (void)unarchiveChat:(id)arg1;
- (void)unblackholeChat:(id)arg1;
- (unsigned long long)unreadCountForChat:(id)arg1;
- (bool)updateHandle:(id)arg1 sourceMessage:(id)arg2 personCentricID:(id)arg3 onService:(id)arg4;
- (bool)updatePersonCentricIDForHandlesInChatWithMessage:(id)arg1 fromIdentifier:(id)arg2 personCentricID:(id)arg3 chat:(id)arg4;

@end
