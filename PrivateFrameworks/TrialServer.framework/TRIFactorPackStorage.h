
@interface TRIFactorPackStorage : NSObject {
    <TRIAssetExtracting> * _extractor;
    <TRIPaths> * _paths;
}

+ (id)relPathForMAReferenceWithFactorName:(id)arg1;

- (void).cxx_destruct;
- (id)_legacyParentDirForFactorPackWithNamespaceName:(id)arg1;
- (id)_legacyPathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;
- (id)_linkAssetWithId:(id)arg1 assetStore:(id)arg2 forFactorName:(id)arg3 currentFactorPackPath:(id)arg4 futureFactorPackPath:(id)arg5;
- (id)_linkAssetsForFactorNames:(id)arg1 aliasToUnaliasMap:(id)arg2 copyingModifiedFactorPackWithPath:(id)arg3 tempDirRef:(id)arg4;
- (bool)_linkAssetsUpdatingFactorLevel:(id)arg1 fromFactorPackWithId:(id)arg2 usingAssetStore:(id)arg3 currentFactorPackPath:(id)arg4 futureFactorPackPath:(id)arg5;
- (id)_parentDirForFactorPackWithNamespaceName:(id)arg1;
- (id)_pathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;
- (bool)_referenceMAAssetWithId:(id)arg1 assetStore:(id)arg2 forFactorName:(id)arg3 isFileFactor:(bool)arg4 currentFactorPackPath:(id)arg5 futureFactorPackPath:(id)arg6;
- (id)_removeAssetsWithFactorNames:(id)arg1 copyingModifiedFactorPackWithPath:(id)arg2 appendingToPathsToRemove:(id)arg3 appendingToMARefsToRemove:(id)arg4 tempDirRef:(id)arg5;
- (bool)_removeUnreferencedFactorPackSetsWithNamespaceName:(id)arg1 removedCount:(unsigned int*)arg2;
- (bool)_removeUnreferencedFactorPackSetsWithParentDir:(id)arg1 removedCount:(unsigned int*)arg2;
- (id)_writeFactorPack:(id)arg1 futurePath:(id)arg2 forFactorNames:(id)arg3 aliasToUnaliasMap:(id)arg4 assetStore:(id)arg5 tempDirRef:(id)arg6;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (id)initWithPaths:(id)arg1 extractor:(id)arg2;
- (id)legacyPathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;
- (id)loadFactorPackWithDir:(id)arg1;
- (id)loadFactorPackWithId:(id)arg1 namespaceName:(id)arg2;
- (id)loadParsedFactorPackWithDir:(id)arg1;
- (id)loadParsedFactorPackWithId:(id)arg1 namespaceName:(id)arg2;
- (id)pathForFactorPackWithId:(id)arg1 namespaceName:(id)arg2;
- (bool)removeUnreferencedFactorPacksWithRemovedCount:(unsigned int*)arg1;
- (bool)saveFactorPack:(id)arg1 populatingAssetsForFactorNames:(id)arg2 aliasToUnaliasMap:(id)arg3 factorPackByNamePath:(id*)arg4 factorPackByIdPath:(id*)arg5;
- (bool)saveFactorPackToGlobal:(id)arg1 forFactorNames:(id)arg2 aliasToUnaliasMap:(id)arg3;
- (bool)updateSavedFactorPackWithId:(id)arg1 namespaceName:(id)arg2 deletingAssetsWithFactorNames:(id)arg3 inUseAssetBehavior:(unsigned char)arg4;
- (bool)updateSavedFactorPackWithId:(id)arg1 namespaceName:(id)arg2 populatingAssetsForFactorNames:(id)arg3 aliasToUnaliasMap:(id)arg4;
- (bool)updateSavedGlobalFactorPackAt:(id)arg1 deletingAssetsWithFactorNames:(id)arg2;
- (bool)updateSavedGlobalFactorPackAt:(id)arg1 populatingAssetsForFactorNames:(id)arg2;

@end
