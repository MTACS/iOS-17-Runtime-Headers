
@interface TRIFBClientTreatmentStorage : NSObject {
    <TRIAssetExtracting> * _extractor;
    <TRIPaths> * _paths;
}

+ (id)relPathForMAReferenceWithFactorName:(id)arg1;

- (void).cxx_destruct;
- (id)_assetURLForFactor:(id)arg1 treatmentId:(id)arg2;
- (id)_baseUrlForTreatment:(id)arg1 namespaceName:(id)arg2;
- (id)_collectTreatments;
- (id)_convertFastFactorLevelToClientTreatment:(id)arg1;
- (id)_copyFileFromURL:(id)arg1 to:(id)arg2;
- (id)_defaultsAssetURLForFactor:(id)arg1;
- (bool)_deleteOnDemandAssetsWithFactorNames:(id)arg1 treatment:(id)arg2 namespace:(id)arg3 forRollouts:(bool)arg4;
- (id)_linkAssetWithId:(id)arg1 treatmentId:(id)arg2 assetStore:(id)arg3 factor:(id)arg4 forRollouts:(bool)arg5;
- (bool)_linkAssetsUpdatingTreatment:(id)arg1;
- (bool)_linkAssetsWithIds:(id)arg1 updatingTreatment:(id)arg2;
- (bool)_removeFactorsWithDescriptor:(id)arg1 descriptorDir:(id)arg2 treatmentLayer:(unsigned long long)arg3 namespaceName:(id)arg4;
- (bool)_removeFactorsWithTreatmentId:(id)arg1 namespaceName:(id)arg2;
- (bool)_removeFactorsWithURL:(id)arg1;
- (bool)_resolveAssetPathsInTreatment:(id)arg1 usingReferenceURL:(id)arg2;
- (bool)_saveNamespacePartitionedTreatmentsForTreatment:(id)arg1 forNamespaceNames:(id)arg2 forRollouts:(bool)arg3;
- (bool)_savePersistedTreatment:(id)arg1;
- (bool)_writeFactorLevelsToDisk:(id)arg1 namespaceName:(id)arg2 writeToPath:(id)arg3;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (id)initWithPaths:(id)arg1 extractor:(id)arg2;
- (id)loadTreatmentWithTreatmentId:(id)arg1 isFilePresent:(bool*)arg2;
- (bool)removeTreatmentFromLayer:(unsigned long long)arg1 withNamespaceName:(id)arg2 upgradeNCVs:(id)arg3;
- (bool)removeTreatmentWithTreatmentId:(id)arg1;
- (bool)removeUnreferencedTreatmentsWithRemovedCount:(unsigned int*)arg1;
- (id)saveTreatment:(id)arg1;
- (id)updateSavedTreatmentWithTreatmentId:(id)arg1 deletingAssetsWithFactorNames:(id)arg2 forNamespaceName:(id)arg3 forRollouts:(bool)arg4;
- (id)updateSavedTreatmentWithTreatmentId:(id)arg1 linkingNewAssetIds:(id)arg2 forNamespaceNames:(id)arg3;
- (id)urlForDefaultFactorsWithNamespaceName:(id)arg1;
- (id)urlForFactorsWithTreatmentId:(id)arg1 namespaceName:(id)arg2;
- (id)urlForTreatmentWithTreatmentId:(id)arg1;
- (void)useNamespaceIdInSchema:(bool)arg1;

@end
