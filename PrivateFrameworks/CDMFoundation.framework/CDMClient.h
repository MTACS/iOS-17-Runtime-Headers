
@interface CDMClient : CDMClientInterface <CDMEmbeddingClient, CDMSsuInferenceClient> {
    CDMClientInterface * _client;
}

+ (id)graphNameForEmbedding;
+ (id)graphNameForSsuInference;
+ (bool)useXPC;

- (void).cxx_destruct;
- (bool)areAssetsAvailable:(id)arg1;
- (bool)daemonKilled;
- (void)dealloc;
- (void)doHandleCommand:(id)arg1 forCallback:(id /* block */)arg2;
- (void)doServiceCenterInitWithConfig:(id)arg1;
- (id)errorFromSetup;
- (void)handleOverridesAssetUpdateEvent:(id)arg1;
- (id)init;
- (void)initProxyObject:(bool)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)initWithXPC:(bool)arg1;
- (id)initWithXPCDelegate:(bool)arg1 withDelegate:(id)arg2;
- (bool)isLighthouseAPIEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)processCDMNluRequest:(id)arg1;
- (void)processCDMNluRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processEmbeddingRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processEmbeddingRequest:(id)arg1 requestId:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)processNLUPreprocessRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processSsuInferenceRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)registerWithAssetsDelegate:(id)arg1;
- (void)setDataDispatcherContext:(id)arg1;
- (void)setup:(id)arg1;
- (void)setup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setupKVOForwarding;
- (void)setupSsuInference:(id)arg1 serviceStateDirectory:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setupWithLocale:(id)arg1 embeddingVersion:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sharedInitTasks;
- (bool)successFromSetup;
- (void)waitForDataDispatcherCompletion;
- (void)warmupWithCompletionHandler:(id /* block */)arg1;

@end
