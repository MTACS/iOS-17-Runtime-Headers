
@interface PLDataMigratorSupport : NSObject {
    PLPhotoLibraryPathManager * _pathManager;
}

@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;

- (void).cxx_destruct;
- (id)initWithPathManager:(id)arg1;
- (id)pathManager;
- (void)recordDataMigrationInfo:(id)arg1;
- (void)removeAsidePhotosDatabase;
- (void)removeInternalMemoriesRelatedSnapshotDirectory;
- (void)removeLegacyMetadataFiles;
- (void)removeModelInterestDatabase;

@end
