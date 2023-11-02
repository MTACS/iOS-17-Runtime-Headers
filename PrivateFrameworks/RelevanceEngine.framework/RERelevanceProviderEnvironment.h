
@interface RERelevanceProviderEnvironment : RERelevanceEngineSubsystem <REElementRelevanceProviderGenerator, RERelevanceProviderEnvironmentProperties> {
    bool  _allowsLocationUse;
    NSHashTable * _customProviders;
    <RERelevanceProviderEnvironmentDelegate> * _delegate;
    REDependencyGraph * _dependencyGraph;
    NSMutableSet * _providerManagersToUpdate;
    NSHashTable * _providersToUpdate;
    NSMapTable * _relevanceClassManagerMap;
    NSMapTable * _relevanceHistogramMap;
    NSMutableArray * _relevanceManagers;
    REUpNextDisjointSet * _relevanceProviderSet;
    NSMapTable * _relevanceValues;
    NSLock * _relevanceValuesLock;
    REUpNextScheduler * _scheduler;
    REFeatureSet * _supportedFeatures;
    NSMutableArray * _updateCompletionBlocks;
}

@property (nonatomic, readonly) NSDictionary *allProviderValues;
@property (nonatomic) bool allowsLocationUse;
@property (nonatomic) <RERelevanceProviderEnvironmentDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long relevanceProviderCount;
@property (nonatomic, readonly) REFeatureSet *supportedFeatures;

- (void).cxx_destruct;
- (void)_addRelevanceValue:(id)arg1 forProvider:(id)arg2;
- (id)_histogramForFeature:(id)arg1;
- (id)_histogramForProvider:(id)arg1;
- (id)_providerManagerForProvider:(id)arg1;
- (void)_queue_performUpdate:(id /* block */)arg1;
- (id)_relevaneProviderWithType:(id)arg1 withOptions:(id)arg2;
- (void)_removeRelevanceValueForProvider:(id)arg1;
- (void)_scaleRelevanceProviderValues:(id)arg1 values:(id)arg2;
- (void)_setupRelevanceProviderManagers;
- (void)accessHistogramForFeature:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)addRelevanceProvider:(id)arg1 completion:(id /* block */)arg2;
- (id)allProviderValues;
- (bool)allowsLocationUse;
- (bool)containsRelevanceProvider:(id)arg1;
- (id)createRelevaneProviderWithType:(id)arg1 withOptions:(id)arg2;
- (id)currentRelevanceProvidersState;
- (void)dealloc;
- (id)delegate;
- (id)encodeRelevaneProvider:(id)arg1;
- (id)featuresForRelevanceProvider:(id)arg1;
- (void)immediateUpdateForRelevanceProviderManager:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithRelevanceEngine:(id)arg1;
- (bool)isRelevanceProviderHistoric:(id)arg1;
- (bool)isRelevanceProviderLoaded:(id)arg1;
- (bool)isSupportedRelevanceProvider:(id)arg1;
- (void)pause;
- (void)relateRelevanceProvider:(id)arg1 toRelevanceProvider:(id)arg2;
- (unsigned long long)relevanceProviderCount;
- (id)relevancesForRelevanceProvider:(id)arg1;
- (id)relevancesForRelevanceProvider:(id)arg1 usingContext:(id)arg2;
- (void)removeRelevanceProvider:(id)arg1 completion:(id /* block */)arg2;
- (void)resume;
- (void)scheduleUpdateForRelevanceProvider:(id)arg1 completion:(id /* block */)arg2;
- (void)scheduleUpdateForRelevanceProviderManager:(id)arg1 completion:(id /* block */)arg2;
- (void)setAllowsLocationUse:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)supportedFeatures;

@end
