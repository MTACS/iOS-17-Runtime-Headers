
@interface HKRemoteChartDataSource : HKGraphSeriesDataSource {
    NSMutableDictionary * _dataBlocksForTimescopes;
}

@property (nonatomic, retain) NSMutableDictionary *dataBlocksForTimescopes;

- (void).cxx_destruct;
- (struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })blockPathForX:(id)arg1 zoom:(long long)arg2 resolution:(long long)arg3;
- (void)blocksRequestedFromPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 toPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 priorityDelegate:(id)arg3;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 context:(id)arg2;
- (id)dataBlocksForTimescopes;
- (id)init;
- (void)invalidateCache;
- (void)setDataBlocksForTimescopes:(id)arg1;
- (void)setDataForTimeScope:(long long)arg1 seriesData:(id)arg2 dataSourceForMapping:(id)arg3 seriesDataSourceContext:(id)arg4;

@end
