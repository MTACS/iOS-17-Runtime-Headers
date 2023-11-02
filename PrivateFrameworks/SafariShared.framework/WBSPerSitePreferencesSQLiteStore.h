
@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
    WBSSafariBookmarksSyncAgentProxy * _syncProxy;
}

@property (nonatomic, retain) WBSSafariBookmarksSyncAgentProxy *syncProxy;

+ (id)defaultDatabaseURL;
+ (bool)isPreferenceSyncable:(id)arg1;
+ (id)sharedStore;
+ (id)staticSyncablePerSiteSettings;

- (void).cxx_destruct;
- (void)_closeDatabase;
- (int)_createFreshDatabaseSchema;
- (id)_defaultValueForPreference:(id)arg1;
- (bool)_isDatabaseOpen;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (bool)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_5;
- (int)_migrateToSchemaVersion_6;
- (void)_openDatabase;
- (void)_openDatabaseIfNecessary;
- (id)_queryListForPreferences:(id)arg1;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (void)_setDeletedCloudKitSyncData:(id)arg1 forRecordName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_setSyncData:(id)arg1 forPreference:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_setSyncData:(id)arg1 forPreference:(id)arg2 domain:(id)arg3 recordName:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)_tryToPerformTransactionInBlock:(id /* block */)arg1;
- (id)_valueOfPreferences:(id)arg1 forDomain:(id)arg2;
- (void)closeDatabase;
- (void)dealloc;
- (id)defaultValueForPreference:(id)arg1;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getAllPreferenceInformationForPreference:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getDefaultValueForPreference:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getDeletedCloudKitSyncDataForRecordName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSyncDataForPreference:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSyncDataForPreference:(id)arg1 domain:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getTimestampAndValueOfPreference:(id)arg1 forDomain:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)getValuesOfPreference:(id)arg1 forDomains:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)getValuesOfPreferences:(id)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1;
- (void)removeAllCloudKitRecordsWithCompletionHandler:(id /* block */)arg1;
- (void)removeAllPreferenceValuesFromPreference:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllPreferenceValuesFromPreferences:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllSyncData;
- (void)removePreferenceValueWithRecordName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removePreferenceValuesForDomainPrefixes:(id)arg1 fromPreferences:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeTombstoneWithRecordName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)savePerSiteSettingCloudKitRecordToDisk:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDefaultValue:(id)arg1 forPreference:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setSyncProxy:(id)arg1;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 includeTimestamp:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 withTimestamp:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)syncProxy;
- (id)valueOfPreference:(id)arg1 forDomain:(id)arg2;

@end
