
@interface PGMusicCurator : NSObject

+ (id)curateMusicForFeatures:(id)arg1 context:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
+ (id)emptyCuration;
+ (id)extractMusicCurationFeaturesForAssets:(id)arg1 graph:(id)arg2 context:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
+ (id)extractMusicCurationFeaturesForEnrichedMemory:(id)arg1 graph:(id)arg2 context:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
+ (id)extractMusicCurationFeaturesForMemory:(id)arg1 graph:(id)arg2 context:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
+ (void)fetchSongAdamIDsForPurchasedSongID:(id)arg1 inflationContext:(id)arg2 progressReport:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)fetchSongDisplayMetadataJSONForAdamIDs:(id)arg1 inflationContext:(id)arg2 progressReporter:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)generateDebugInformationForAssetCollection:(id)arg1 graph:(id)arg2 context:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
+ (id)generateDebugInformationForSongWithAdamID:(id)arg1 context:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
+ (void)inflateDisplayMetadataForMusicCuration:(id)arg1 inflationContext:(id)arg2 progressReporter:(id)arg3 completionHandler:(id /* block */)arg4;

- (id)init;

@end
