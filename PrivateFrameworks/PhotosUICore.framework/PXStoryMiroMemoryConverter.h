
@interface PXStoryMiroMemoryConverter : NSObject {
    <PXDisplayAssetFetchResult> * _curatedAssets;
    NSString * _flexMusicID;
    <PXDisplayAsset> * _keyAsset;
    PHMemory * _memory;
}

@property (nonatomic, readonly) bool containsAnyData;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *curatedAssets;
@property (nonatomic, readonly) NSString *flexMusicID;
@property (nonatomic, readonly) <PXDisplayAsset> *keyAsset;
@property (nonatomic, readonly) PHMemory *memory;

- (void).cxx_destruct;
- (id)_fetchMiroCuratedAssetsInMemory:(id)arg1;
- (void)_loadSavedMetadataForMemory:(id)arg1;
- (bool)containsAnyData;
- (id)createNewRecipeFromMiroMetadataWithError:(id*)arg1;
- (id)curatedAssets;
- (id)description;
- (id)flexMusicID;
- (id)init;
- (id)initWithMemory:(id)arg1 keyAsset:(id)arg2;
- (id)keyAsset;
- (id)memory;

@end
