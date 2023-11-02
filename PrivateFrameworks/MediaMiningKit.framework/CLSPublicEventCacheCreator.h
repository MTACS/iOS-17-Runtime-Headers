
@interface CLSPublicEventCacheCreator : NSObject {
    CLSPublicEventCache * _cache;
    unsigned long long  _maximumBatchSize;
    double  _queryRadius;
    bool  _simulatesTimeout;
}

@property (nonatomic, readonly) CLSPublicEventCache *cache;
@property (nonatomic, readonly) unsigned long long maximumBatchSize;
@property (nonatomic, readonly) double queryRadius;
@property (nonatomic) bool simulatesTimeout;

- (void).cxx_destruct;
- (id)_queryEventsForTimeLocationTuples:(id)arg1 invalidationTokens:(out id*)arg2 progressBlock:(id /* block */)arg3 error:(id*)arg4;
- (id)cache;
- (id)createCacheForTimeLocationTuples:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)initWithCache:(id)arg1 queryRadius:(double)arg2;
- (unsigned long long)maximumBatchSize;
- (double)queryRadius;
- (void)setSimulatesTimeout:(bool)arg1;
- (bool)simulatesTimeout;

@end
