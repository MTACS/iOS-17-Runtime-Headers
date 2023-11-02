
@interface WLKCachedBagManager : NSObject {
    NSMutableDictionary * _memoryCache;
    NSObject<OS_dispatch_queue> * _operationQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_extractMissingKeys:(id)arg1 dictionary:(id)arg2;
- (bool)_isParameterConfigurationValid:(id)arg1 amsBag:(id)arg2 completion:(id /* block */)arg3;
- (void)_queryAMSBag:(id)arg1 amsBag:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)_queryAMSCachedBag:(id)arg1 amsBag:(id)arg2 observationToken:(unsigned long long*)arg3 waitForUpdateOnCacheMiss:(bool)arg4 resultHandler:(id /* block */)arg5;
- (id)_queryMemoryCache:(id)arg1;
- (void)fetchValuesWithCompletion:(id)arg1 waitForUpdateOnCacheMiss:(bool)arg2 amsBag:(id)arg3 completion:(id /* block */)arg4;
- (id)init;

@end
