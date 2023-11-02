
@interface TIUserModelDataStore : NSObject <TIUserModelDataStoring> {
    NSObject<OS_dispatch_queue> * _database_queue;
    NSString * _path;
    struct sqlite3 { } * _user_model_db;
    bool  _user_model_db_failed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *durableLastMigrationDate;
@property (readonly) int durableVersion;
@property (readonly) unsigned long long hash;
@property (readonly) bool isValid;
@property (readonly) NSDate *propertiesLastMigrationDate;
@property (readonly) int propertiesVersion;
@property (readonly) Class superclass;
@property (readonly) NSDate *transientLastMigrationDate;
@property (readonly) int transientVersion;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (id)initializeDataStoreAtPath:(id)arg1;

- (void).cxx_destruct;
- (bool)_updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3 withUpdateQuery:(const char *)arg4;
- (bool)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;
- (bool)closeDatabase;
- (bool)createOrOpenDatabase;
- (void)dealloc;
- (id)durableCreationSchema;
- (id)durableLastMigrationDate;
- (id)durableLastMigrationDateFromDatabase:(struct sqlite3 { }*)arg1;
- (id)durableMigrationFromV2Schema;
- (id)durableMigrationFromV3Schema;
- (id)durableMigrationSchemaForDatabase:(struct sqlite3 { }*)arg1;
- (id)durableResetSchema;
- (int)durableVersion;
- (int)durableVersionFromDatabase:(struct sqlite3 { }*)arg1;
- (id)getAllKnownInputModes;
- (id)getAllKnownInputModesSinceDate:(id)arg1;
- (id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4;
- (id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (id)getDailyAndWeeklyValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 weeklyKeySuffixes:(id)arg3 endDate:(id)arg4;
- (id)getDurableValueForKey:(id)arg1;
- (id)getInputModesForKey:(id)arg1;
- (id)initWithPath:(id)arg1;
- (bool)isDatabaseValid;
- (bool)isValid;
- (id)lastMigrationDateForKey:(id)arg1 fromDatabase:(struct sqlite3 { }*)arg2;
- (id)propertiesCreationSchema;
- (id)propertiesLastMigrationDate;
- (id)propertiesLastMigrationDateFromDatabase:(struct sqlite3 { }*)arg1;
- (id)propertiesMigrationFromV1Schema;
- (id)propertiesMigrationSchemaForDatabase:(struct sqlite3 { }*)arg1;
- (int)propertiesVersion;
- (int)propertiesVersionFromDatabase:(struct sqlite3 { }*)arg1;
- (bool)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (bool)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (bool)purgeDurableDataForKeyPrefix:(id)arg1;
- (bool)setDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;
- (id)transientCreationSchema;
- (id)transientLastMigrationDate;
- (id)transientLastMigrationDateFromDatabase:(struct sqlite3 { }*)arg1;
- (id)transientMigrationSchemaForDatabase:(struct sqlite3 { }*)arg1;
- (id)transientResetSchema;
- (int)transientVersion;
- (int)transientVersionFromDatabase:(struct sqlite3 { }*)arg1;
- (bool)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;
- (int)versionForKey:(id)arg1 fromDatabase:(struct sqlite3 { }*)arg2;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

+ (void)setSharedTIUserModelDataStore:(id)arg1;
+ (id)sharedUserModelDataStore;
+ (id)singletonInstance;

@end
