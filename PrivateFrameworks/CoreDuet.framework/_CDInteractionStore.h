
@interface _CDInteractionStore : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording> {
    bool  _inMaintenanceMode;
    _DKKnowledgeStore * _knowledgeStore;
    _CDInteractionStoreNotifier * _notifier;
    NSObject<OS_dispatch_queue> * _pendingShareInteractionQueue;
    _CDInteraction * _pendingShareSheetInteraction;
    bool  _readConcurrently;
    _DKCoreDataStorage * _storage;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) _CDInteraction *pendingShareSheetInteraction;
@property (nonatomic) bool readConcurrently;
@property (nonatomic, readonly) _DKCoreDataStorage *storage;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

+ (id)defaultDatabaseDirectory;
+ (id)storeWithDirectory:(id)arg1 knowledgeStore:(id)arg2 readOnly:(bool)arg3;
+ (id)storeWithDirectory:(id)arg1 readOnly:(bool)arg2;

- (void).cxx_destruct;
- (void)anonymizeAttachmentsWithSalt:(id)arg1;
- (void)anonymizeContactsWithSalt:(id)arg1;
- (void)anonymizeInteractionsWithSalt:(id)arg1;
- (void)anonymizeKeywordsWithSalt:(id)arg1;
- (void)anonymizeWithSalt:(id)arg1;
- (id)anonymizedCopyToDirectory:(id)arg1 salt:(id)arg2;
- (id)batchFetchExistingAttachmentRecords:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)batchFetchExistingContactRecords:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)batchFetchExistingInteractionsWithUUIDs:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)batchFetchExistingKeywordRecords:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (void)closeStorage;
- (id)conversationsWithInteractions;
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id*)arg2;
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id*)arg2;
- (id)createAttachmentFromRecord:(id)arg1;
- (id)createInteractionFromRecord:(id)arg1;
- (id)createInteractionRecord:(id)arg1 context:(id)arg2 keywordCache:(id)arg3 attachmentCache:(id)arg4 contactCache:(id)arg5 error:(id*)arg6;
- (id)createKeywordFromRecord:(id)arg1;
- (id)dateFromTimeIntervalSinceRef:(double)arg1;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)deleteInteractionsOlderThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id*)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifiers:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifiers:(id)arg2 error:(id*)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2;
- (unsigned long long)deleteOldInteractionsIfNeededToLimitTotalNumber:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (bool)deleteStorage;
- (unsigned long long)deleteUnreferencedContacts;
- (unsigned long long)deleteUnreferencedKeywords;
- (void)enterMaintenanceMode;
- (id)errorForException:(id)arg1;
- (void)exitMaintenanceMode;
- (id)fetchOrCreateAttachmentRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id*)arg4;
- (id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id*)arg4;
- (id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id*)arg4;
- (id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (void)fillWithoutRelationshipsInteractionRecord:(id)arg1 fromInteraction:(id)arg2;
- (id)getContactForRecord:(id)arg1;
- (id)histogramContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 inDirectory:(id)arg2;
- (id)initWithDirectory:(id)arg1 knowledgeStore:(id)arg2 readOnly:(bool)arg3;
- (id)interactionCountPerMechanism;
- (id)kMostRecentConversationsWithLimit:(unsigned long long)arg1 predicate:(id)arg2;
- (unsigned long long)numberOfContactsMatchingPredicate:(id)arg1;
- (unsigned long long)numberOfInteractionsMatchingPredicate:(id)arg1;
- (bool)openAndCheckIfReadable;
- (id)pendingShareSheetInteraction;
- (id)queryContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (id)queryContactsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2 error:(id*)arg3;
- (id)queryInteractionsUsingPredicate:(id)arg1 matchingNameTokens:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 error:(id*)arg5;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 error:(id*)arg5;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 objectIDs:(id*)arg5 error:(id*)arg6;
- (id)queryInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (long long)queryVersionNumber;
- (bool)readConcurrently;
- (id)recipientArrayWithMostRecentSenderFirstFromIncomingInteraction:(id)arg1 outgoingInteraction:(id)arg2;
- (bool)recordInteraction:(id)arg1;
- (bool)recordInteractions:(id)arg1;
- (void)recordInteractions:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)recordInteractions:(id)arg1 error:(id*)arg2;
- (bool)recordInteractionsBatch:(id)arg1 error:(id*)arg2;
- (bool)recordVersionNumber:(long long)arg1;
- (void)setPendingShareSheetInteraction:(id)arg1;
- (void)setReadConcurrently:(bool)arg1;
- (id)storage;
- (void)updateCachedStatsForContactRecord:(id)arg1 isSender:(bool)arg2 withInteraction:(id)arg3;
- (id)usersWithInteractions;

// Image: /System/Library/PrivateFrameworks/ProactiveShareSheetDataHarvestingLighthouse.framework/ProactiveShareSheetDataHarvestingLighthouse

+ (id)lh_defaultDatabaseDirectory;
+ (id)lh_storeWithDirectory:(id)arg1 readOnly:(bool)arg2;

- (id)lh_conversationsWithInteractions;
- (id)lh_kMostRecentConversationsWithLimit:(unsigned long long)arg1 predicate:(id)arg2;
- (id)lh_queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (bool)lh_recordInteractions:(id)arg1 error:(id*)arg2;

@end
