
@interface HKGraphSeriesDataSource : NSObject {
    <HKGraphSeriesDataSourceDelegate> * _delegate;
    long long  _maximumZoom;
    long long  _minimumZoom;
}

@property (nonatomic) <HKGraphSeriesDataSourceDelegate> *delegate;
@property (nonatomic) long long maximumZoom;
@property (nonatomic) long long minimumZoom;

- (void).cxx_destruct;
- (struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })blockPathForX:(id)arg1 zoom:(long long)arg2 resolution:(long long)arg3;
- (void)blocksRequestedFromPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 toPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 priorityDelegate:(id)arg3;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 context:(id)arg2;
- (id)delegate;
- (bool)hasAllBlocksAvailableBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 endPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2;
- (bool)hasAvailableBlocksBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 endPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2;
- (bool)hasPendingQueriesBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 endPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2;
- (id)init;
- (void)invalidateCache;
- (long long)maximumZoom;
- (long long)minimumZoom;
- (void)setDelegate:(id)arg1;
- (void)setMaximumZoom:(long long)arg1;
- (void)setMinimumZoom:(long long)arg1;

@end
