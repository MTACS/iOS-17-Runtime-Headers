
@interface HKDateRangeDataSource : HKGraphSeriesDataSource <HKDateRangeDataUpdateDelegate> {
    NSMutableDictionary * _pathToDataBlock;
    <HKDateRangeDataSourceDelegate> * _sourceDelegate;
}

@property (nonatomic, retain) NSMutableDictionary *pathToDataBlock;
@property (nonatomic, readonly) <HKDateRangeDataSourceDelegate> *sourceDelegate;

- (void).cxx_destruct;
- (id)_fetchAndCacheDataForPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1;
- (void)blocksRequestedFromPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 toPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 priorityDelegate:(id)arg3;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 context:(id)arg2;
- (void)dateRangeDataUpdated;
- (id)initWithSourceDelegate:(id)arg1;
- (void)invalidateCache;
- (id)pathToDataBlock;
- (void)setPathToDataBlock:(id)arg1;
- (id)sourceDelegate;

@end
