
@interface PHAssetGeoHashUtilities : NSObject

+ (id)_featureVectorDataWithOneHotAtIndex:(unsigned long long)arg1 featureVectorSize:(unsigned long long)arg2;
+ (unsigned long long)_indexForPOIGeoHash:(id)arg1 geoHashKeySize:(unsigned long long)arg2;
+ (id)_newSystemPhotoLibrary;
+ (id)_poiGeoHashForAsset:(id)arg1 geoHashSize:(unsigned long long)arg2;
+ (unsigned long long)_randomIndexFromCount:(unsigned long long)arg1;
+ (id)_randomPublishedUUIDsFromPublishedUUIDs:(id)arg1 sentUUIDs:(id)arg2;
+ (unsigned long long)_randomSceneIndexForAsset:(id)arg1 sceneLabelMapping:(id)arg2 orderedRemappedSceneLabels:(id)arg3;
+ (id)_sceneLabelsForSceneClassifications:(id)arg1;
+ (id)assetUUIDsFromBiomeStream;
+ (id)assetUUIDsFromBiomeStreamWithPhotoLibrary:(id)arg1;
+ (id)featureVectorByGeoHashForAssetUUID:(id)arg1 geoHashSize:(id)arg2 geoHashKeySize:(id)arg3 sceneLabelMapping:(id)arg4 dryRun:(id)arg5;
+ (id)featureVectorByGeoHashForAssetUUID:(id)arg1 geoHashSize:(id)arg2 geoHashKeySize:(id)arg3 sceneLabelMapping:(id)arg4 dryRun:(id)arg5 photoLibrary:(id)arg6;
+ (id)featureVectorByGeoHashForAssetUUIDs:(id)arg1 geoHashSize:(id)arg2 geoHashKeySize:(id)arg3 sceneLabelMapping:(id)arg4 dryRun:(id)arg5;
+ (id)featureVectorByGeoHashForAssetUUIDs:(id)arg1 geoHashSize:(id)arg2 geoHashKeySize:(id)arg3 sceneLabelMapping:(id)arg4 dryRun:(id)arg5 photoLibrary:(id)arg6;
+ (id)mockReturnDataWithAssetUUIDs:(id)arg1 geoHashKeySize:(id)arg2;
+ (id)poiGeoHashWithGeoHashSize:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3;
+ (id)sceneLabelExclusionList;

@end
