
@interface _LTDConfigurationService : NSObject

+ (id)_queue;
+ (void)aneConfigurationWithCompletion:(id /* block */)arg1;
+ (id)aneConfigurationWithError:(id*)arg1;
+ (void)asrConfigurationWithCompletion:(id /* block */)arg1;
+ (id)asrConfigurationWithError:(id*)arg1;
+ (void)assetConfigurationWithCompletion:(id /* block */)arg1;
+ (id)assetConfigurationWithError:(id*)arg1;
+ (id)cache;
+ (void)configurationForType:(long long)arg1 completion:(id /* block */)arg2;
+ (id)configurationForType:(long long)arg1 error:(id*)arg2;
+ (id)deserializedPlistContentsOf:(id)arg1 error:(id*)arg2;
+ (id)fileNameForType:(long long)arg1;
+ (void)flushCache;
+ (void)offlineConfigurationWithCompletion:(id /* block */)arg1;
+ (id)offlineConfigurationWithError:(id*)arg1;
+ (id)overlay:(id)arg1 with:(id)arg2;
+ (id)preferenceOverridesFor:(long long)arg1;
+ (void)siriConfigurationWithCompletion:(id /* block */)arg1;
+ (id)siriConfigurationWithError:(id*)arg1;
+ (void)supportedLocalePairsForTask:(long long)arg1 completion:(id /* block */)arg2;
+ (id)supportedLocalePairsForTask:(long long)arg1 error:(id*)arg2;
+ (void)textStreamingConfigurationWithCompletion:(id /* block */)arg1;
+ (id)textStreamingConfigurationWithError:(id*)arg1;
+ (id)urlForType:(long long)arg1 source:(long long)arg2;

@end
