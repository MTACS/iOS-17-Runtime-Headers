
@protocol PLFileSystemMetadataPersistence <NSObject>

@required

- (bool)isValidForPersistence;
- (void)persistMetadataToFileSystemWithPathManager:(PLPhotoLibraryPathManager *)arg1;
- (void)removePersistedFileSystemDataWithPathManager:(PLPhotoLibraryPathManager *)arg1;

@end
