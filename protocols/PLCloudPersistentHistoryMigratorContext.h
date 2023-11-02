
@protocol PLCloudPersistentHistoryMigratorContext

@required

- (NSString *)readLocalVersion;
- (id)readMigrationMarker;
- (void)resetSyncDueToMigrationMarker;
- (void)saveCloudTrackerTokenObject:(NSData *)arg1;
- (void)setLocalVersion:(NSString *)arg1;
- (void)setMigratedLocalVersion:(NSString *)arg1;
- (void)setMigrationMarker:(id)arg1;
- (void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2 inLibrary:(PLPhotoLibrary *)arg3;

@end
