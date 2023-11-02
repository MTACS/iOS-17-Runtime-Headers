
@interface MKPhotoLibraryAlbumMigrator : MKMigrator {
    MKPhotoLibraryAssetDatabase * _db;
}

- (void).cxx_destruct;
- (void)import;
- (id)init;
- (void)setCollections;
- (void)setIdentifier:(id)arg1 forAsset:(id)arg2;

@end
