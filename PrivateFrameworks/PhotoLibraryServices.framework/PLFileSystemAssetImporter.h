
@interface PLFileSystemAssetImporter : NSObject {
    NSMutableDictionary * _existingOIDsByUUID;
    NSMutableSet * _existingUUIDs;
    NSMutableDictionary * _existingUUIDsByUppercasePath;
    bool  _hasProcessedAnyAssets;
    NSString * _libraryBundlePath;
    PLLibraryServicesManager * _libraryServicesManager;
    PLPhotoLibrary * _photoLibrary;
    NSString * _photoLibraryStoreUUID;
    NSMutableIndexSet * _thumbIndexes;
    unsigned long long  _thumbnailBatchFetchSize;
}

@property (nonatomic, retain) NSMutableDictionary *existingOIDsByUUID;
@property (nonatomic, retain) NSMutableSet *existingUUIDs;
@property (nonatomic, retain) NSMutableDictionary *existingUUIDsByUppercasePath;
@property (nonatomic) unsigned long long thumbnailBatchFetchSize;

- (void).cxx_destruct;
- (id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2 assetUUID:(id)arg3 isPlaceholder:(bool)arg4;
- (id)_assetAdjustmentsIfExistsForAsset:(id)arg1;
- (bool)_setupAdjustmentsFromAdjustmentFileForAsset:(id)arg1;
- (bool)_setupPhotoAsset:(id)arg1 withURL:(id)arg2 isPlaceholder:(bool)arg3 hasVideoComplementResource:(bool)arg4;
- (bool)_setupPhotoAsset:(id)arg1 withURL:(id)arg2 unknownType:(bool)arg3 isPlaceholder:(bool)arg4 hasVideoComplementResource:(bool)arg5;
- (bool)_setupPhotoAssetAsPhotoIrisIfNeeded:(id)arg1 hasVideoComplementResource:(bool)arg2;
- (bool)_setupUnknownAsset:(id)arg1 withURL:(id)arg2;
- (bool)_setupVideoAsset:(id)arg1 withURL:(id)arg2;
- (id)addAssetWithURLs:(id)arg1 assetPayload:(id)arg2 forceInsert:(bool)arg3 forceUpdate:(bool)arg4 fixAddedDate:(bool)arg5;
- (void)addAvailableThumbnailIndex:(unsigned long long)arg1;
- (id)assetURLisInDatabase:(id)arg1 deferredPreviewURL:(id)arg2;
- (void)dealloc;
- (id)existingOIDsByUUID;
- (id)existingUUIDs;
- (id)existingUUIDsByUppercasePath;
- (id)initWithPhotoLibrary:(id)arg1 libraryServicesManager:(id)arg2;
- (id)libraryBundlePathWithPhotoLibrary:(id)arg1;
- (unsigned long long)nextThumbnailIndex;
- (void)setExistingOIDsByUUID:(id)arg1;
- (void)setExistingUUIDs:(id)arg1;
- (void)setExistingUUIDsByUppercasePath:(id)arg1;
- (void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2;
- (void)setThumbnailBatchFetchSize:(unsigned long long)arg1;
- (unsigned long long)thumbnailBatchFetchSize;

@end
