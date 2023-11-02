
@interface PLCloudPersistentHistoryMigrator : NSObject {
    PLManagedObjectContext * _managedObjectContext;
    <PLCloudPersistentHistoryMigratorContext> * _migratorContext;
    PLCloudPhotoLibraryUploadTracker * _uploadTracker;
    PLCloudBatchUploader * _uploader;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithUploader:(id)arg1 uploadTracker:(id)arg2 managedObjectContext:(id)arg3 migratorContext:(id)arg4;

- (void).cxx_destruct;
- (bool)checkForExistingMigrationMarker;
- (id)fetchAllPersistentHistoryTransactions;
- (id)fetchChangeHubEventsSinceLastKnownIndex:(unsigned long long)arg1;
- (id)initWithUploader:(id)arg1 uploadTracker:(id)arg2 managedObjectContext:(id)arg3 migratorContext:(id)arg4;
- (long long)migrate;
- (void)migrateToPersistentHistoryIfNecessary;
- (bool)readLastKnownChangeHubIndex:(unsigned long long*)arg1;
- (void)updateSavedTokenFromPersistentHistoryResult:(id)arg1;
- (void)uploadEventResults:(id)arg1;

@end
