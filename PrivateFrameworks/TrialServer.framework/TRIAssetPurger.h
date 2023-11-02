
@interface TRIAssetPurger : NSObject <TRIAssetPurging> {
    TRIAssetStore * _assetStore;
    TRIClient * _loggingClient;
    <TRIPaths> * _paths;
    <TRIPurgeableExperimentAndRolloutProviding> * _purgeableExperimentAndRolloutProvider;
    <TRIPurgeableFactorPacksEnumerating> * _purgeableFactorPacksEnumerator;
    <TRIPurgeableNamespacesProviding> * _purgeableNamespacesProvider;
    <TRITaskQueuing> * _taskQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumeratePurgeCandidatesForPurgeableConstructs:(id)arg1 block:(id /* block */)arg2;
- (void)_logDeactivationsMetricWithConcludedInTime:(bool)arg1;
- (void)_logPurgedAssetWithFactorNames:(id)arg1 namespaceName:(id)arg2 purgeabilityLevel:(int)arg3;
- (id)initWithPaths:(id)arg1 assetStore:(id)arg2 purgeableNamespacesProvider:(id)arg3 purgeableFactorPacksEnumerator:(id)arg4 purgeableExperimentAndRolloutProvider:(id)arg5 taskQueue:(id)arg6 loggingClient:(id)arg7;
- (unsigned long long)purgeAssetsForPurgeabilityLevel:(int)arg1 requestedPurgeAmount:(long long)arg2;
- (unsigned long long)purgeableAssetSizeForPurgeabilityLevel:(int)arg1;

@end
