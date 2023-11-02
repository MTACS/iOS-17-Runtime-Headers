
@interface VUIDebugViewDataSource : NSObject {
    NSArray * _defaultsDataSource;
    NSArray * _metricsDataSource;
}

@property (nonatomic, retain) NSArray *defaultsDataSource;
@property (nonatomic, retain) NSArray *metricsDataSource;

- (void).cxx_destruct;
- (id)_createDefaultsDataSource;
- (id)_createMetricsDataSource;
- (id)defaultsDataSource;
- (id)init;
- (id)metricsDataSource;
- (void)setDefaultsDataSource:(id)arg1;
- (void)setMetricsDataSource:(id)arg1;

@end
