
@interface PBFPosterExtensionDataStoreMigrator : NSObject {
    NSURL * _baseURL;
    bool  _shouldCleanupAfterMigration;
}

@property (nonatomic, readonly) NSIndexSet *availableDataStoreVersions;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) bool isDataStoreUpToDateForCurrentVersion;
@property (nonatomic) bool shouldCleanupAfterMigration;

+ (bool)migrateDataStoreAtBaseURL:(id)arg1 fromVersion:(unsigned long long)arg2 toVersion:(unsigned long long)arg3 cleanupAfterMigrationSucceeds:(bool)arg4 error:(out id*)arg5;

- (void).cxx_destruct;
- (unsigned long long)_mostUpToDateValidDataStoreToMigrateFrom;
- (void)_removeAncientDataStores;
- (void)archiveDataStoresBeforeCurrentDataStoreVersion;
- (id)availableDataStoreVersions;
- (id)baseURL;
- (id)initWithBaseURL:(id)arg1;
- (bool)isDataStoreUpToDateForCurrentVersion;
- (void)markDataStoreArchivesAsPurgable;
- (unsigned long long)migrateDataStoreToCurrentVersion:(out id*)arg1;
- (void)removeDataStoresBeforeCurrentDataStoreVersion;
- (void)setShouldCleanupAfterMigration:(bool)arg1;
- (bool)shouldCleanupAfterMigration;
- (bool)validateDataStoreIntegrity:(out id*)arg1;

@end
