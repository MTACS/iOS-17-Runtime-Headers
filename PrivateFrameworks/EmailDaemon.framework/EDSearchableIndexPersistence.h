
@interface EDSearchableIndexPersistence : NSObject <EDPersistenceDatabaseSchemaProvider, EDSearchableIndexDataSource, EFLoggable, EFSignpostable> {
    _Atomic unsigned char  _currentIndexingTypeIndex;
    EDDataDetectionPersistence * _dataDetectionPersistence;
    EDPersistenceDatabase * _database;
    <EDSearchableIndexHookResponder> * _hookResponder;
    long long  _lastProcessedAttachmentID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lastProcessedAttachmentIDLock;
    EDMessagePersistence * _messagePersistence;
    unsigned long long  _rebuildIndexState;
    EDRichLinkPersistence * _richLinkPersistence;
}

@property (nonatomic, readonly) NSString *additionalFilterClause;
@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <EDSearchableIndexHookResponder> *hookResponder;
@property long long lastProcessedAttachmentID;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property unsigned long long rebuildIndexState;
@property (nonatomic, readonly) EDRichLinkPersistence *richLinkPersistence;
@property (readonly) unsigned long long signpostID;
@property (nonatomic, readonly) NSDictionary *statistics;
@property (readonly) Class superclass;

+ (id)log;
+ (id)searchableAttachmentsTableSchema;
+ (id)searchableDataDetectionResultsTableSchema;
+ (id)searchableMessageTombstonesTableSchema;
+ (id)searchableMessagesTableName;
+ (id)searchableMessagesTableSchema;
+ (id)searchableRebuildTableSchema;
+ (id)searchableRichLinksTableSchema;
+ (id)signpostLog;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

