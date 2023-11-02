
@interface CPLSyncSessionMetrics : NSObject {
    NSDictionary * _metricsDict;
}

@property (nonatomic, copy) NSDictionary *metricsDict;

- (void).cxx_destruct;
- (void)incrementCountForKey:(id)arg1;
- (id)init;
- (id)initWithMetricsDict:(id)arg1;
- (id)metricsDict;
- (void)setMetricsDict:(id)arg1;

@end
