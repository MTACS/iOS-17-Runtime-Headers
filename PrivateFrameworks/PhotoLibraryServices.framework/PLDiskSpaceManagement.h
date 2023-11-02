
@interface PLDiskSpaceManagement : NSObject

+ (long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(bool)arg2;
+ (void)_processPurgeWithPhotoLibrary:(id)arg1 shouldFreeSpace:(bool)arg2 shouldKeepRecentlyViewedAssets:(bool)arg3 bytesToPurge:(unsigned long long)arg4 bytesProcessed:(unsigned long long*)arg5;
+ (unsigned long long)_purgeAssetsFromFetchRequest:(id)arg1 photoLibrary:(id)arg2 recentlyUsedGUIDS:(id)arg3 recentlyUsedAssetObjectIDs:(id)arg4 shouldFreeSpace:(bool)arg5 bytesToPurge:(unsigned long long)arg6;
+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromCloudSharingCacheDataDirectoryShouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromPhotoMetadataDirectoryShouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3 skipAssets:(id)arg4;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(bool)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(bool)arg2 shouldKeepRecentlyViewedAssets:(bool)arg3 fromPhotoLibrary:(id)arg4;

@end
