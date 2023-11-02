
@interface ICQUICoreSpotlightQueryHelper : NSObject

+ (id)defaultFetchedAttributes;
+ (void)deleteiCloudDriveItem:(id)arg1;
+ (void)deleteiCloudDriveItems:(id)arg1;
+ (void)fetchTrashedItemsWithResults:(id)arg1 minSizeInMegabytes:(id)arg2 completion:(id /* block */)arg3;
+ (void)fetchiCloudDriveItemsUsingThresholds:(id)arg1 shouldCheckTrash:(bool)arg2 completion:(id /* block */)arg3;
+ (id)filterItems:(id)arg1 usingTrashedItems:(id)arg2;
+ (void)processFoundResults:(id)arg1 minSizeInMegabytes:(id)arg2 shouldCheckTrash:(bool)arg3 completion:(id /* block */)arg4;
+ (id)queryForMinimumSizeInMegabytes:(id)arg1;
+ (id)thresholdsForLargeFiles;
+ (id)totalSizeStringForItems:(id)arg1;
+ (void)updateThresholdsForLargeFilesWithDictionary:(id)arg1;

@end
