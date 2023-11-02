
@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding> {
    NSDictionary * _aliasMap;
    <TRINamespaceFactorProviding> * _bmltProvider;
    <TRINamespaceFactorProviding> * _devOverrideProvider;
    <TRINamespaceFactorProviding> * _experimentProvider;
    <TRINamespaceFactorProviding> * _installedProvider;
    NSString * _namespaceName;
    NSArray * _providerChain;
    <TRINamespaceFactorProviding> * _rolloutProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)factorProviderWithPaths:(id)arg1 namespaceName:(id)arg2;
+ (id)factorProviderWithPaths:(id)arg1 namespaceName:(id)arg2 excludingTreatmentLayers:(unsigned long long)arg3;
+ (id)factorProviderWithPaths:(id)arg1 namespaceName:(id)arg2 resolver:(id)arg3;

- (void).cxx_destruct;
- (id)_dealiasedFactorLevelForFactorLevel:(id)arg1 unaliasedName:(id)arg2;
- (void)cacheFactorLevels;
- (void)computeTreatmentAssetIndexes:(id*)arg1 withAssociatedExperimentIds:(id*)arg2 andFactorPackAssetIds:(id*)arg3 withAssociatedRolloutDeployments:(id*)arg4 withExperimentFactorNames:(id*)arg5 andRolloutFactorNames:(id*)arg6 forFactors:(id)arg7 usingFilter:(id /* block */)arg8;
- (int)deploymentId;
- (void)dispose;
- (id)experimentId;
- (id)factorLevels;
- (id)factorNamesWithObfuscation:(id)arg1;
- (bool)hasAnyTreatmentInLayers:(unsigned long long)arg1;
- (id)initWithNamespaceName:(id)arg1 typedProviderChain:(id)arg2 paths:(id)arg3;
- (id)initWithNamespaceName:(id)arg1 typedProviderChain:(id)arg2 paths:(id)arg3 excludingTreatmentLayers:(unsigned long long)arg4;
- (bool)isRegistered;
- (id)levelForFactor:(id)arg1;
- (id)levelForFactor:(id)arg1 outProvider:(id*)arg2;
- (unsigned int)namespaceCompatibilityVersion;
- (unsigned int)namespaceId;
- (id)namespaceName;
- (id)promotableFactorPackId;
- (id)providerForTreatmentLayer:(unsigned long long)arg1;
- (id)rolloutId;
- (id)treatmentId;

@end
