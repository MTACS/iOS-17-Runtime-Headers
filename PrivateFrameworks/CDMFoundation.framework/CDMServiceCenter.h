
@interface CDMServiceCenter : NSObject <CDMServiceObserver> {
    CDMAssetsManager * _cdmAssetsManager;
    NSObject<OS_dispatch_queue> * _cdmServiceCenterQueue;
    NSMutableDictionary * _commandServicesDict;
    CDMComposerService * _composerService;
    CDMConfig * _config;
    CDMDynamicConfig * _currentConfig;
    NSArray * _dagServices;
    id /* block */  _defaultCallback;
    bool  _enableSetAssetsProvisionalAndPromote;
    NSArray * _enabledDAGServiceNames;
    NSArray * _foundationServices;
    CDMServiceGraphRunner * _serviceGraphRunner;
    NSArray * _services;
    long long  _systemState;
    NSObject<OS_os_transaction> * transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long systemState;

+ (id)getDynamicConfigWithAssetCollectionForServices:(id)arg1 inGraph:(id)arg2 withLocale:(id)arg3 withError:(id*)arg4 withSelfMetadata:(id)arg5;

- (void).cxx_destruct;
- (bool)areAssetsAvailable:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)extractEnabledServiceNames:(id)arg1;
- (id)extractEnabledServices:(id)arg1;
- (id)getAssetPaths;
- (id)getEnabledDAGServiceNames;
- (id)getEnabledDAGServiceNamesForGraph:(id)arg1;
- (id)getFoundationServices;
- (id)getServices;
- (void)handleCommand:(id)arg1 forCallback:(id /* block */)arg2;
- (bool)handleOverridesAssetUpdateEvent:(id)arg1;
- (void)handleSetup:(id)arg1 forCallback:(id /* block */)arg2;
- (bool)handleXPCActivity:(id)arg1 fromIdentifier:(id)arg2 withRegister:(id)arg3;
- (bool)handleXPCEvent:(id)arg1 fromStream:(id)arg2 withRegister:(id)arg3;
- (void)initWithConfig:(id)arg1;
- (bool)isServiceNotReady:(id)arg1 withServiceStateMap:(id)arg2;
- (void)mergeConfig:(id)arg1;
- (bool)promoteAssetsForServices:(id)arg1 withServiceState:(id)arg2 withSelfContextId:(id)arg3 withSelfMetadata:(id)arg4 withDataDispatcherContext:(id)arg5;
- (bool)registerWithAssetsDelegate:(id)arg1;
- (bool)setAssetsProvisionalForServices:(id)arg1 withSelfContextId:(id)arg2 withSelfMetadata:(id)arg3 withDataDispatcherContext:(id)arg4;
- (void)setSystemState:(long long)arg1;
- (void)setupAssetsForServices:(id)arg1 withError:(id*)arg2;
- (void)setupAssetsForServices:(id)arg1 withError:(id*)arg2 andSelfMetadata:(id)arg3 dataDispatcherContext:(id)arg4;
- (void)setupCDMAssetManagerWithError:(id*)arg1;
- (void)setupEmbeddingConfigsWithError:(id*)arg1;
- (bool)shouldCDMAssetManagerReSetup;
- (void)smService:(id)arg1 didPublishCommand:(id)arg2;
- (void)smService:(id)arg1 didPublishRequest:(id)arg2 withResponseCallback:(id /* block */)arg3;
- (long long)systemState;

@end
