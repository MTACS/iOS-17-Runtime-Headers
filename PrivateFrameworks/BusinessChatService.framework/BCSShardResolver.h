
@interface BCSShardResolver : NSObject <BCSShardResolving> {
    <BCSFetchTrigger> * _megashardFetchTrigger;
    <BCSMetricFactoryProtocol> * _metricFactory;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
    <BCSShardCaching> * _shardCache;
    <BCSShardCacheSkipping> * _shardCacheSkipper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)shardItemMatching:(id)arg1 clientBundleID:(id)arg2 metric:(id)arg3 completion:(id /* block */)arg4;

@end
