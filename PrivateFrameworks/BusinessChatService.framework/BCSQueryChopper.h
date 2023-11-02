
@interface BCSQueryChopper : NSObject <BCSQueryChopperProtocol> {
    <BCSMetricFactoryProtocol> * _metricFactory;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)queryChopperDelegate:(id)arg1 fetchLinkItemModelWithURL:(id)arg2 isBloomFilterCached:(bool)arg3 forClientBundleID:(id)arg4 metric:(id)arg5 completion:(id /* block */)arg6;
- (void)queryChopperDelegate:(id)arg1 isBusinessRegisteredForURL:(id)arg2 isBloomFilterCached:(bool)arg3 forClientBundleID:(id)arg4 metric:(id)arg5 completion:(id /* block */)arg6;

@end
