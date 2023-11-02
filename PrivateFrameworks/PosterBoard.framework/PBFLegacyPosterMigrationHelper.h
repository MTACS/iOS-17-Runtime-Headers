
@interface PBFLegacyPosterMigrationHelper : NSObject {
    bool  _canMigrateLegacyLockPoster;
    bool  _canMigrateLegacyPoster;
    PBFPosterExtensionDataStore * _dataStore;
    bool  _distinctHomeScreenMigrationEnabled;
    NSObject<OS_dispatch_queue> * _homeMigrationQueue;
    id  _legacyPosterPair;
    bool  _migrationEnabled;
    PBUIPosterWallpaperMigrationInfo * _migrationInfo;
}

@property (nonatomic, readonly) bool canMigrateLegacyLockPoster;
@property (nonatomic, readonly) bool canMigrateLegacyPoster;
@property (nonatomic, readonly) PBFPosterExtensionDataStore *dataStore;
@property (getter=isDistinctHomeScreenMigrationEnabled, nonatomic, readonly) bool distinctHomeScreenMigrationEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *homeMigrationQueue;
@property (nonatomic, readonly) id legacyPosterPair;
@property (getter=isMigrationEnabled, nonatomic, readonly) bool migrationEnabled;
@property (nonatomic, readonly) PBUIPosterWallpaperMigrationInfo *migrationInfo;

- (void).cxx_destruct;
- (bool)_shouldAllowMigration;
- (bool)canMigrateLegacyLockPoster;
- (bool)canMigrateLegacyPoster;
- (id)dataStore;
- (void)finalizeMigrationWithMigratedConfigurationUUID:(id)arg1;
- (id)homeMigrationQueue;
- (id)initWithDataStore:(id)arg1 legacyPosterPair:(id)arg2;
- (bool)isDistinctHomeScreenMigrationEnabled;
- (bool)isMigrationEnabled;
- (id)legacyPosterPair;
- (id)lockScreenMigrationViewController;
- (void)migrateHomePosterAndAssociateToConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)migrationInfo;
- (void)revertMigrationWithMigratedConfigurationUUID:(id)arg1;
- (void)setHomeMigrationQueue:(id)arg1;

@end
