
@interface ICMigrationUtilities : NSObject

+ (void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg1;
+ (void)deleteMigratedHTMLAccountsInContext:(id)arg1;
+ (void)fetchAndSetMigrationStateForAccountID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)fetchMigrationStateAndUserRecordForAccountID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)fetchMigrationStateForAccountID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)saveDidChooseToMigrate:(bool)arg1 didFinishMigration:(bool)arg2 didMigrateOnMac:(bool)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(id /* block */)arg6;
+ (void)updateAllLegacyAccountMigrationStatesInContext:(id)arg1;
+ (void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1;

@end
