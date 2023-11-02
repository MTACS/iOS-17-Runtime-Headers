
@interface PLDeviceRestoreMigrationSupport : NSObject {
    bool  _dataMigratorPluginHasRequestedLibraryMigration;
    bool  _didWaitForPrerequisites;
    PLLibraryServicesManager * _libraryServicesManager;
    id /* block */  _prerequisitesCompleteBlock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _prerequisitesCompleteBlockLock;
    unsigned int  _userDataDisposition;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _userDataDispositionLock;
}

@property (getter=hasDataMigratorPluginRequestedLibraryMigration, nonatomic) bool dataMigratorPluginHasRequestedLibraryMigration;
@property (nonatomic, copy) id /* block */ prerequisitesCompleteBlock;

+ (bool)isDataMigrationInProgress;

- (void).cxx_destruct;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)arg1;
- (id)_dataMigrationInfo;
- (void)_linkAsideAlbumMetadata;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)arg1;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (void)_setAlbumPendingItemCountsWithContext:(id)arg1 shouldSave:(bool)arg2;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)arg1 populateAlbumMappings:(id)arg2;
- (bool)_userDataDispositionMatchesDisposition:(unsigned int)arg1;
- (void)deletePhotoStreamDataForStreamID:(id)arg1;
- (bool)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (bool)hasDataMigratorPluginRequestedLibraryMigration;
- (id)initWithLibraryServicesManager:(id)arg1;
- (bool)isOTARestoreInProgress;
- (bool)isRestoreFromBackup;
- (bool)isRestoreFromBackupSourceCloud;
- (bool)isRestoreFromBackupSourceDeviceToDevice;
- (bool)isRestoreFromBackupSourceDifferentDevice;
- (bool)isRestoreFromBackupSourceMegaBackup;
- (bool)isRestoreFromBackupSourceiTunes;
- (bool)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)arg1;
- (id /* block */)prerequisitesCompleteBlock;
- (id)restoreTypeDescription;
- (void)setDataMigratorPluginHasRequestedLibraryMigration:(bool)arg1;
- (void)setPrerequisitesCompleteBlock:(id /* block */)arg1;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;

@end
