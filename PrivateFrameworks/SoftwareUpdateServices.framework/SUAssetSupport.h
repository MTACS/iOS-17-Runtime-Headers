
@interface SUAssetSupport : NSObject

+ (id)OSVersionComponent:(unsigned long long)arg1 osVersion:(id)arg2;
+ (void)_cleanupAllAssetsOfType:(id)arg1;
+ (id)_gestaltValueForKey:(struct __CFString { }*)arg1;
+ (void)_queue_cleanupAllInstalledAssetsOfType:(id)arg1;
+ (id)assetDownloadOptionsForDocumentation;
+ (id)assetDownloadOptionsFromMetadata:(id)arg1 descriptor:(id)arg2 priority:(int)arg3 forBrain:(bool)arg4;
+ (void)cleanupAllInstalledAssets:(id /* block */)arg1;
+ (void)cleanupAllSoftwareUpdateAndRelatedAssets;
+ (void)cleanupAllSoftwareUpdateAssets;
+ (id)copyInstalledAssets;
+ (id)copySUAssetForAssetID:(id)arg1;
+ (id)copySuAssetInCatalogMatchingDescriptor:(id)arg1;
+ (id)copySuAssetInCatalogMatchingDescriptor:(id)arg1 exactAssetIdMatch:(bool)arg2 installedOnly:(bool)arg3;
+ (id)copySuAssetInstalledExactlyMatchingDescriptor:(id)arg1;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)arg1;
+ (id)filterSuAssets:(id)arg1 MatchingDescriptor:(id)arg2;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(bool)arg2 error:(id*)arg3;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(bool)arg2 releaseDate:(id*)arg3 error:(id*)arg4;
+ (id)findExactMatchInAssets:(id)arg1 forAssetId:(id)arg2;
+ (id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExists;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExistsWithReleaseDate:(id*)arg1;
+ (id)minorOSVersion:(id)arg1;
+ (void)purgeMSUUpdate:(id /* block */)arg1;
+ (id)queryMetaDataOfType:(id)arg1 WithFilter:(id)arg2 installedOnly:(bool)arg3 error:(id*)arg4;
+ (long long)requestCatalogDownload:(id)arg1;
+ (void)setAssetQueryFilters:(id)arg1;
+ (void)setSUFilters:(id)arg1;
+ (id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1 withReleaseDate:(id)arg2;
+ (bool)updateIsPreCRelease:(id)arg1;

@end
