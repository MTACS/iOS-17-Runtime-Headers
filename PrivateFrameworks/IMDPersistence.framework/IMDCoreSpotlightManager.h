
@interface IMDCoreSpotlightManager : NSObject {
    NSMutableOrderedSet * _blocklistMessageGUIDs;
}

@property (nonatomic, retain) NSMutableOrderedSet *blocklistMessageGUIDs;

+ (Class)__SLCollaborationHandshakeController;
+ (id)chatAutoDonatingCutomKey;
+ (id)chatAutoDonatingServerDateCustomKey;
+ (id)chatStyleCustomKey;
+ (id)handleToIdentityMapKey;
+ (id)localIdentityKey;
+ (id)localIdentityProofKey;
+ (id)resolvedURLCustomKey;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_FPProviderIDForItems:(id)arg1;
- (unsigned long long)_batchSizeForTargetBatchSize:(unsigned long long)arg1 lastIndexedRowID:(unsigned long long)arg2 lastBatch:(bool*)arg3;
- (bool)_bypassIndexVersionCheck;
- (long long)_chatCountForChats:(id)arg1;
- (id)_chatDictionaryForChatAtIndex:(unsigned long long)arg1 withChats:(id)arg2;
- (id)_chatDictionaryForChatGUID:(id)arg1;
- (id)_copyCDInteractionsForMessagesWithLastRowID:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 timingCollection:(id)arg3 hadResults:(bool*)arg4;
- (id)_copyNewSearchableIndexesForMessagesWithLastRowID:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 processedMessageCount:(int*)arg3 timingCollection:(id)arg4;
- (unsigned long long)_currentIndexVersion;
- (id)_donationManager;
- (void)_enumerateSearchableChatItemsForAllChatsWithBlock:(id /* block */)arg1 timingCollection:(id)arg2;
- (unsigned long long)_expectedIndexVersion;
- (void)_geocodeItems:(id)arg1;
- (void)_indexSearchableChatItems:(id)arg1 withIndex:(id)arg2 blocking:(bool)arg3;
- (void)_indexSearchableItems:(id)arg1 lastIndexedRowID:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 lastBatch:(bool)arg4 withIndex:(id)arg5 blockUntilCompleted:(bool)arg6 completion:(id /* block */)arg7;
- (void)_indexSearchableItems:(id)arg1 lastIndexedRowID:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 lastBatch:(bool)arg4 withIndex:(id)arg5 completion:(id /* block */)arg6;
- (unsigned long long)_lastDonatedRowID;
- (unsigned long long)_lastIndexedRowID;
- (id)_newSearchableChatItemsForChats:(id)arg1;
- (id)_personIdentityQueue;
- (void)_postProcessIndexingForItem:(id)arg1 chatDictionary:(id)arg2 isReindexing:(bool)arg3;
- (void)_resolvedURLForItems:(id)arg1;
- (void)_sanitizeIndexesForCurrentVersionIfNeeded:(id /* block */)arg1;
- (id)_scrutinyMessagesQueue;
- (void)_setBypassIndexVersionCheck;
- (void)_setCurrentIndexVersion:(unsigned long long)arg1;
- (void)_setLastDonatedRowID:(unsigned long long)arg1;
- (void)_setLastIndexedRowID:(unsigned long long)arg1;
- (void)_setMaxIndexRowID:(unsigned long long)arg1;
- (void)_setNeedsDeferredIndexing:(bool)arg1;
- (void)_setNeedsDonation:(bool)arg1;
- (void)_setNeedsIndexing:(bool)arg1;
- (bool)_shouldBypassForTesting;
- (bool)_shouldDonateNextBatchForBatchSize:(unsigned long long)arg1;
- (bool)_shouldIndexNextBatchForBatchSize:(unsigned long long)arg1;
- (void)_updateItem:(id)arg1 withFPProviderID:(id)arg2;
- (void)_updateItem:(id)arg1 withGeoMapItem:(id)arg2;
- (void)_updateItem:(id)arg1 withIdentityMap:(id)arg2 localIdentity:(id)arg3 localIdentityProof:(id)arg4;
- (void)_updateItem:(id)arg1 withResolvedURL:(id)arg2;
- (void)addChatSearchableItemForChatGUID:(id)arg1;
- (id)blocklistMessageGUIDs;
- (void)clearMessageGUIDFromScrutiny:(id)arg1;
- (void)deleteChatSearchableItemForChatGUID:(id)arg1;
- (void)donateChatDictionary:(id)arg1 withMessageDictionary:(id)arg2;
- (void)donateNextMessageBatchIfNeeded:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)indexChats;
- (void)indexNextMessageBatchIfNeeded:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (long long)maxRowID;
- (id)newCDContactForURI:(id)arg1;
- (id)newCDInteractionForChatDictionary:(id)arg1 messageDictionary:(id)arg2;
- (id)newChatSearchableItemForChatDictionary:(id)arg1 optionalLastMessageDate:(id)arg2;
- (id)newSearchableItemsForMessage:(id)arg1 reindexing:(bool)arg2;
- (id)newSearchableItemsForMessageGUID:(id)arg1 reindexing:(bool)arg2;
- (id)newSearchableItemsForMessageItemDictionary:(id)arg1 chatDictionary:(id)arg2 reindexing:(bool)arg3;
- (void)reIndexWithLocalProofOfInclusionForItemsAsync:(id)arg1;
- (id)searchableIndex;
- (void)setBlocklistMessageGUIDs:(id)arg1;
- (void)setMessageGUIDUnderScrutiny:(id)arg1;
- (void)setNeedsDonateAllMessagesWithCompletion:(id /* block */)arg1;
- (void)setNeedsMessageReindexingWithCompletion:(id /* block */)arg1;

@end
