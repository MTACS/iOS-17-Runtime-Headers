
@interface UAFTrialMAAssetsCache : NSObject

+ (bool)checkForAssetTypePath:(id)arg1;
+ (id)getFactor:(id)arg1 asRoot:(bool)arg2 assetType:(id)arg3 matchingAttribute:(id)arg4 attributeValue:(id)arg5;
+ (void)initCache;
+ (void)invalidateCache;
+ (id)lookupStringForFactor:(id)arg1 asRoot:(bool)arg2 matchingAttribute:(id)arg3 attributeValue:(id)arg4;
+ (id)queryFactor:(id)arg1 asRoot:(bool)arg2 assetType:(id)arg3 matchingAttribute:(id)arg4 attributeValue:(id)arg5;

@end
