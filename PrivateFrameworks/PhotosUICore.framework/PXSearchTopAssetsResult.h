
@interface PXSearchTopAssetsResult : NSObject <PHPhotoLibraryChangeObserver, PXSearchResultItem> {
    NSArray * _assetUUIDs;
    <PXSearchTopAssetsResultChangeDelegate> * _delegate;
    NSArray * _hiddenObjects;
    NSString * _priorityAssetUUID;
    NSArray * _removedObjects;
    id /* block */  _topAssetFilter;
    PHFetchResult * _topAssetsFetchResult;
}

@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDictionary *debugDictionary;
@property (nonatomic) <PXSearchTopAssetsResultChangeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *hiddenObjects;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly, copy) NSString *priorityAssetUUID;
@property (nonatomic, readonly, copy) NSArray *removedObjects;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ topAssetFilter;
@property (nonatomic, readonly) PHFetchResult *topAssetsFetchResult;

+ (id)_fetchAssetsForAssetUUIDs:(id)arg1;
+ (id)_fetchResultForTopAssets:(id)arg1;
+ (id)sampledAssetUUIDsFrom:(id)arg1 numberOfTopAssets:(long long)arg2 maxNumberToSample:(long long)arg3 rangeToSample:(long long)arg4;
+ (id)sortedPreviewAssetsFrom:(id)arg1 priorityAssetUUID:(id)arg2 numberOfTopAssets:(long long)arg3;

- (void).cxx_destruct;
- (void)_curateThumbnailAssets;
- (void)_filterTopAssets:(id)arg1;
- (void)_notifyDelegateOfAssetChanges:(id)arg1 newCuration:(bool)arg2;
- (bool)_shouldRecurateForChangeDetails:(id)arg1;
- (id)assetUUIDs;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDictionary;
- (id)delegate;
- (id)hiddenObjects;
- (id)init;
- (id)initWithAssetUUIDs:(id)arg1 priorityAssetUUID:(id)arg2;
- (unsigned long long)itemType;
- (unsigned long long)numberOfTopAssets;
- (void)photoLibraryDidChange:(id)arg1;
- (id)priorityAssetUUID;
- (id)removedObjects;
- (void)setDelegate:(id)arg1;
- (void)setTopAssetFilter:(id /* block */)arg1;
- (id /* block */)topAssetFilter;
- (id)topAssetsFetchResult;

@end
