
@interface CDMComposerService : CDMBaseService {
    NSLock * _aneLock;
    NSOrderedSet * _availableServiceGraphs;
    NSString * _languageCode;
    CDMServiceGraphRunner * _serviceGraphRunner;
    NSArray * _servicesArray;
}

- (void).cxx_destruct;
- (void)_handleEmbeddingRequest:(id)arg1 withCallback:(id /* block */)arg2;
- (void)_handleListGraphs:(id)arg1 withCallback:(id /* block */)arg2;
- (void)_handleNLUPreprocessRequest:(id)arg1 withCallback:(id /* block */)arg2;
- (void)_handleNLURequest:(id)arg1 withCallback:(id /* block */)arg2;
- (void)_handleSetupRequest:(id)arg1 withCallback:(id /* block */)arg2;
- (void)_handleSsuInferenceRequest:(id)arg1 withCallback:(id /* block */)arg2;
- (id)createServiceGraphForCommand:(id)arg1 withSelfMetadata:(id)arg2 withCallback:(id /* block */)arg3;
- (void)failWithError:(id)arg1 callback:(id /* block */)arg2;
- (void)failWithError:(id)arg1 rawCommand:(id)arg2 callback:(id /* block */)arg3;
- (void)handleCommand:(id)arg1 withCallback:(id /* block */)arg2;
- (id)initWithConfig:(id)arg1;
- (id)prepareRequestHandler:(id)arg1 withCallback:(id /* block */)arg2;
- (id)supportedCommands;
- (void)updateServiceGraphRunner:(id)arg1;
- (void)updateServices:(id)arg1;

@end
