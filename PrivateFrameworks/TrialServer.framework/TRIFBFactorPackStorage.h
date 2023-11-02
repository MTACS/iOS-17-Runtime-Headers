
@interface TRIFBFactorPackStorage : NSObject {
    <TRIAssetExtracting> * _extractor;
    <TRIPaths> * _paths;
}

+ (id)relPathForMAReferenceWithFactorName:(id)arg1;

- (void).cxx_destruct;
- (id)_globalFactorPackProviderPlist;
- (id)_legacyParentDirForFactorLevelsWithNamespaceName:(id)arg1;
- (id)_legacyPathForFactorLevelsWithFactorPackId:(id)arg1 namespaceName:(id)arg2;
- (id)_linkAssetWithId:(id)arg1 assetStore:(id)arg2 forFactorName:(id)arg3 currentFactorPackPath:(id)arg4 futureFactorPackPath:(id)arg5;
- (id)_linkAssetsForFactorNames:(id)arg1 aliasToUnaliasMap:(id)arg2 copyingModifiedFactorLevelsWithPath:(id)arg3 tempDirRef:(id)arg4;
- (bool)_linkAssetsUpdatingFactorLevel:(id)arg1 fromFactorPackWithId:(id)arg2 usingAssetStore:(id)arg3 currentFactorPackPath:(id)arg4 futureFactorPackPath:(id)arg5;
- (id)_parentDirForFactorLevelsWithNamespaceName:(id)arg1;
- (id)_pathForFactorLevelsWithFactorPackId:(id)arg1 namespaceName:(id)arg2;
- (bool)_referenceMAAssetWithId:(id)arg1 assetStore:(id)arg2 forFactorName:(id)arg3 isFileFactor:(bool)arg4 currentFactorPackPath:(id)arg5 futureFactorPackPath:(id)arg6;
- (id)_removeAssetsWithFactorNames:(id)arg1 copyingModifiedFactorLevelsWithPath:(id)arg2 appendingToPathsToRemove:(id)arg3 appendingToMARefsToRemove:(id)arg4 tempDirRef:(id)arg5;
- (bool)_removeUnreferencedFactorPackSetsWithNamespaceName:(id)arg1 removedCount:(unsigned int*)arg2;
- (bool)_removeUnreferencedFactorPackSetsWithParentDir:(id)arg1 removedCount:(unsigned int*)arg2;
- (void)_reportFactorPackDiskUsagesWithNamespaceName:(id)arg1 namespaceDirName:(id)arg2 context:(id)arg3;
- (id)_writeFactorPack:(id)arg1 futurePath:(id)arg2 forFactorNames:(id)arg3 aliasToUnaliasMap:(id)arg4 assetStore:(id)arg5 tempDirRef:(id)arg6;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (id)initWithPaths:(id)arg1 extractor:(id)arg2;
- (id)legacyPathForFactorLevelsWithFactorPackId:(id)arg1 namespaceName:(id)arg2;
- (id)loadFactorLevelsWithDir:(id)arg1 bufferSize:(unsigned long long*)arg2;
- (id)loadFactorLevelsWithFactorPackId:(id)arg1 namespaceName:(id)arg2;
- (id)pathForFactorLevelsWithFactorPackId:(id)arg1 namespaceName:(id)arg2;
- (bool)removeUnreferencedFactorLevelsWithRemovedCount:(unsigned int*)arg1;
- (bool)removeUnreferencedGlobalFactorPacksWithRemovedCount:(unsigned int*)arg1;
- (void)reportFactorPackDiskUsagesUsingContext:(id)arg1;
- (bool)saveFactorLevelsForFactorPack:(id)arg1 populatingAssetsForFactorNames:(id)arg2 aliasToUnaliasMap:(id)arg3 factorLevelsByNamePath:(id*)arg4 factorLevelsByIdPath:(id*)arg5;
- (bool)saveFactorPackToGlobal:(id)arg1 forFactorNames:(id)arg2 aliasToUnaliasMap:(id)arg3;
- (bool)updateSavedFactorLevelsWithFactorPackId:(id)arg1 namespaceName:(id)arg2 deletingAssetsWithFactorNames:(id)arg3 inUseAssetBehavior:(unsigned char)arg4;
- (bool)updateSavedFactorLevelsWithFactorPackId:(id)arg1 namespaceName:(id)arg2 populatingAssetsForFactorNames:(id)arg3 aliasToUnaliasMap:(id)arg4;
- (bool)updateSavedGlobalFactorPackAt:(id)arg1 deletingAssetsWithFactorNames:(id)arg2;
- (bool)updateSavedGlobalFactorPackAt:(id)arg1 populatingAssetsForFactorNames:(id)arg2;
- (void)useNamespaceIdInSchema:(bool)arg1;

@end
