
@interface PXMemoryInfo : NSObject <NSCopying, PXSelectionAssetContainer> {
    PHAssetCollection * _assetCollection;
    PHFetchResult * _keyAssetFetchResult;
    NSString * _localizedDateText;
    NSString * _localizedTitle;
    PHAsset * _prefetchedPrimaryAsset;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) unsigned long long category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFavorite;
@property (nonatomic, readonly) PHFetchResult *keyAssetFetchResult;
@property (nonatomic, readonly) NSString *localizedDateText;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) PHMemory *memory;
@property (nonatomic, readonly) PHAsset *prefetchedPrimaryAsset;
@property (nonatomic, readonly) PHAsset *primaryAsset;
@property (nonatomic, readonly) bool px_isEmpty;
@property (nonatomic, readonly) double score;
@property (readonly) Class superclass;

+ (void)_updateTitleForMemoryInfo:(id)arg1 withAssetCollection:(id)arg2;
+ (id)fastMemoryInfoWithMemory:(id)arg1;
+ (id)memoryInfoWithAssetCollection:(id)arg1 keyAssetFetchResult:(id)arg2;
+ (id)memoryInfoWithAssetCollection:(id)arg1 prefetchedPrimaryAsset:(id)arg2;
+ (id)memoryInfoWithMemory:(id)arg1;

- (void).cxx_destruct;
- (id)assetCollection;
- (unsigned long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isFavorite;
- (id)keyAssetFetchResult;
- (id)localizedDateText;
- (id)localizedTitle;
- (id)memory;
- (id)memoryInfoWithUpdatedKeyAssetFetchResult:(id)arg1;
- (id)prefetchedPrimaryAsset;
- (id)primaryAsset;
- (id)px_fetchContainedAssets;
- (bool)px_isEmpty;
- (double)score;

@end
