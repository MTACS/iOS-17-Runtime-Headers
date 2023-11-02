
@interface ATXGlobalAppModeAffinityModel : NSObject <ATXMemoryPressureObserver> {
    bool  _assetOffloadedDueToMemoryPressure;
    NSSet * _bundleIds;
    _PASCFBurstTrie * _index;
    ATXMemoryPressureMonitor * _memoryPressureMonitor;
    NSDictionary * _normalizedPriors;
}

@property (nonatomic, readonly) NSSet *bundleIds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)modelWithAllInstalledAppsKnownToSpringBoard;
+ (id)supportedModeTypes;

- (void).cxx_destruct;
- (id)_computePriors;
- (void)_normalizePriors:(id)arg1 maximumPrior:(double)arg2;
- (double)_priorForMode:(unsigned long long)arg1 bundleIdIndex:(int)arg2 priors:(id)arg3;
- (id)bundleIds;
- (void)dealloc;
- (void)handleMemoryPressure;
- (int)indexForBundleId:(id)arg1;
- (id)initWithBundleIds:(id)arg1;
- (id)loadGlobalPriorsAsset;
- (unsigned long long)modeIndexForMode:(unsigned long long)arg1;
- (double)scoreForMode:(unsigned long long)arg1 bundleId:(id)arg2 scalingFactor:(double)arg3;
- (void)unloadGlobalPriorsAsset;

@end
