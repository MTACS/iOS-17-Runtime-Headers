
@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver> {
    HKChartCache * _chartCache;
    struct HKGraphSeriesDataBlockPath { 
        long long index; 
        long long zoom; 
        long long resolution; 
    }  _lastEndPath;
    struct HKGraphSeriesDataBlockPath { 
        long long index; 
        long long zoom; 
        long long resolution; 
    }  _lastStartPath;
}

@property (nonatomic, retain) HKChartCache *chartCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resetCachedPaths;
- (void)blocksRequestedFromPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 toPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 priorityDelegate:(id)arg3;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 context:(id)arg2;
- (id)chartCache;
- (void)chartCacheDidUpdate:(id)arg1;
- (bool)hasAllBlocksAvailableBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 endPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2;
- (bool)hasAvailableBlocksBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 endPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2;
- (bool)hasPendingQueriesBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 endPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2;
- (id)init;
- (void)invalidateCache;
- (void)setChartCache:(id)arg1;

@end
