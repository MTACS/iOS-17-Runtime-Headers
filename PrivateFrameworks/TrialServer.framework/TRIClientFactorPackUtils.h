
@interface TRIClientFactorPackUtils : NSObject

+ (bool)_enumerateAssetFactorLevelsInFactorPack:(id)arg1 trialAssetBlock:(id /* block */)arg2 maAssetBlock:(id /* block */)arg3;
+ (void)_enumerateAssetFactorLevelsInFlatBufferStorage:(id)arg1 trialAssetBlock:(id /* block */)arg2 maAssetBlock:(id /* block */)arg3;
+ (id)aliasesInNamespace:(id)arg1;
+ (bool)enumerateMetadataForAssetsInFactorPack:(id)arg1 flatbufferFactorLevels:(id)arg2 assetStore:(id)arg3 maProvider:(id)arg4 aliasToUnaliasMap:(id)arg5 subscribedFactors:(id)arg6 ckBlock:(id /* block */)arg7 maBlock:(id /* block */)arg8;
+ (id)requiredAssetsForInstallationWithFactorPack:(id)arg1 assetStore:(id)arg2 maProvider:(id)arg3 subscriptionSettings:(id)arg4 aliasToUnaliasMap:(id)arg5;
+ (id)uniqueAssets:(id)arg1;
+ (id)unlinkedOnDemandAssetsWithFactorPack:(id)arg1 flatbufferFactorLevels:(id)arg2 factorPackPath:(id)arg3 assetStore:(id)arg4 maProvider:(id)arg5 aliasToUnaliasMap:(id)arg6 subscribedFactors:(id)arg7 unlinkedMAAssetsOnDisk:(id*)arg8;

@end
