
@interface PLImportFileManager : NSObject {
    PLPhotoLibraryPathManager * _pathManager;
}

+ (bool)isCameraDirectoryFolderName:(id)arg1;
+ (bool)isImportDirectoryFolderName:(id)arg1;

- (void).cxx_destruct;
- (id)_DCIMFolderNameWithNumber:(long long)arg1;
- (id)_dcimDirectory;
- (id)init;
- (id)initWithPathManager:(id)arg1;
- (id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2;
- (bool)removeUnusedDCIMDirectoryAtPath:(id)arg1;
- (id)urlForNewDCIMFolderWithFolderNumber:(long long*)arg1;

@end
