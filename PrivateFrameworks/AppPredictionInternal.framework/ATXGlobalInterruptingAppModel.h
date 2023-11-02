
@interface ATXGlobalInterruptingAppModel : NSObject <ATXMemoryPressureObserver> {
    bool  _assetOffloadedDueToMemoryPressure;
    NSSet * _bundleIds;
    _PASCFBurstTrie * _index;
    ATXMemoryPressureMonitor * _memoryPressureMonitor;
    NSDictionary * _priors;
}

@property (nonatomic, readonly) NSSet *bundleIds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)modelWithAllInstalledAppsKnownToSpringBoard;

- (void).cxx_destruct;
- (id)_computePriors;
- (id)bundleIds;
- (void)dealloc;
- (void)handleMemoryPressure;
- (int)indexForBundleId:(id)arg1;
- (id)initWithBundleIds:(id)arg1;
- (id)loadGlobalPriorsAsset;
- (double)scoreForBundleId:(id)arg1 scalingFactor:(double)arg2;
- (void)unloadGlobalPriorsAsset;

@end
