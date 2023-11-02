
@interface KMProviderBridgeFactory : NSObject

+ (void)initialize;

- (void)bootstrapBridgeListenersWithHandler:(id /* block */)arg1;
- (id)bridgeForOriginAppId:(id)arg1;
- (id)bridgeForOriginAppId:(id)arg1 languageCode:(id)arg2;
- (id)globalTermMultiDatasetBridgeWithModifiedOriginAppIds:(id)arg1 deletedOriginAppIds:(id)arg2 languageCode:(id)arg3;
- (id)intentVocabularyMultiDatasetBridge;

@end
