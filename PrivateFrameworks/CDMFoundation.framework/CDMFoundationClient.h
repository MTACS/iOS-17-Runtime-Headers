
@interface CDMFoundationClient : CDMClientInterface {
    CDMDataDispatcherContext * _dataDispatcherContext;
    <CDMClientDelegate> * _delegate;
    CDMDynamicConfig * _dynamicConfig;
    XPCStreamEventRegister * _eventRegister;
    NSString * _localeIdentifier;
    CDMServiceCenter * _serviceCenter;
}

+ (id)createEmptyNluRequestId;

- (void).cxx_destruct;
- (bool)areAssetsAvailable:(id)arg1;
- (void)doHandleCommand:(id)arg1 forCallback:(id /* block */)arg2;
- (void)doServiceCenterInitWithConfig:(id)arg1;
- (void)handleOverridesAssetUpdateEvent:(id)arg1;
- (bool)handleXPCActivity:(id)arg1 fromIdentifier:(id)arg2;
- (bool)handleXPCEvent:(id)arg1 fromStream:(id)arg2;
- (id)handleableXPCActivities;
- (id)handleableXPCEventStreams;
- (id)init;
- (id)initWithCallingBundleId:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 withCallingBundleId:(id)arg2;
- (bool)isLighthouseAPIEnabled;
- (void)processCDMNluRequest:(id)arg1;
- (void)processCDMNluRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processCDMNluRequest:(id)arg1 nullableCompletionHandler:(id /* block */)arg2;
- (bool)registerWithAssetsDelegate:(id)arg1;
- (void)setDataDispatcherContext:(id)arg1;
- (void)setup:(id)arg1;
- (void)setup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setup:(id)arg1 nullableCompletionHandler:(id /* block */)arg2;
- (void)waitForDataDispatcherCompletion;
- (void)warmupWithCompletionHandler:(id /* block */)arg1;

@end
