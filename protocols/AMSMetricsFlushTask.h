
@protocol AMSMetricsFlushTask <AMSMetricsFlushStrategy>

@required

- (id)initWithDataSource:(id <AMSMetricsDataSource>)arg1 bag:(id <AMSBagProtocol>)arg2;
- (long long)maxBatchSize;
- (long long)maxRequestCount;
- (void)setMaxBatchSize:(long long)arg1;
- (void)setMaxRequestCount:(long long)arg1;
- (void)setTopic:(NSString *)arg1;
- (NSString *)topic;

@end
