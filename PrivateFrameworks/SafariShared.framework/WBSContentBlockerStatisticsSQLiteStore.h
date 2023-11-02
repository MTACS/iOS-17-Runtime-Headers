
@interface WBSContentBlockerStatisticsSQLiteStore : NSObject <WBSContentBlockerStatisticsStore> {
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_databaseURLForProfileWithIdentifier:(id)arg1;
+ (id)_defaultDatabaseURL;
+ (id)allStores;
+ (id)standardStore;
+ (bool)storeExistsForProfileWithIdentifier:(id)arg1;
+ (id)storeForProfileWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_clearStatisticsAfter:(id)arg1 before:(id)arg2;
- (void)_clearStatisticsForDomain:(id)arg1;
- (void)_closeDatabaseOnDatabaseQueue;
- (bool)_createDatabaseSchemaIfNeeded;
- (void)_deleteDatabase;
- (void)_deleteUnusedDomains;
- (long long)_idForFirstPartyWithHighLevelDomain:(id)arg1;
- (long long)_idForThirdPartyWithHighLevelDomain:(id)arg1;
- (bool)_openDatabaseIfNeeded;
- (bool)_openDatabaseIfNeededFallingBackToInMemory:(bool)arg1;
- (long long)_schemaVersion;
- (bool)_tryOpenDatabase:(id*)arg1;
- (void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 onFirstParty:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)clearAllStatisticsWithCompletionHandler:(id /* block */)arg1;
- (void)clearStatisticsAfter:(id)arg1 before:(id)arg2;
- (void)clearStatisticsForDomains:(id)arg1;
- (void)closeDatabase;
- (void)dealloc;
- (id)description;
- (id)initWithDatabaseURL:(id)arg1;
- (void)recordThirdPartyResourceBlocked:(id)arg1 onFirstParty:(id)arg2 completionHandler:(id /* block */)arg3;

@end
