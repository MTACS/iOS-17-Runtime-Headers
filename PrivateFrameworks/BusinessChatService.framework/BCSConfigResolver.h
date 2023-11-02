
@interface BCSConfigResolver : NSObject <BCSConfigResolving> {
    <BCSConfigCaching> * _configCache;
    <BCSConfigCacheSkipping> * _configCacheSkipper;
    <BCSFetchTrigger> * _megashardFetchTrigger;
    <BCSMetricFactoryProtocol> * _metricFactory;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configItemWithType:(long long)arg1 clientBundleID:(id)arg2 metric:(id)arg3 completion:(id /* block */)arg4;

@end
