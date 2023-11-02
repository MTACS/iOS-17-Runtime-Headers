
@interface ATXShadowMetricsComputer : NSObject {
    <ATXShadowMetricsDataSource> * _dataSource;
}

@property (nonatomic, readonly) <ATXShadowMetricsDataSource> *dataSource;

- (void).cxx_destruct;
- (id)computeResultAsTrendPlotFromStartDate:(id)arg1 toEndDate:(id)arg2 resultGranularity:(long long)arg3;
- (id)computeResultFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;

@end
