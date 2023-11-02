
@interface ATXGlobalWidgetPopularityModel : NSObject <ATXMemoryPressureObserver> {
    bool  _assetOffloadedDueToMemoryPressure;
    NSSet * _bundleIdAndKinds;
    ATXMemoryPressureMonitor * _memoryPressureMonitor;
    NSDictionary * _priors;
    _PASCFBurstTrie * _priorsTrie;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)modelWithAllAvailableWidgets;

- (void).cxx_destruct;
- (id)_computePriors;
- (void)dealloc;
- (void)handleMemoryPressure;
- (id)initWithBundleIdAndKinds:(id)arg1;
- (double)scoreForBundleIdAndKind:(id)arg1 scalingFactor:(double)arg2;
- (void)unloadGlobalPriorsAsset;

@end
