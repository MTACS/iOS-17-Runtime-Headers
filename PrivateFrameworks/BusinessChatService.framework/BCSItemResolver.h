
@interface BCSItemResolver : NSObject <BCSItemResolving> {
    <BCSItemCaching> * _itemCache;
    <BCSItemCacheSkipping> * _itemCacheSkipper;
    <BCSItemRemoteFetching> * _itemRemoteFetcher;
    <BCSMetricFactoryProtocol> * _metricFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedItemMatching:(id)arg1;
- (void)itemMatching:(id)arg1 config:(id)arg2 clientBundleID:(id)arg3 metric:(id)arg4 completion:(id /* block */)arg5;

@end
