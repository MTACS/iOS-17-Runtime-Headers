
@interface TRINamespaceResolver : NSObject <TRINamespaceResolving> {
    TRIBMLTDeployment * _bmltDeploymentForFactorsState;
    TRIExperimentDeployment * _experimentDeploymentForFactorsState;
    _PASLock * _lock;
    NSSet * _namespacesInFactorsState;
    <TRIPaths> * _paths;
    TRIRolloutDeployment * _rolloutDeploymentForFactorsState;
}

@property (nonatomic, readonly) TRIBMLTDeployment *bmltDeploymentForFactorsState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TRIExperimentDeployment *experimentDeploymentForFactorsState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *namespacesInFactorsState;
@property (nonatomic, readonly) TRIRolloutDeployment *rolloutDeploymentForFactorsState;
@property (readonly) Class superclass;

+ (id)_namespacePathComponentsFromEntitlements;
+ (id)preferredPathForFactorDataWithCandidatePaths:(id)arg1;
+ (id)promotionDirForNamespaceName:(id)arg1 withPaths:(id)arg2;

- (void).cxx_destruct;
- (id)_factorProviderForNamespaceName:(id)arg1 fromNamespaceDescriptorSetWithDir:(id)arg2 resolvedPath:(id*)arg3;
- (id)_factorProviderForNamespaceName:(id)arg1 parentId:(id)arg2 deploymentId:(int)arg3 fromFactorPackSetWithDir:(id)arg4 resolvedPath:(id*)arg5;
- (void)_faultOnceWithMessage:(id)arg1;
- (id)_getFactorPackPathForNamespaceName:(id)arg1 withCandidatePath:(id)arg2 parentId:(id)arg3 deploymentId:(int)arg4 promotable:(bool*)arg5;
- (id)_globalFactorProviderForNamespaceName:(id)arg1 parentId:(id)arg2 deploymentId:(int)arg3 fromFactorPackId:(id)arg4 resolvedPath:(id*)arg5;
- (bool)_hasBMLTFactorsState;
- (bool)_hasExperimentFactorsState;
- (bool)_hasRolloutFactorsState;
- (bool)_prepareFactorsState:(id)arg1;
- (id)_resolvePropertyListFactorProviderChainForNamespaceName:(id)arg1;
- (id)_resolvePropertyListGlobalFactorProviderChainForNamespaceName:(id)arg1;
- (id)_resolveTargetedFactorPackSetForBMLTDeployment:(id)arg1;
- (id)_resolveTargetedFactorPackSetForRolloutDeployment:(id)arg1;
- (id)_resolveTargetedNamespaceDescriptorSetForExperimentDeployment:(id)arg1;
- (id)_resolverPropertyListWithResolvedPath:(id*)arg1;
- (id)bmltDeploymentForFactorsState;
- (void)dealloc;
- (void)dispose;
- (id)experimentDeploymentForFactorsState;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (id)initWithPaths:(id)arg1 factorsState:(id)arg2;
- (id)namespacesInFactorsState;
- (id)resolveFactorProviderChainForNamespaceName:(id)arg1 faultOnMissingInstalledFactors:(bool)arg2 installedFactorsAccessible:(bool*)arg3;
- (id)rolloutDeploymentForFactorsState;

@end
