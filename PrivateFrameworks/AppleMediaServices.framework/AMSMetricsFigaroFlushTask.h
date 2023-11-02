
@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushTask> {
    AMSURLSession * _URLSession;
    <AMSBagProtocol> * _bag;
    AMSPromise * _currentCancellableDataTaskPromise;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _currentCancellableDataTaskPromiseLock;
    <AMSMetricsDataSource> * _dataSource;
    long long  _maxBatchSize;
    long long  _maxRequestCount;
    NSString * _topic;
}

@property (nonatomic, readonly) AMSURLSession *URLSession;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) <AMSMetricsDataSource> *dataSource;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic, copy) NSString *topic;

- (void).cxx_destruct;
- (id)URLSession;
- (id)_flushNextBatchWithMaxRequestCount:(unsigned long long)arg1 topic:(id)arg2 maxBatchSize:(long long)arg3 requestCount:(unsigned long long)arg4 flushedEventCount:(unsigned long long)arg5 config:(id)arg6;
- (id)_mescalSignatureWithBodyData:(id)arg1 error:(id*)arg2;
- (id)_nextBatchWithConfig:(id)arg1 topic:(id)arg2 maxBatchSize:(long long)arg3;
- (id)_postBatch:(id)arg1;
- (bool)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2;
- (id)bag;
- (bool)cancel;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1 bag:(id)arg2;
- (long long)maxBatchSize;
- (long long)maxRequestCount;
- (id)performFlush;
- (void)setMaxBatchSize:(long long)arg1;
- (void)setMaxRequestCount:(long long)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;

@end
