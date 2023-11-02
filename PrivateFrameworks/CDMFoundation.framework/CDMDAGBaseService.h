
@interface CDMDAGBaseService : CDMBaseService {
    CDMDynamicConfig * _currentConfig;
    NSString * _setupLanguageCode;
}

+ (id)getAssetConfig;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (void)handleXPCActivity:(id)arg1 withAssets:(id)arg2 withSelfMetadata:(id)arg3;
+ (void)handleXPCEvent:(id)arg1 fromStream:(id)arg2 withAssets:(id)arg3 withSelfMetadata:(id)arg4;
+ (bool)isAssetRequired;
+ (bool)isEnabled;
+ (id)xpcActivitySupported;
+ (id)xpcEventStreamsSupported;

- (void).cxx_destruct;
- (void)_handleSetupRequest:(id)arg1 withCallback:(id /* block */)arg2;
- (void)_handleWarmupRequest:(id)arg1 withCallback:(id /* block */)arg2;
- (id)handle:(id)arg1;
- (void)handleCommand:(id)arg1 withCallback:(id /* block */)arg2;
- (id)handleRequestCommandTypeNames;
- (id)initWithConfig:(id)arg1;
- (bool)isSetupRerunNeededForRequest:(id)arg1;
- (id)setup:(id)arg1;
- (id)supportedCommands;

@end
