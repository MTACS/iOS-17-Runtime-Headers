
@interface SLDataMigrationController : NSObject

+ (id)sharedController;

- (void)didFinishMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2;
- (void)ensureSocialUserDataDirectory;
- (bool)needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg1 serviceNameForLogging:(id)arg2;
- (bool)needsMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2;
- (void)removeAncillarySocialDatabaseFilesWithPrefix:(id)arg1 serviceNameForLogging:(id)arg2;

@end
