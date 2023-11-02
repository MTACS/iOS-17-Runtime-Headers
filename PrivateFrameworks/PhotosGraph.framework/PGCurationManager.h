
@interface PGCurationManager : NSObject {
    PGCurationCache * _cache;
    PGCurationCriteriaFactory * _curationCriteriaFactory;
    NSObject<OS_os_log> * _curationLoggingConnection;
    PHPhotoLibrary * _photoLibrary;
    PFSceneGeography * _sceneGeography;
}

@property (nonatomic, readonly) PGCurationCache *cache;
@property (nonatomic, readonly) PGCurationCriteriaFactory *curationCriteriaFactory;
@property (nonatomic, readonly) NSObject<OS_os_log> *curationLoggingConnection;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PFSceneGeography *sceneGeography;

+ (id)_filterAssets:(id)arg1 withPositiveLocations:(id)arg2 negativeLocations:(id)arg3 maximumDistance:(double)arg4;
+ (id)_filteredAssetsWithFaceFilter:(unsigned long long)arg1 forAssets:(id)arg2;
+ (bool)areAssetsInteresting:(id)arg1 minimumNumberOfCuratedAssets:(unsigned long long)arg2 duration:(unsigned long long)arg3;
+ (id)assetPropertySetsForCuration;
+ (id)assetsBeautifier;
+ (double)contentScoreForAssets:(id)arg1;
+ (id)dedupedAssetsWithAssets:(id)arg1;
+ (id)defaultAssetSortDescriptors;
+ (id)dejunkAndDedupeItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
+ (id)filterAssets:(id)arg1 inMomentNodes:(id)arg2 forAreaNodes:(id)arg3 withMaximumDistance:(double)arg4;
+ (id)filterAssets:(id)arg1 inMomentNodes:(id)arg2 forCityNodes:(id)arg3 withMaximumDistance:(double)arg4;
+ (id)filterAssets:(id)arg1 inMomentNodes:(id)arg2 forLocationNodes:(id)arg3 withMaximumDistance:(double)arg4;
+ (id)filterAssets:(id)arg1 inMomentNodes:(id)arg2 forStateNodes:(id)arg3 withMaximumDistance:(double)arg4;
+ (id)filterAssets:(id)arg1 withLocation:(id)arg2 maximumDistance:(double)arg3;
+ (id)filterAssets:(id)arg1 withLocations:(id)arg2 maximumDistance:(double)arg3;
+ (id)filteredAssetsFromAssets:(id)arg1 withContextualAssetLocalIdentifiers:(id)arg2 approximateTimeDistance:(double)arg3;
+ (unsigned long long)maximumNumberOfItemsForDuration:(unsigned long long)arg1 withTotalNumberOfItems:(unsigned long long)arg2;
+ (unsigned long long)maximumNumberOfItemsForDuration:(unsigned long long)arg1 withTotalNumberOfItems:(unsigned long long)arg2 spanningNumberOfDays:(double)arg3;
+ (unsigned long long)minimumNumberOfItemsForDuration:(unsigned long long)arg1 withMaximumNumberOfItems:(unsigned long long)arg2;
+ (id)representativeAssetsForAssetCollection:(id)arg1 curationContext:(id)arg2 progressBlock:(id /* block */)arg3;
+ (id)representativeAssetsForAssets:(id)arg1 extendedCuratedAssets:(id)arg2 progressBlock:(id /* block */)arg3;
+ (id)representativeAssetsForAssets:(id)arg1 progressBlock:(id /* block */)arg2;
+ (id)sceneInfoWithAsset:(id)arg1 curationSession:(id)arg2;
+ (id)summaryClusteringForDuration:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_bestAssetInSummarizedAssets:(id)arg1 forReferencePersonLocalIdentifiers:(id)arg2;
- (id)_bestAssetsInAssets:(id)arg1 forReferencePersonLocalIdentifiers:(id)arg2 minimumRatioOfReferencePersonsPerAsset:(double)arg3 progressBlock:(id /* block */)arg4;
- (id)_contextualBestAssetInAssets:(id)arg1;
- (id)_curatedKeyAssetIdentifierForCollectionUUID:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 curatedKeyAsset:(id*)arg5 curationContext:(id)arg6;
- (id)_extendedAssetsForCurationForAssets:(id)arg1 matchingAssetsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_filteredAssetsForAssets:(id)arg1 inMoments:(id)arg2 keepFavorites:(bool)arg3;
- (id)_firstBestFacedAssetInAssetCluster:(id)arg1 facesByAssetIdentifiers:(id)arg2;
- (id)_libraryDateInterval;
- (id)_timeBasedAssetClustersForAssets:(id)arg1 maximumClusterCount:(unsigned long long)arg2;
- (id)bestAssetForAssetFeeder:(id)arg1 options:(id)arg2;
- (id)bestAssetForAssetFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3;
- (id)bestAssetInAssets:(id)arg1 forReferencePersonLocalIdentifiers:(id)arg2 minimumNumberOfCommonPeople:(unsigned long long)arg3 forKeyAsset:(bool)arg4 forMemories:(bool)arg5 allowGuestAsset:(bool)arg6;
- (id)bestAssetInAssets:(id)arg1 forReferencePersonLocalIdentifiers:(id)arg2 requiredMinimumNumberOfReferencePersons:(unsigned long long)arg3 forMemories:(bool)arg4 allowGuestAsset:(bool)arg5 wantsGoodSquareCropScore:(bool)arg6;
- (id)bestAssetInAssets:(id)arg1 options:(id)arg2;
- (id)bestAssetsForAssetFeeder:(id)arg1 options:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)cache;
- (double)contentScoreForAssetCollection:(id)arg1 curationContext:(id)arg2;
- (double)contentScoreForAssetFeeder:(id)arg1;
- (id)criteriaForKeyAssetCurationWithAssetCollection:(id)arg1 graph:(id)arg2 options:(id)arg3 curationContext:(id)arg4;
- (id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 referencePersonLocalIdentifiers:(id)arg3 curationContext:(id)arg4 progressBlock:(id /* block */)arg5;
- (id)curatedAssetsForAssetCollection:(id)arg1 options:(id)arg2 curationContext:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)curatedAssetsForPersonLocalIdentifier:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)curatedKeyAssetForAssetCollection:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 curationContext:(id)arg5;
- (id)curatedKeyAssetForCollectionUUID:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 curationContext:(id)arg5;
- (id)curatedKeyAssetIdentifierForCollectionUUID:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 curationContext:(id)arg5;
- (id)curationCriteriaFactory;
- (id)curationLoggingConnection;
- (id)defaultAssetFetchOptions;
- (id)defaultAssetFetchOptionsForMemories;
- (id)defaultAssetFetchOptionsForMemoriesWithoutPrefetch;
- (id)dejunkAndDedupeAssetsInAssetCollection:(id)arg1 options:(id)arg2 curationContext:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)fetchAssetWithLocalIdentifier:(id)arg1;
- (id)fetchAssetsSortedByDateWithLocalIdentifiers:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)invalidateCurationCacheForMomentUUIDs:(id)arg1;
- (bool)isAssetCollectionInteresting:(id)arg1 curationContext:(id)arg2;
- (bool)isAssetFeederInteresting:(id)arg1 withAlternateJunking:(bool)arg2 smart:(bool)arg3;
- (id)memoryCuratedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 withContextualAssetLocalIdentifiers:(id)arg3 minimumProportion:(double)arg4 graph:(id)arg5 curationContext:(id)arg6 progressBlock:(id /* block */)arg7;
- (id)memoryCuratedAssetsForAssets:(id)arg1 duration:(unsigned long long)arg2 withContextualAssetLocalIdentifiers:(id)arg3 minimumProportion:(double)arg4 graph:(id)arg5 curationContext:(id)arg6 progressBlock:(id /* block */)arg7;
- (unsigned long long)optimalDurationForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 options:(id)arg3 curationContext:(id)arg4;
- (id)photoLibrary;
- (id)sceneGeography;

@end
