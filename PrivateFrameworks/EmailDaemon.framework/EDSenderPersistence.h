
@interface EDSenderPersistence : NSObject <EDMessageChangeHookResponder, EDPersistenceDatabaseSchemaProvider, EDProtectedDatabasePersistenceReconciliationMergeHandler> {
    EMBlockedSenderManager * _blockedSenderManager;
    CNContactStore * _contactStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contactStoreLock;
    EDPersistenceDatabase * _database;
    EFLazyCache * _databaseIDToEmailAddressCache;
    EFLazyCache * _emailAddressToBucketCache;
    EDPersistenceHookRegistry * _hookRegistry;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic, readonly) EMBlockedSenderManager *blockedSenderManager;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (nonatomic, readonly) EFLazyCache *databaseIDToEmailAddressCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EFLazyCache *emailAddressToBucketCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) Class superclass;

+ (id)addJoinsForSenderBucketToSelectStatement:(id)arg1 withSourceAddressColumn:(id)arg2;
+ (id)senderAddressesAddressColumnName;
+ (id)senderAddressesSenderColumnName;
+ (id)senderAddressesTableName;
+ (id)senderAddressesTableSchema;
+ (id)sendersBucketColumnName;
+ (id)sendersTableName;
+ (id)sendersTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

- (void).cxx_destruct;
- (bool)_addAddressesWithDatabaseIDs:(id)arg1 toSenderWithDatabaseID:(id)arg2 connection:(id)arg3 error:(id*)arg4;
- (bool)_addNewSender:(id)arg1 toBucket:(long long)arg2 connection:(id)arg3;
- (bool)_addNewSenderWithAddressIDs:(id)arg1 contactIdentifier:(id)arg2 toBucket:(long long)arg3 connection:(id)arg4 senderDatabaseID:(long long*)arg5;
- (bool)_addNewSendersForEmailAddresses:(id)arg1 toBucket:(long long)arg2 connection:(id)arg3 newSenders:(id*)arg4;
- (id)_addressIDsForAddresses:(id)arg1 connection:(id)arg2;
- (id)_addressIDsGroupedByContactsForAddressesByContact:(id)arg1 withConnection:(id)arg2 addressesByID:(id*)arg3;
- (id)_addressesGroupedByContactForAddresses:(id)arg1 unmatchedAddresses:(id*)arg2 otherAddressesByContact:(id*)arg3;
- (id)_addressesGroupedBySimpleAddressForAddresses:(id)arg1;
- (id)_addressesToDatabaseIDsForSelect:(id)arg1 addressColumns:(id)arg2 connection:(id)arg3 error:(id*)arg4;
- (id)_addressesToDatabaseIDsForSimpleAddresses:(id)arg1 connection:(id)arg2;
- (bool)_blockOrUnblockSendersForAddresses:(id)arg1 block:(bool)arg2 blockedAddressDatabaseIDs:(id)arg3 connection:(id)arg4 addressesToUpdate:(id*)arg5;
- (void)_blockedSendersDidChange:(id)arg1;
- (long long)_bucketForSenderAddress:(id)arg1;
- (long long)_bucketForSenderWithDatabaseID:(long long)arg1 connection:(id)arg2;
- (id)_combineDictionary:(id)arg1 withDictionary:(id)arg2;
- (id)_contactIdentifierForSenderWithDatabaseID:(long long)arg1 connection:(id)arg2;
- (id)_emailAddressForDatabaseID:(id)arg1 connection:(id)arg2;
- (void)_invalidateCaches;
- (void)_invalidateCachesForAddresses:(id)arg1;
- (void)_moveAddressesFromSentMessagesToPrimaryForMessages:(id)arg1;
- (bool)_moveSenderWithDatabaseID:(long long)arg1 toBucket:(long long)arg2 connection:(id)arg3;
- (void)_moveSenderWithEmailAddresses:(id)arg1 toBucket:(long long)arg2 sync:(bool)arg3 userInitiated:(bool)arg4;
- (id)_moveSenderWithSimpleEmailAddresses:(id)arg1 toBucket:(long long)arg2 sync:(bool)arg3 userInitiated:(bool)arg4 transactionGeneration:(long long*)arg5;
- (id)_newlyBlockedAddressesForBlockedAddressDatabaseIDs:(id)arg1 connection:(id)arg2;
- (id)_newlyUnblockedAddressesForBlockedAddressDatabaseIDs:(id)arg1 connection:(id)arg2;
- (void)_reloadBlockedSendersWithAddresses:(id)arg1;
- (void)_setIsBlocked:(bool)arg1 forAddresses:(id)arg2;
- (id)_simpleAddressesForAddresses:(id)arg1;
- (void)_updateBlockedSendersWithBlockedSenderAddresses:(id)arg1 newlyBlockedAddresses:(id /* block */)arg2 newlyUnblockedAddresses:(id /* block */)arg3;
- (void)addAddresses:(id)arg1 toSender:(id)arg2;
- (id)blockedSenderManager;
- (long long)bucketForSenderAddress:(id)arg1;
- (id)contactStore;
- (id)database;
- (id)databaseIDToEmailAddressCache;
- (id)emailAddressToBucketCache;
- (unsigned long long)handleReconciliationMergeErrorForTable:(id)arg1 columnName:(id)arg2 statement:(id)arg3 journalRowID:(id)arg4 protectedRowID:(id)arg5 connection:(id)arg6 rowsUpdated:(unsigned long long*)arg7 error:(id*)arg8;
- (id)hookRegistry;
- (id)initWithDatabase:(id)arg1 blockedSenderManager:(id)arg2 hookRegistry:(id)arg3 contactStore:(id)arg4;
- (void)moveSenderWithEmailAddresses:(id)arg1 toBucket:(long long)arg2;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (id)processingQueue;
- (id)relevantSendersForSearch;
- (void)removeAddresses:(id)arg1 fromSender:(id)arg2;
- (void)scheduleRecurringActivity;
- (void)setContactStore:(id)arg1;
- (void)test_tearDown;

@end
