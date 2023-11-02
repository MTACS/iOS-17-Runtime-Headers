
@interface _HKRemoteChartDataEntry : NSObject {
    HKHealthQueryChartCacheDataSource * _dataSourceForMapping;
    HKGraphSeriesDataBlock * _seriesData;
    id  _seriesDataSourceContext;
}

@property (nonatomic, readonly) HKHealthQueryChartCacheDataSource *dataSourceForMapping;
@property (nonatomic, readonly) HKGraphSeriesDataBlock *seriesData;
@property (nonatomic, readonly) id seriesDataSourceContext;

- (void).cxx_destruct;
- (id)dataSourceForMapping;
- (id)initWithSeriesData:(id)arg1 dataSourceForMapping:(id)arg2 seriesDataSourceContext:(id)arg3;
- (id)seriesData;
- (id)seriesDataSourceContext;
- (id)seriesDataWithMappingApplied;

@end
