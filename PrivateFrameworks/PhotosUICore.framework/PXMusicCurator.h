
@interface PXMusicCurator : NSObject

+ (id)_fetchFlexMusicAssetsWithIdentifiers:(id)arg1;
+ (id)_invalidPhotoAnalysisClientError;
+ (id)_parseAppleMusicAssetsFromJSONArray:(id)arg1 photoLibrary:(id)arg2;
+ (id)_parseAppleMusicCurationInfoFromJSONDictionary:(id)arg1;
+ (id)_requestDebugInformationForAppleMusicAsset:(id)arg1 assetCollection:(id)arg2 resultHandler:(id /* block */)arg3;
+ (id)_requestDebugInformationForFlexMusicAsset:(id)arg1 assetCollection:(id)arg2 resultHandler:(id /* block */)arg3;
+ (id)_requestQueue;
+ (id)bestLocallyAvailableAudioAssetForAssetCollection:(id)arg1;
+ (id)log;
+ (id)requestAppleMusicCurationForAssetCollection:(id)arg1 recentlyUsedAdamIDs:(id)arg2 resultHandler:(id /* block */)arg3;
+ (id)requestAudioAssetFetchResultForAdamIDs:(id)arg1 requestOptions:(id)arg2 photoLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)requestAudioAssetIdentifierForPurchasedSongID:(id)arg1 requestOptions:(id)arg2 photoLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)requestDebugInformationForAudioAsset:(id)arg1 assetCollection:(id)arg2 resultHandler:(id /* block */)arg3;
+ (id)requestFlexMusicCurationForAssetCollection:(id)arg1 recentlyUsedFlexSongIDs:(id)arg2 resultHandler:(id /* block */)arg3;

@end
