
@interface PLCloudPhotoLibraryHelper : NSObject

+ (void)_donateTipsAppEnablementSignal;
+ (void)disableCPL:(id /* block */)arg1;
+ (void)enableCPL:(id /* block */)arg1;
+ (void)setShouldClearPurgeableResourcesOnce:(bool)arg1;
+ (void)setShouldHandleOptimizeModeChange:(bool)arg1;
+ (void)setShouldMarkPurgeableResourcesOnce:(bool)arg1;
+ (void)setShouldRepushAssetsWithImportedByBundleIdentifier:(bool)arg1;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:(bool)arg1;
+ (void)setShouldRepushVideoAssetsMetadataOnce:(bool)arg1;
+ (void)setShouldSendOptimizeFeedbackOnce:(bool)arg1;
+ (bool)shouldClearPurgeableResourcesOnce;
+ (bool)shouldHandleOptimizeModeChange;
+ (bool)shouldMarkPurgeableResourcesOnce;
+ (bool)shouldRepushAssetsWithImportedByBundleIdentifier;
+ (bool)shouldRepushMasterWithMissingMediaMetadataOnce;
+ (bool)shouldRepushVideoAssetsMetadataOnce;
+ (bool)shouldSendOptimizeFeedbackOnce;

@end
