
@interface PUStorageManagementUtility : NSObject {
    NSNumber * _cloudStorageTotalBytes;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, retain) NSNumber *cloudStorageTotalBytes;
@property (nonatomic, readonly) unsigned long long cloudStorageTotalBytesSize;
@property (nonatomic, readonly) bool isCPLEnabled;
@property (nonatomic, readonly) bool isCPLInExitMode;
@property (nonatomic, readonly) bool isDeletableItemsInTrash;
@property (nonatomic, readonly) bool isOptimizedModeOn;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) bool shouldHideCPL;
@property (nonatomic, readonly) bool shouldShowCloudStorageTip;
@property (nonatomic, readonly) NSNumber *sizeForRecentlyDeletedItems;
@property (nonatomic, readonly) unsigned long long totalReclaimableSizeFromPurgingVideoClips;

+ (id)_predicateForPersonalLibraryAssets;
+ (unsigned long long)cloudStorageTotalBytesSizeFromCloudQuotaDictionary:(id)arg1;
+ (id)predicateForMinimumVideoSize;
+ (id)predicateForUploadedAssetFetch;
+ (id)storageTipAssetCollectionForType:(unsigned long long)arg1 photoLibrary:(id)arg2;
+ (id)storageTipAssetFetchOptionsForType:(unsigned long long)arg1 photoLibrary:(id)arg2;
+ (id)stringWithSizeUnitForValue:(id)arg1;

- (void).cxx_destruct;
- (id)_assetsInTrash;
- (id)_defaultVideoAssetFetchOptionsWithSortOrder:(bool)arg1;
- (id)_deleteableVideoAssets;
- (id)cloudStorageTotalBytes;
- (unsigned long long)cloudStorageTotalBytesSize;
- (void)enableCPLWithCompletionBlock:(id /* block */)arg1;
- (void)enableOptimizedMode:(bool)arg1;
- (void)expungeRecentlyDeletedItemsWithCompletionBlock:(id /* block */)arg1;
- (id)fetchVideoAssetsBySizeWithSortOrder:(bool)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)isCPLEnabled;
- (bool)isCPLInExitMode;
- (bool)isDeletableItemsInTrash;
- (bool)isOptimizedModeOn;
- (id)photoLibrary;
- (void)purgeableSizeAndOriginalsInLibrary:(id /* block */)arg1;
- (void)setCloudStorageTotalBytes:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (bool)shouldHideCPL;
- (bool)shouldShowCloudStorageTip;
- (id)significantItems;
- (id)sizeForRecentlyDeletedItems;
- (unsigned long long)totalReclaimableSizeFromPurgingVideoClips;

@end
