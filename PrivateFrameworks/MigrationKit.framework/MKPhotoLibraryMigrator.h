
@interface MKPhotoLibraryMigrator : MKMigrator {
    MKPhotoLibraryAlbumMigrator * _albumMigrator;
    NSObject<OS_dispatch_queue> * _assetQueue;
    MKPhotoLibraryAssetDatabase * _db;
    unsigned long long  _interruptionCount;
    bool  _isBusy;
    NSString * _path;
    MKPhotoLibrary * _photoLibrary;
    NSString * _root;
    unsigned long long  _type;
}

@property (nonatomic) MKPhotoLibraryAlbumMigrator *albumMigrator;
@property (nonatomic) bool isBusy;
@property (nonatomic, copy) NSString *path;

- (void).cxx_destruct;
- (void)addImportTime:(id)arg1;
- (void)addToAssetQueue:(id)arg1;
- (id)albumMigrator;
- (void)import;
- (void)import:(id)arg1 identifier:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 total:(unsigned long long)arg5 filename:(id)arg6 collection:(id)arg7 originalFilename:(id)arg8;
- (void)importChunk:(id)arg1 identifier:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 total:(unsigned long long)arg5 filename:(id)arg6 collection:(id)arg7 originalFilename:(id)arg8;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isBusy;
- (id)path;
- (void)photoLibraryDidAddAsset:(id)arg1 identifier:(id)arg2;
- (void)photoLibraryDidInterruptAsset:(id)arg1;
- (void)photoLibraryDidSetIdentifier:(id)arg1 forAsset:(id)arg2;
- (void)photoLibraryWillAddAsset;
- (void)resetInterruptionCount;
- (void)retry;
- (void)setAlbumMigrator:(id)arg1;
- (void)setIsBusy:(bool)arg1;
- (void)setPath:(id)arg1;
- (bool)shouldRetry;

@end
