
@interface WLSQLController : NSObject {
    struct sqlite3 { } * _database;
    NSString * _databasePath;
    NSObject<OS_dispatch_queue> * _databaseQueue;
}

@property (nonatomic, copy) NSString *databasePath;

+ (long long)persistentValueForDate:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteAccounts;
- (void)_deleteSummaries;
- (void)_ensureCorrectSchema;
- (bool)_foundHandleIDs:(id)arg1 representSameGroupMessageAsHandleIDs:(id)arg2 handleIDsAreComplete:(bool)arg3;
- (void)_insertStatistics_onDatabaseQueue:(id)arg1;
- (id)_migratableAppsForDevice:(id)arg1;
- (void)_onDatabaseQueue_updateMigrationState:(int)arg1 forSummary:(id)arg2 removeData:(bool)arg3;
- (void)_openDatabase;
- (long long)_performQuery:(id)arg1 rowHandler:(id /* block */)arg2;
- (long long)_schemaVersion;
- (int)_sqlite3_bind_NSDate:(id)arg1 forStatement:(struct sqlite3_stmt { }*)arg2 position:(int)arg3;
- (id)_sqlite3_column_NSDateForStatement:(struct sqlite3_stmt { }*)arg1 column:(int)arg2;
- (unsigned long long)_totalSummarySegmentCountForAccounts:(id)arg1 migrationStateComparisonOperator:(id)arg2 migrationState:(long long)arg3;
- (id)accountsForMigrator:(id)arg1 device:(id)arg2;
- (void)closeDatabase;
- (id)dataForSummary:(id)arg1;
- (id)databasePath;
- (void)dealloc;
- (void)deleteAccountsAndSummariesForAllDevices;
- (bool)deleteAccountsAndSummariesForMigrator:(id)arg1 device:(id)arg2;
- (void)deleteGroupMessageInfoForAllDevices;
- (void)deleteMessagePhoneNumbersForAllDevices;
- (void)deleteMetadataForAllDevices;
- (void)deleteMigratableAppsForAllDevices;
- (void)deleteStatisticsForAllDevices;
- (void)deleteSuggestedAppBundleIDsForAllDevices;
- (void)deleteSummaryDataForAllDevices;
- (id)groupMessageInfoMatchingSortedHandleIDs:(id)arg1 handleIDsAreComplete:(bool)arg2 didMatchExactly:(bool*)arg3;
- (id)groupMessageInfoMatchingSourceThreadID:(id)arg1;
- (id)init;
- (unsigned long long)insertAccount:(id)arg1 migrator:(id)arg2 device:(id)arg3;
- (void)insertGroupMessageInfoWithSortedHandleIDs:(id)arg1 handleIDsAreComplete:(bool)arg2 roomName:(id)arg3 groupID:(id)arg4;
- (void)insertGroupMessageInfoWithSourceThreadID:(id)arg1 roomName:(id)arg2 groupID:(id)arg3;
- (void)insertMessagePhoneNumberWithIcc:(id)arg1 ccAcNumber:(id)arg2;
- (void)insertMetadata:(id)arg1 forSourceDevice:(id)arg2;
- (void)insertMigratableApp:(id)arg1 forDevice:(id)arg2;
- (unsigned long long)insertRecordSummary:(id)arg1 account:(id)arg2;
- (id)messagePhoneNumberIccForCcAcNumber:(id)arg1;
- (id)migratableAppsForAllDevices;
- (id)migrationErrors;
- (id)migrationMetadataForSourceDevice:(id)arg1 strictMatch:(bool)arg2;
- (void)removeDataAndSetDidImportForSummary:(id)arg1;
- (void)setData:(id)arg1 forSummary:(id)arg2;
- (void)setDatabasePath:(id)arg1;
- (void)setDidDownloadForSummary:(id)arg1 forSourceDevice:(id)arg2;
- (void)setMetadata:(id)arg1 forSourceDevice:(id)arg2;
- (void)setMigrationError:(id)arg1 forSummary:(id)arg2;
- (void)setWillImportForSummary:(id)arg1;
- (id)statisticsForContentType:(id)arg1;
- (id)summariesForAccount:(id)arg1;
- (id)summariesForAccounts:(id)arg1 sortedByModifiedDate:(bool)arg2;
- (unsigned long long)totalSummaryDownloadSegmentCountForAccounts:(id)arg1;
- (unsigned long long)totalSummaryDownloadedSegmentCountForAccounts:(id)arg1;
- (void)totalSummaryItemSizeForAccounts:(id)arg1 addOverhead:(bool)arg2 completion:(id /* block */)arg3;
- (void)updateModifiedDateForSummary:(id)arg1;
- (void)updateStatistics:(id)arg1;

@end