- (void).cxx_destruct;
- (void)_addSearchableDataDetectionResults:(id)arg1 withMessage:(id)arg2 transaction:(long long)arg3;
- (void)_addTombstonesForIdentifiers:(id)arg1 type:(long long)arg2 connection:(id)arg3;
- (id)_assignIndexedAttachmentItems:(id)arg1 transaction:(long long)arg2 connection:(id)arg3;
- (void)_assignIndexedDataDetectionItems:(id)arg1 transaction:(long long)arg2 connection:(id)arg3;
- (id)_assignIndexedItems:(id)arg1 connection:(id)arg2 query:(id)arg3 indexedBindingsGenerator:(id /* block */)arg4;
- (id)_assignIndexedItems:(id)arg1 transaction:(long long)arg2 connection:(id)arg3;
- (id)_assignIndexedRichLinkItems:(id)arg1 transaction:(long long)arg2 connection:(id)arg3;
- (void)_assignTombstonesForIdentifiers:(id)arg1 type:(long long)arg2 transaction:(long long)arg3 connection:(id)arg4;
- (id)_attachmentDataForItemsRequiringIndexingExcludingIdentifiers:(id)arg1 limit:(unsigned long long)arg2 cancelationToken:(id)arg3 connection:(id)arg4;
- (id)_attachmentDataForMessageWithIdentifier:(id)arg1 connection:(id)arg2;
- (id)_attachmentItemsFromAttachmentData:(id)arg1 limit:(unsigned long long)arg2 cancelationToken:(id)arg3;
- (bool)_canPerformIncrementalIndexForIdentifier:(id)arg1 indexingType:(long long)arg2;
- (void)_enumerateSearchableIndexMessageIndexingTypesUsingBlock:(id /* block */)arg1;
- (id)_identifiersForAttachmentsInTransactions:(id)arg1 usingConnection:(id)arg2;
- (id)_identifiersForAttachmentsWithQuery:(id)arg1 usingConnection:(id)arg2;
- (id)_identifiersForDeletedAttachmentsUsingConnection:(id)arg1;
- (id)_identifiersForDeletedMessagesUsingConnection:(id)arg1;
- (id)_identifiersForRemovedItemsUsingConnection:(id)arg1;
- (id)_identifiersForTombstonesOfType:(long long)arg1 connection:(id)arg2;
- (id)_messageIDTransactionIDDictionaryToVerifyUsingConnection:(id)arg1 count:(unsigned long long)arg2 lastVerifiedMessageID:(long long)arg3;
- (id)_messagesRequiringIndexingForType:(long long)arg1 excludingIdentifiers:(id)arg2 limit:(long long)arg3;
- (void)_purgeSpotlightTombstonesBeforeTransaction:(long long)arg1 connection:(id)arg2;
- (void)_removeIndexedIdentifiers:(id)arg1 connection:(id)arg2;
- (id)_richLinkDataForItemsRequiringIndexingExcludingIdentifiers:(id)arg1 limit:(unsigned long long)arg2 cancelationToken:(id)arg3 connection:(id)arg4;
- (id)_richLinkItemsFromRichLinkData:(id)arg1 limit:(unsigned long long)arg2 cancelationToken:(id)arg3;
- (id)_searchableIndexMessageIndexingTypes;
- (id)additionalFilterClause;
- (void)allMailboxIdentifiersForMessage:(id)arg1 result:(id /* block */)arg2;
- (void)attachmentItemMetadataForAttachmentID:(id)arg1 attachmentPersistentID:(id)arg2 messagePersistentID:(id)arg3 name:(id)arg4 mailboxID:(long long)arg5 result:(id /* block */)arg6;
- (void)attachmentItemMetadataForAttachmentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 mailboxID:(long long)arg4 result:(id /* block */)arg5;
- (id)childIdentifiersToRemoveFromSearchableIndex:(id)arg1 whenRemovingParentIdentifiers:(id)arg2;
- (void)clearOrphanedSearchableMessagesFromDatabase;
- (id)database;
- (id)distinctTransactionIDsForSearchableIndex:(id)arg1;
- (id)hookResponder;
- (long long)indexingTypeForSearchableIndex:(id)arg1 item:(id)arg2;
- (id)initWithDatabase:(id)arg1 messagePersistence:(id)arg2 richLinkPersistence:(id)arg3 hookResponder:(id)arg4;
- (long long)lastProcessedAttachmentID;
- (id)messagePersistence;
- (id)messagesWhere:(id)arg1 useSearchableRebuildTable:(bool)arg2 limit:(long long)arg3;
- (unsigned long long)rebuildIndexState;
- (id)richLinkPersistence;
- (void)searchableIndex:(id)arg1 assignIndexingType:(long long)arg2 forIdentifiers:(id)arg3;
- (id)searchableIndex:(id)arg1 assignTransaction:(long long)arg2 updates:(id)arg3;
- (id)searchableIndex:(id)arg1 attachmentItemsForMessageWithIdentifier:(id)arg2;
- (void)searchableIndex:(id)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
- (id)searchableIndex:(id)arg1 invalidateItemsInTransactions:(id)arg2;
- (void)searchableIndex:(id)arg1 prepareToIndexAttachmentsForMessageWithIdentifier:(id)arg2;
- (void)searchableIndex:(id)arg1 willRemoveIdentifiers:(id)arg2 type:(long long)arg3;
- (id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2;
- (void)searchableRichLinkItemMetadataForRichLinkID:(id)arg1 richLinkItemIdentifier:(id)arg2 messagePersistentID:(id)arg3 mailboxID:(long long)arg4 title:(id)arg5 url:(id)arg6 result:(id /* block */)arg7;
- (void)setLastProcessedAttachmentID:(long long)arg1;
- (void)setRebuildIndexState:(unsigned long long)arg1;
- (unsigned long long)signpostID;
- (id)statistics;
- (id)updatesForSearchableIndex:(id)arg1 excludingIdentifiers:(id)arg2 count:(unsigned long long)arg3 cancelationToken:(id)arg4;
- (id)verificationDataSamplesForSearchableIndex:(id)arg1 count:(unsigned long long)arg2 lastVerifiedMessageID:(long long)arg3;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg1;

@end
