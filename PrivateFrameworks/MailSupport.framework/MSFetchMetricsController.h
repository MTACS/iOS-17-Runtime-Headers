
@interface MSFetchMetricsController : NSObject {
    <MSFetchMetricsControllerDataSource> * _dataSource;
    double  _startTime;
}

@property (nonatomic, readonly) <MSFetchMetricsControllerDataSource> *dataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (void)start;
- (void)stopAndSubmitWithOptions:(unsigned long long)arg1 fetchSize:(unsigned long long)arg2;

@end
