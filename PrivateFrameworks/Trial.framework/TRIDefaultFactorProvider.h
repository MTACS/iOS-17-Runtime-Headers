
@interface TRIDefaultFactorProvider : NSObject <TRIFactorProviding> {
    TRIFactorsState * _factorsState;
    _PASLock * _lock;
    <TRIPaths> * _paths;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_providerForNamespace:(id)arg1;
- (id)bmltDeploymentWithNamespaceName:(id)arg1;
- (void)cacheFactorLevelsWithNamespaceName:(id)arg1;
- (unsigned int)compatibilityVersionWithNamespaceName:(id)arg1;
- (id)experimentDeploymentWithNamespaceName:(id)arg1;
- (id)factorLevelsWithNamespace:(unsigned int)arg1;
- (id)factorLevelsWithNamespaceName:(id)arg1;
- (id)factorPackIdForBmltWithNamespaceName:(id)arg1;
- (id)factorPackIdForRolloutWithNamespaceName:(id)arg1;
- (bool)hasRegisteredNamespaceWithName:(id)arg1;
- (bool)hasTreatmentInAnyOfLayers:(unsigned long long)arg1 withNamespaceName:(id)arg2;
- (id)init;
- (id)initWithPaths:(id)arg1 factorsState:(id)arg2;
- (void)invalidateAllFactorProviders;
- (id)levelForFactor:(id)arg1 withNamespace:(unsigned int)arg2;
- (id)levelForFactor:(id)arg1 withNamespaceName:(id)arg2;
- (id)promotableFactorPackIdForNamespaceName:(id)arg1;
- (id)rolloutDeploymentWithNamespaceName:(id)arg1;
- (void)setContainer:(id)arg1 forNamespaceName:(id)arg2;
- (id)treatmentIdWithNamespaceName:(id)arg1;

@end
