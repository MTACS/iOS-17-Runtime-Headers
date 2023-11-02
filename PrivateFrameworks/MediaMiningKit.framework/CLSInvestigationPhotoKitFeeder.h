
@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder {
    NSArray * _allItems;
    PHAssetCollection * _assetCollection;
    PHFetchOptions * _assetFetchOptions;
    unsigned long long  _assetPrefetchOptions;
    CLSCurationContext * _curationContext;
    PHFetchResult * _fetchResult;
    unsigned long long  _numberOfAllPeople;
    NSSet * _shareParticipants;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly, copy) PHFetchOptions *assetFetchOptions;
@property (nonatomic, readonly) PHFetchResult *assetFetchResult;
@property (nonatomic, readonly) double behavioralScore;
@property (nonatomic, readonly) bool hasBestScoringAssets;
@property (nonatomic, readonly) bool hasFavoritedAssets;
@property (nonatomic, readonly) bool hasNonJunkAssets;
@property (nonatomic, readonly) bool hasPeople;
@property (nonatomic, readonly) unsigned long long numberOfAllPeople;
@property (nonatomic, readonly) unsigned long long numberOfRegularGemItems;
@property (nonatomic, readonly) unsigned long long numberOfShinyGemItems;
@property (nonatomic, readonly) NSSet *shareParticipants;

+ (id)feederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3 curationContext:(id)arg4;
+ (id)feederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3 curationContext:(id)arg4 sharedLibraryEnabled:(bool)arg5;

- (void).cxx_destruct;
- (void)_prefetchShareParticipants;
- (bool)_shouldPrefetchCurationInformation;
- (id)allItems;
- (id)approximateLocation;
- (id)assetCollection;
- (id)assetFetchOptions;
- (id)assetFetchResult;
- (double)behavioralScore;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)hasBestScoringAssets;
- (bool)hasFavoritedAssets;
- (bool)hasNonJunkAssets;
- (bool)hasPeople;
- (id)initWithAssetCollection:(id)arg1 assetFetchOptions:(id)arg2 feederPrefetchOptions:(id)arg3 curationContext:(id)arg4;
- (id)initWithAssetFetchResult:(id)arg1 curationContext:(id)arg2;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)localEndDate;
- (id)localEndDateComponents;
- (id)localStartDate;
- (id)localStartDateComponents;
- (unsigned long long)numberOfAllPeople;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfRegularGemItems;
- (unsigned long long)numberOfShinyGemItems;
- (id)privateItems;
- (id)shareParticipants;
- (id)sharedItems;
- (id)universalEndDate;
- (id)universalStartDate;

@end
