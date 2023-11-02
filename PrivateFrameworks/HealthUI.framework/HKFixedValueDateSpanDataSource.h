
@interface HKFixedValueDateSpanDataSource : HKDateRangeDataSource <HKChartSummaryTrendModelObserver> {
    id /* block */  _fixedValueScalingBlock;
    id /* block */  _preferredUnitBlock;
    _HKFixedValueDateSpanDelegate * _sourceDelegate;
    HKChartSummaryTrendModel * _trendModel;
}

@property (nonatomic, readonly, copy) id /* block */ fixedValueScalingBlock;
@property (nonatomic, readonly, copy) id /* block */ preferredUnitBlock;
@property (nonatomic, retain) _HKFixedValueDateSpanDelegate *sourceDelegate;
@property (nonatomic, readonly) HKChartSummaryTrendModel *trendModel;

- (void).cxx_destruct;
- (bool)_insideRange:(id)arg1 trendSpan:(id)arg2;
- (void)_setPreferredUnitForBlock:(id)arg1 unit:(id)arg2;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg1 context:(id)arg2;
- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;
- (id /* block */)fixedValueScalingBlock;
- (id)initWithTrendModel:(id)arg1 preferredUnitBlock:(id /* block */)arg2 fixedValueScalingBlock:(id /* block */)arg3;
- (id /* block */)preferredUnitBlock;
- (void)setSourceDelegate:(id)arg1;
- (id)sourceDelegate;
- (id)trendModel;
- (void)trendModelChanged;

@end
