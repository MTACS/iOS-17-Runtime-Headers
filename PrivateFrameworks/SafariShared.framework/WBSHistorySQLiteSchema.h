
@interface WBSHistorySQLiteSchema : NSObject {
    WBSHistoryCrypto * _crypto;
    WBSSQLiteDatabase * _database;
    NSDate * _migrateVisitsAfterDate;
}

@property (nonatomic, readonly) NSDictionary *legacyDatabase;

- (void).cxx_destruct;
- (void)_migrateLegacyDatabase;
- (id)_migrateLegacyDatabaseCreatingItemsAndVisits:(id)arg1 outVisitsToUseForRedirectChains:(id)arg2;
- (long long)_migrateLegacyItem:(id)arg1 dailyVisitCounts:(void*)arg2 weeklyVisitCounts:(void*)arg3;
- (long long)_migrateLegacyVisitWithItemID:(long long)arg1 visitTime:(double)arg2 title:(id)arg3 score:(unsigned long long)arg4 loadSuccessful:(bool)arg5 httpNonGet:(bool)arg6 synthesized:(bool)arg7;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_10;
- (int)_migrateToSchemaVersion_11;
- (int)_migrateToSchemaVersion_12;
- (int)_migrateToSchemaVersion_13;
- (int)_migrateToSchemaVersion_14;
- (int)_migrateToSchemaVersion_15;
- (int)_migrateToSchemaVersion_16;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_5;
- (int)_migrateToSchemaVersion_6;
- (int)_migrateToSchemaVersion_7;
- (int)_migrateToSchemaVersion_8;
- (int)_migrateToSchemaVersion_9;
- (void)_removeLegacyHistoryDatabaseIfNeeded;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1 crypto:(id)arg2 migrateVisitsAfterDate:(id)arg3;
- (id)legacyDatabase;
- (bool)migrateLegacyDatabaseCreatingRedirectChains:(id)arg1 urlsToItemAndLastVisitID:(id)arg2 visitsToUseForRedirectChains:(id)arg3;
- (int)migrateToCurrentSchemaVersionIfNeeded;

@end
