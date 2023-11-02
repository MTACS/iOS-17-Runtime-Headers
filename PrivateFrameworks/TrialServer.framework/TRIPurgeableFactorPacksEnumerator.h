
@interface TRIPurgeableFactorPacksEnumerator : NSObject <TRIPurgeableFactorPacksEnumerating> {
    <TRINamespaceResolving> * _namespaceResolver;
    <TRIPaths> * _paths;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateOnDemandFactorsWithIsRollout:(bool)arg1 namespaceName:(id)arg2 block:(id /* block */)arg3;
- (void)enumerateExperimentFactorPackPurgeCandidatesFromNamespaceNames:(id)arg1 purgeableFactorFilterBlock:(id /* block */)arg2 block:(id /* block */)arg3;
- (void)enumerateRolloutFactorPackPurgeCandidatesFromNamespaceNames:(id)arg1 purgeableFactorFilterBlock:(id /* block */)arg2 block:(id /* block */)arg3;
- (id)initWithPaths:(id)arg1 namespaceResolver:(id)arg2;

@end
