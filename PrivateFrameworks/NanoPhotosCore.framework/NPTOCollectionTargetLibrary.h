
@interface NPTOCollectionTargetLibrary : NSObject {
    long long  _collectionTarget;
    NRDevice * _device;
    NSDictionary * _libraryAssetCollections;
    id  _libraryCollectionTargetMapChangeObserver;
    NPTOLibraryInfo * _libraryInfo;
    NSHashTable * _observers;
    id  _syncNeededChangeObserver;
    id  _syncingChangeObserver;
}

@property (nonatomic, readonly) long long collectionTarget;
@property (nonatomic, readonly) NRDevice *device;
@property (nonatomic, readonly) NSDate *lastUpdatedDate;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)assetCollections;
- (long long)collectionTarget;
- (unsigned long long)countOfAssetsInAssetCollection:(id)arg1 options:(id)arg2;
- (unsigned long long)countOfAssetsWithOptions:(id)arg1;
- (id)device;
- (unsigned long long)expectedCountOfAssets;
- (unsigned long long)expectedCountOfAssetsInAssetCollection:(id)arg1;
- (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;
- (id)fetchAssetsWithOptions:(id)arg1;
- (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
- (id)initWithCollectionTarget:(long long)arg1 device:(id)arg2;
- (bool)isSyncNeeded;
- (bool)isSyncingAssets;
- (bool)isSyncingAssetsInAssetCollection:(id)arg1;
- (id)lastUpdatedDate;
- (id)metadataForAssetCollection:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
