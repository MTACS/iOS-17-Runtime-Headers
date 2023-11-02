
@interface PXPhotosAssetsFetcher : NSObject <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _resultsByAssetCollectionByConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

+ (id)sharedFetcherForPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)_fetchConfigurationForCurationWithReferencePersons:(id)arg1 curationType:(long long)arg2 options:(unsigned long long)arg3 sortDescriptors:(id)arg4 libraryFilter:(long long)arg5;
- (id)_fetchConfigurationForKeyAssetWithReferenceAsset:(id)arg1 referencePersons:(id)arg2 curated:(bool)arg3 libraryFilter:(long long)arg4;
- (id)_fetchConfigurationWithFilterPredicate:(id)arg1 inclusionPredicate:(id)arg2 includeUnsavedSyndicatedAssets:(bool)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptors:(id)arg5 reverseSortOrder:(bool)arg6 hideHiddenAssets:(bool)arg7 fetchPropertySets:(id)arg8 libraryFilter:(long long)arg9;
- (id)_fetchKeyAssetsInAssetCollection:(id)arg1 curated:(bool)arg2 referenceAsset:(id)arg3 referencePersons:(id)arg4 libraryFilter:(long long)arg5;
- (id)_importantFetchNameForCollectionSubtype:(long long)arg1;
- (void)_storeExistingFetchResult:(id)arg1 forAssetCollection:(id)arg2 withFetchConfiguration:(id)arg3;
- (void)clearFetchResultsForAssetCollection:(id)arg1;
- (void)clearFetchResultsForAssetCollections:(id)arg1;
- (void)dealloc;
- (id)existingCuratedAssetsFetchResultForAssetCollection:(id)arg1 referencePersons:(id)arg2 curationType:(long long)arg3 options:(unsigned long long)arg4 libraryFilter:(long long)arg5;
- (id)existingFetchResultForAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 includeUnsavedSyndicatedAssets:(bool)arg4 fetchLimit:(unsigned long long)arg5 sortDescriptors:(id)arg6 reverseSortOrder:(bool)arg7 hideHiddenAssets:(bool)arg8 fetchPropertySets:(id)arg9 libraryFilter:(long long)arg10;
- (id)existingKeyAssetsFetchResultForAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 curated:(bool)arg4 libraryFilter:(long long)arg5;
- (id)fetchAssetsInAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 includeUnsavedSyndicatedAssets:(bool)arg4 fetchLimit:(unsigned long long)arg5 sortDescriptors:(id)arg6 reverseSortOrder:(bool)arg7 hideHiddenAssets:(bool)arg8 fetchPropertySets:(id)arg9 libraryFilter:(long long)arg10;
- (id)fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2 curationType:(long long)arg3 options:(unsigned long long)arg4 sortDescriptors:(id)arg5 libraryFilter:(long long)arg6;
- (id)fetchCuratedKeyAssetsInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3 libraryFilter:(long long)arg4;
- (id)fetchKeyAssetsInAssetCollection:(id)arg1 libraryFilter:(long long)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;

@end
