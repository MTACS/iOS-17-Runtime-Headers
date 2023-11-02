
@interface HKHeartbeatSequenceDataSource : HKGraphSeriesDataSource {
    HKGraphSeriesDataBlock * _dataBlock;
}

@property (nonatomic, readonly) HKGraphSeriesDataBlock *dataBlock;

- (void).cxx_destruct;
- (struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })blockPathForX:(id)arg1 zoom:(long long)arg2 resolution:(long long)arg3;
- (void)blocksRequestedFromPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 toPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 priorityDelegate:(id)arg3;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 context:(id)arg2;
- (id)dataBlock;
- (id)init;
- (void)setHeartbeatSequencePoints:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
