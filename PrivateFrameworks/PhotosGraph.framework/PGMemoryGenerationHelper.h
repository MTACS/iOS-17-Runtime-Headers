
@interface PGMemoryGenerationHelper : NSObject

+ (id)assetFetchResultForMomentNodes:(id)arg1 inLocationOrAreaNode:(id)arg2 requireInteresting:(bool)arg3 curationManager:(id)arg4 progressReporter:(id)arg5;
+ (id)assetLocalIdentifiersFromAssets:(id)arg1;
+ (id)assetUUIDsFromAssets:(id)arg1;
+ (bool)dates:(id)arg1 passSpreadicityWithMinimumCardinal:(unsigned long long)arg2 minimumTimeInterval:(double)arg3;
+ (id)feederForMemoriesWithAssetCollection:(id)arg1 memoryCurationSession:(id)arg2 graph:(id)arg3 allowGuestAsset:(bool)arg4;
+ (id)feederForMemoriesWithAssetFetchResult:(id)arg1 memoryCurationSession:(id)arg2 graph:(id)arg3;
+ (id)feederForMemoriesWithAssetLocalIdentifiers:(id)arg1 memoryCurationSession:(id)arg2 graph:(id)arg3 allowGuestAsset:(bool)arg4;
+ (id)feederForMemoriesWithFeeder:(id)arg1 topTierAestheticScore:(double)arg2 didFeederChange:(bool*)arg3 curationContext:(id)arg4;
+ (id)keyAssetFetchResultForHighlightGroupUUIDs:(id)arg1 curationManager:(id)arg2 allowGuestAsset:(bool)arg3;
+ (bool)prepareAssets:(id)arg1 forMemoriesWithTopTierAestheticScore:(double)arg2 curationContext:(id)arg3;
+ (id)scoringContextForMemoriesWithAssets:(id)arg1 withTopTierAestheticScore:(double)arg2;

@end
