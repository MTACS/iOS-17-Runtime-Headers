
@interface CDMSSUService : CDMDAGBaseService {
    SNLPSSUMatcher * __matcher;
    NSObject<OS_dispatch_queue> * __matcherRequestQueue;
    double  __matcherRequestTimeoutSec;
    SSUSystemState * __systemState;
}

@property (nonatomic, readonly) SNLPSSUMatcher *_matcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_matcherRequestQueue;
@property (nonatomic) double _matcherRequestTimeoutSec;
@property (nonatomic, readonly) SSUSystemState *_systemState;

+ (id)acquireOrBuildMatcher:(id)arg1 systemState:(id)arg2 error:(id*)arg3;
+ (id)assetDirectoryURLForServiceAssetBundle:(id)arg1;
+ (id)buildDeviceSystemStateLocale:(id)arg1;
+ (id)buildMatcherRequestQueue;
+ (id)buildSystemStateForServiceStateDirectory:(id)arg1 locale:(id)arg2;
+ (id)buildSystemStateForSsuSandboxDirectories:(id)arg1 locale:(id)arg2;
+ (id)buildSystemStateForSystemEventWithLocale:(id)arg1;
+ (void)dispatchAsyncWithTransaction:(id)arg1 block:(id /* block */)arg2;
+ (void)fetchVoiceShortcutsWithMatcher:(id)arg1 assetCollection:(id)arg2 block:(id /* block */)arg3;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (id)getAssetsDirectory:(id)arg1 factorName:(id)arg2 error:(id*)arg3;
+ (id)getMatcherWithAssetCollection:(id)arg1 systemState:(id)arg2;
+ (id)getSystemEventStreamQueue;
+ (void)handleMaintenanceMode:(id)arg1;
+ (void)handlePostInstall:(id)arg1;
+ (void)handleTrialAssetUpdate:(id)arg1;
+ (void)handleVoiceShortcutsCompletion:(id)arg1 voiceShortcuts:(id)arg2 voiceShortcutsError:(id)arg3 block:(id /* block */)arg4;
+ (void)handleXPCActivity:(id)arg1 withAssets:(id)arg2 withSelfMetadata:(id)arg3;
+ (void)handleXPCEvent:(id)arg1 fromStream:(id)arg2 withAssets:(id)arg3 withSelfMetadata:(id)arg4;
+ (void)handleXPCEventApplicationInner:(id)arg1 assetCollection:(id)arg2 block:(id /* block */)arg3;
+ (void)handleXPCEventApplicationRegistered:(id)arg1 assetCollection:(id)arg2;
+ (void)handleXPCEventApplicationUnregistered:(id)arg1 assetCollection:(id)arg2;
+ (void)handleXPCEventShortcutsDatabaseChanged:(id)arg1;
+ (bool)isAssetRequired;
+ (bool)isEnabled;
+ (id)lookupSSUSandboxDirectories:(id)arg1;
+ (void)performFullCacheUpdate:(id)arg1 assetCollection:(id)arg2 systemState:(id)arg3;
+ (id)xpcActivitySupported;
+ (id)xpcEventStreamsSupported;

- (void).cxx_destruct;
- (id)_matcher;
- (id)_matcherRequestQueue;
- (double)_matcherRequestTimeoutSec;
- (id)_systemState;
- (id)abortHandleWithErrorCode:(long long)arg1 description:(id)arg2;
- (id)errorSetupWithErrorDescription:(id)arg1;
- (bool)executeMatcherRequestBlockWithTimeout:(id /* block */)arg1;
- (id)failSetupWithErrorDescription:(id)arg1;
- (void)forceAppsRescanIfEnabled;
- (void)forceFullCacheUpdateIfEnabled;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (void)performAppRescanForSandboxInstalledApps;
- (void)set_matcherRequestTimeoutSec:(double)arg1;
- (id)setup:(id)arg1;

@end
