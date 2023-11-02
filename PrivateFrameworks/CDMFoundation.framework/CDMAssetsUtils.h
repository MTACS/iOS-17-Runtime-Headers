
@interface CDMAssetsUtils : NSObject

+ (id)appendPathWithServiceAssetFolder:(id)arg1 assetPath:(id)arg2;
+ (bool)areFactorsValid:(id)arg1 inKnownFactors:(id)arg2;
+ (id)filterFactors:(id)arg1 forAssetSets:(id)arg2 withAssetSetNameToFactors:(id)arg3;
+ (id)filterFactors:(id)arg1 withFactorsInAssetSet:(id)arg2;
+ (id)findExistFolderInAssetFolders:(id)arg1 underBasePath:(id)arg2 useFileManager:(id)arg3;
+ (id)getAssetVersionFromAssetMetadata:(id)arg1;
+ (bool)isCurrentServiceSkippableForAssetsAvailabilityCheck:(id)arg1;
+ (bool)isNLAssetValid:(id)arg1 forLocale:(id)arg2;
+ (bool)isNLAssetValid:(id)arg1 forLocale:(id)arg2 withFolders:(id)arg3 useFileManager:(id)arg4;
+ (id)loadAssetMetadataFromAsset:(id)arg1;

@end
