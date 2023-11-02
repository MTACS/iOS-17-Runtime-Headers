
@interface TRIPurgeableExperimentAndRolloutProvider : NSObject <TRIPurgeableExperimentAndRolloutProviding> {
    TRIExperimentDatabase * _experimentDatabase;
    <TRIPaths> * _paths;
    TRIRolloutDatabase * _rolloutDatabase;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_purgeablesForExperimentsFromNamespaces:(id)arg1 eagerFactors:(id)arg2 overriddenFactors:(id)arg3 shouldGenerateAssetPaths:(bool)arg4 purgeableExperiments:(id*)arg5 purgeableAssets:(id*)arg6;
- (void)_purgeablesForRolloutsFromNamespaces:(id)arg1 eagerFactors:(id)arg2 overriddenFactors:(id)arg3 shouldGenerateAssetPaths:(bool)arg4 purgeableExperiments:(id*)arg5 purgeableAssets:(id*)arg6;
- (id)initWithPaths:(id)arg1 experimentDatabase:(id)arg2 rolloutDatabase:(id)arg3;
- (id)purgeableExperimentAssetsFromNamespaces:(id)arg1 eagerFactors:(id)arg2 overriddenFactors:(id)arg3;
- (id)purgeableExperimentsFromNamespaces:(id)arg1 eagerFactors:(id)arg2 overriddenFactors:(id)arg3;
- (id)purgeableRolloutAssetsFromNamespaces:(id)arg1 eagerFactors:(id)arg2 overriddenFactors:(id)arg3;
- (id)purgeableRolloutsFromNamespaces:(id)arg1 eagerFactors:(id)arg2 overriddenFactors:(id)arg3;

@end
