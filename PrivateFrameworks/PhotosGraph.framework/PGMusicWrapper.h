
@interface PGMusicWrapper : NSObject

+ (id)_musicCurationFeaturesWithFeatureExtractionContext:(id)arg1 assetFetchResult:(id)arg2 graphManager:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
+ (id)_musicCurationFeaturesWithFeatureExtractionContext:(id)arg1 memory:(id)arg2 graphManager:(id)arg3 progressReporter:(id)arg4 error:(id*)arg5;
+ (bool)cacheRemoveAllForPhotoLibrary:(id)arg1 error:(id*)arg2;
+ (id)cacheStatusWithPhotoLibrary:(id)arg1 error:(id*)arg2;
+ (void)fetchMusicCatalogAdamIDsForPurchasedSongID:(id)arg1 inflationContext:(id)arg2 progressReporter:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)fetchSongDisplayMetadataJSONForAdamIDs:(id)arg1 inflationContext:(id)arg2 progressReporter:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)generateFlexMusicCurationDebugInformationForAssetCollection:(id)arg1 graphManager:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
+ (id)generateFlexMusicCurationDebugInformationForSongWithUID:(id)arg1 graphManager:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
+ (id)generateMusicCurationDebugInformationForAssetCollection:(id)arg1 graphManager:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
+ (id)generateMusicCurationDebugInformationForSongWithAdamID:(id)arg1 graphManager:(id)arg2 progressReporter:(id)arg3 error:(id*)arg4;
+ (void)requestFlexMusicCurationForAssetCollection:(id)arg1 curationOptions:(id)arg2 graphManager:(id)arg3 reply:(id /* block */)arg4;
+ (void)requestFlexMusicCurationForAssetFetchResult:(id)arg1 curationOptions:(id)arg2 graphManager:(id)arg3 reply:(id /* block */)arg4;
+ (void)requestMusicCurationForAssetCollection:(id)arg1 curationOptions:(id)arg2 graphManager:(id)arg3 reply:(id /* block */)arg4;
+ (void)requestMusicCurationForAssetFetchResult:(id)arg1 curationOptions:(id)arg2 graphManager:(id)arg3 reply:(id /* block */)arg4;

@end
