
@interface ASCloudKitUtility : NSObject {
    CKContainer * _container;
    NSHashTable * _queue_executingFetchOperations;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) CKContainer *container;

+ (id)shareURLForShare:(id)arg1;

- (void).cxx_destruct;
- (void)_acceptShareMetadatas:(id)arg1 completion:(id /* block */)arg2;
- (void)_acceptSharesWithURLs:(id)arg1 operation:(id)arg2 completion:(id /* block */)arg3;
- (void)_createRecordZonesWithIDs:(id)arg1 priority:(long long)arg2 useZoneWideSharing:(bool)arg3 completion:(id /* block */)arg4;
- (void)_fetchChangesInDatabase:(id)arg1 serverChangeTokenCache:(id)arg2 priority:(long long)arg3 activity:(id)arg4 completion:(id /* block */)arg5;
- (void)_fetchChangesInZones:(id)arg1 inDatabase:(id)arg2 serverChangeTokenCache:(id)arg3 priority:(long long)arg4 allowRetry:(bool)arg5 completion:(id /* block */)arg6;
- (void)_fetchShareParticipantForLookupInfos:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchShareWithShareRecordID:(id)arg1 completion:(id /* block */)arg2;
- (void)_saveRecordsIntoPrivateDatabase:(id)arg1 recordIDsToDelete:(id)arg2 savePolicy:(long long)arg3 priority:(long long)arg4 activity:(id)arg5 completion:(id /* block */)arg6;
- (void)_saveRecordsIntoPrivateDatabaseCreatingZones:(id)arg1 recordIDsToDelete:(id)arg2 savePolicy:(long long)arg3 priority:(long long)arg4 activity:(id)arg5 useZoneWideSharing:(bool)arg6 completion:(id /* block */)arg7;
- (void)acceptSharesWithURLs:(id)arg1 completion:(id /* block */)arg2;
- (void)addParticipantWithCloudKitAddress:(id)arg1 toShares:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelAllExecutingFetches;
- (id)container;
- (void)createShareAndAssociatedZoneWithShareRecordID:(id)arg1 rootRecord:(id)arg2 otherRecordsToSave:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchChangesInPrivateDatabaseWithServerChangeTokenCache:(id)arg1 priority:(long long)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchChangesInSharedDatabaseWithServerChangeTokenCache:(id)arg1 priority:(long long)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchShareParticipantForEmailAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchShareWithShareRecordID:(id)arg1 completion:(id /* block */)arg2;
- (void)forceSaveRecordsIntoPrivateDatabaseIgnoringServerChanges:(id)arg1 recordIDsToDelete:(id)arg2 priority:(long long)arg3 activity:(id)arg4 completion:(id /* block */)arg5;
- (id)init;
- (id)initWithContainer:(id)arg1;
- (void)removeParticpantWithCloudKitAddress:(id)arg1 fromShares:(id)arg2 completion:(id /* block */)arg3;
- (void)saveRecordsIntoPrivateDatabase:(id)arg1 priority:(long long)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (void)saveSubscriptions:(id)arg1 andDeleteSubscriptionsWithIdentifiers:(id)arg2 inDatabase:(id)arg3 completion:(id /* block */)arg4;
- (void)setContainer:(id)arg1;

@end
