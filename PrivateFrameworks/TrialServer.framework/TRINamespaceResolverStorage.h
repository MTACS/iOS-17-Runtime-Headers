
@interface TRINamespaceResolverStorage : NSObject {
    <TRIPaths> * _paths;
}

- (void).cxx_destruct;
- (id)_getProvisionalFactorpackMetadataForNamespaceName:(id)arg1 mustExist:(bool)arg2 error:(id*)arg3;
- (void)_logPromotionMetric:(id)arg1 forFactorPackId:(id)arg2 namespaceName:(id)arg3 rolloutDeployment:(id)arg4 withServerContext:(id)arg5;
- (bool)_overwriteActiveFactorProvidersUsingGlobalPath:(bool)arg1 withNamespaceMap:(id)arg2 rolloutDeploymentMap:(id)arg3 factorPackMap:(id)arg4;
- (id)_pathForBMLTDeployment:(id)arg1;
- (id)_pathForExperimentDeployment:(id)arg1;
- (id)_pathForRolloutDeployment:(id)arg1;
- (bool)_removeUnreferencedBMLTDeploymentsWithRefStore:(id)arg1 parentDir:(id)arg2 removedCount:(unsigned int*)arg3;
- (bool)_removeUnreferencedBMLTDeploymentsWithRefStore:(id)arg1 topLevelDir:(id)arg2 removedCount:(unsigned int*)arg3;
- (bool)_removeUnreferencedDeploymentsWithRefStore:(id)arg1 parentDir:(id)arg2 removedCount:(unsigned int*)arg3;
- (bool)_removeUnreferencedDeploymentsWithRefStore:(id)arg1 topLevelDir:(id)arg2 removedCount:(unsigned int*)arg3;
- (bool)_setProvisionalFactorpackMetadata:(id)arg1 forNamespaceName:(id)arg2 error:(id*)arg3;
- (bool)_writeRampId:(id)arg1 parentDir:(id)arg2;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (bool)overwriteActiveFactorProvidersUsingTransaction:(id)arg1 fromContext:(id)arg2;
- (bool)overwriteGlobalActiveFactorProvidersWithNamespaceMap:(id)arg1 factorPackMap:(id)arg2 rolloutDeploymentMap:(id)arg3;
- (id)parentDirForBMLTDeployments;
- (id)parentDirForExperimentDeployments;
- (id)parentDirForRolloutDeployments;
- (id)pathForBMLTDeployment:(id)arg1;
- (id)pathForExperimentDeployment:(id)arg1;
- (id)pathForRolloutDeployment:(id)arg1;
- (id)pathForTargetedFactorPackSetWithDeployment:(id)arg1;
- (id)pathForTargetedFactorPackSetWithTaskDeployment:(id)arg1;
- (bool)promoteFactorPackId:(id)arg1 forNamespaceName:(id)arg2 rolloutDeployment:(id)arg3 withServerContext:(id)arg4 error:(id*)arg5;
- (bool)rejectFactorPackId:(id)arg1 forNamespaceName:(id)arg2 rolloutDeployment:(id)arg3 withServerContext:(id)arg4 error:(id*)arg5;
- (bool)removeUnneededPromotionsWithRemovedCount:(unsigned int*)arg1 removeAll:(bool)arg2;
- (bool)removeUnreferencedBMLTDeploymentsWithServerContext:(id)arg1 removedCount:(unsigned int*)arg2;
- (bool)removeUnreferencedExperimentDeploymentsWithServerContext:(id)arg1 removedCount:(unsigned int*)arg2;
- (bool)removeUnreferencedRolloutDeploymentsWithServerContext:(id)arg1 removedCount:(unsigned int*)arg2;
- (bool)rewriteBMLTDeployment:(id)arg1 targetedFactorPackSetId:(id)arg2;
- (bool)rewriteExperimentDeployment:(id)arg1 targetedTreatmentId:(id)arg2;
- (bool)rewriteRolloutDeployment:(id)arg1 rampId:(id)arg2 targetedFactorPackSetId:(id)arg3;
- (bool)setProvisionalFactorPackId:(id)arg1 forNamespaceName:(id)arg2 error:(id*)arg3;

@end
