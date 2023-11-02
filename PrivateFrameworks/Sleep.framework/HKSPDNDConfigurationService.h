
@interface HKSPDNDConfigurationService : NSObject <DNDGlobalConfigurationServiceListener, DNDModeConfigurationServiceListener, HDSPSleepFocusModeBridge, HKSPDiagnosticsProvider, HKSPSleepFocusModeBridge> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    HKSPSleepFocusConfiguration * _cachedSleepFocusConfiguration;
    <HKSPSleepFocusModeBridgeDelegate> * _delegate;
    <NAScheduler> * _dndScheduler;
    DNDGlobalConfigurationService * _globalConfigService;
    DNDModeConfigurationService * _modeConfigService;
    unsigned long long  _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSPSleepFocusModeBridgeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DNDGlobalConfigurationService *globalConfigService;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DNDModeConfigurationService *modeConfigService;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

+ (bool)_readGlobalConfigForOptions:(unsigned long long)arg1;
+ (id)sleepFocusConfigurationService;
+ (id)sleepFocusConfigurationServiceWithOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_cacheSleepFocusConfig;
- (void)_checkForUpdatedSleepFocusConfig;
- (void)_fetchUpdatedSleepFocusConfigurationWithCompletion:(id /* block */)arg1;
- (void)_loadCachedSleepFocusConfig;
- (bool)_lock_updateCachedSleepFocusConfig:(id)arg1 updatedSleepFocusConfig:(id)arg2;
- (void)_notifyDelegate;
- (bool)_readGlobalConfig;
- (id)_sleepFocusConfiguration:(id*)arg1 checkCache:(bool)arg2;
- (void)_startListeningToGlobalConfigService;
- (void)_startListeningToModeConfigService;
- (void)_stopListeningToGlobalConfigService;
- (void)_stopListeningToModeConfigService;
- (bool)_uncachedMirrorsFocusModes:(id*)arg1;
- (id)_uncachedModeConfiguration:(id*)arg1;
- (void)_updateCacheAndNotifyWithBlock:(id /* block */)arg1;
- (void)_updateCachedSleepFocusConfig:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)delegate;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id)globalConfigService;
- (void)globalConfigurationService:(id)arg1 didReceiveUpdatedPairSyncState:(unsigned long long)arg2;
- (bool)hasSleepFocusMode:(id*)arg1;
- (id)initWithModeConfigService:(id)arg1 globalConfigService:(id)arg2;
- (id)initWithModeConfigService:(id)arg1 globalConfigService:(id)arg2 options:(unsigned long long)arg3;
- (void)invalidate;
- (id)modeConfigService;
- (void)modeConfigurationService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;
- (unsigned long long)options;
- (void)setDelegate:(id)arg1;
- (id)sleepFocusConfiguration:(id*)arg1;
- (void)updateCachedMirrorsFocusModes:(bool)arg1;
- (void)updateCachedUUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon

- (bool)createSleepFocusMode:(id*)arg1;
- (bool)removeSleepFocusMode:(id*)arg1;

@end
