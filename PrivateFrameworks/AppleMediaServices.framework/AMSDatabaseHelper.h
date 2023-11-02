
@interface AMSDatabaseHelper : NSObject

+ (bool)_addSkipBackupAttribute:(bool)arg1 forURL:(id)arg2;
+ (void)_applyProtectionClassForDirectoryAtURL:(id)arg1;
+ (id)_cachesURLForCachePath:(id)arg1;
+ (id)_dataVaultURLForDataVaultPath:(id)arg1;
+ (id)_databaseNameForType:(long long)arg1;
+ (id)databaseFolderNameForType:(long long)arg1;
+ (id)databasePathForCachePath:(id)arg1 type:(long long)arg2;
+ (id)databasePathForDataVaultPath:(id)arg1 type:(long long)arg2;
+ (id)databaseURLForCachePath:(id)arg1 type:(long long)arg2;
+ (id)databaseURLForDataVaultPath:(id)arg1 type:(long long)arg2;
+ (bool)removeDatabaseAtURL:(id)arg1;
+ (bool)removeDatabaseForCachePath:(id)arg1;
+ (bool)removeDatabaseForDataVaultPath:(id)arg1;

@end
