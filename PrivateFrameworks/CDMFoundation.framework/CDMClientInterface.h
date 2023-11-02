
@interface CDMClientInterface : NSObject {
    CDMDataDispatcherContext * _dataDispatcherContext;
    bool  daemonKilled;
    NSError * errorFromSetup;
    bool  successFromSetup;
}

@property (nonatomic, readonly) bool daemonKilled;
@property (nonatomic, retain) CDMDataDispatcherContext *dataDispatcherContext;
@property (nonatomic, readonly) NSError *errorFromSetup;
@property (nonatomic, readonly) bool successFromSetup;

- (void).cxx_destruct;
- (bool)areAssetsAvailable:(id)arg1;
- (id)createNSError:(id)arg1 errorCode:(long long)arg2;
- (bool)daemonKilled;
- (id)dataDispatcherContext;
- (void)doHandleCommand:(id)arg1 forCallback:(id /* block */)arg2;
- (void)doServiceCenterInitWithConfig:(id)arg1;
- (id)errorFromSetup;
- (void)handleOverridesAssetUpdateEvent:(id)arg1;
- (id)init;
- (id)initWithCallingBundleId:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isLighthouseAPIEnabled;
- (void)processCDMNluRequest:(id)arg1;
- (void)processCDMNluRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)registerWithAssetsDelegate:(id)arg1;
- (void)setDataDispatcherContext:(id)arg1;
- (void)setup:(id)arg1;
- (void)setup:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)successFromSetup;
- (void)warmupWithCompletionHandler:(id /* block */)arg1;

@end
