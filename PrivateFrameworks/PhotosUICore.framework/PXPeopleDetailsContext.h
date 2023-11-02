
@interface PXPeopleDetailsContext : PXPhotosDetailsContext <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> * _fetchingQueue;
    PHFetchResult * _keyFaceAssetFetchResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHFetchResult *keyFaceAssetFetchResult;
@property (readonly) Class superclass;

+ (id)photosDetailsContextForAsset:(id)arg1 parentContext:(id)arg2;
+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 keyAssets:(id)arg3 enableCuration:(bool)arg4 enableKeyAssets:(bool)arg5 viewSourceOrigin:(long long)arg6;
+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 viewSourceOrigin:(long long)arg3;

- (void).cxx_destruct;
- (id)_displayTitleForPeople:(id)arg1;
- (id)_fetchKeyFaceAssetFetchResultFromPerson:(id)arg1;
- (void)_updateKeyFaceAssetFetchResult;
- (void)didPerformChanges;
- (id)initWithPeople:(id)arg1 parentContext:(id)arg2;
- (id)initWithPeople:(id)arg1 parentContext:(id)arg2 assetCollectionsFetch:(id)arg3 ignoreSharedLibraryFilters:(bool)arg4;
- (id)initWithPeople:(id)arg1 parentContext:(id)arg2 ignoreSharedLibraryFilters:(bool)arg3;
- (id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4;
- (id)keyFaceAssetFetchResult;
- (void)performChanges:(id /* block */)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setKeyFaceAssetFetchResult:(id)arg1;
- (bool)shouldUseKeyFace;

@end
