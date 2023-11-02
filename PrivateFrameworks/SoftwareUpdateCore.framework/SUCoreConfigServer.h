
@interface SUCoreConfigServer : SUCoreConfig {
    NSObject<OS_dispatch_queue> * _clientDelegateQueue;
    SUCoreConfig * _coreConfig;
    MAAsset * _lastLocatedAsset;
    NSDate * _lastScanTime;
    NSMutableDictionary * _listenerDelegates;
    NSDate * _nextScanTime;
    SUCorePersistedState * _persistedState;
    SUCoreFSM * _stateMachine;
    NSTimer * _timer;
    NSString * _uuidString;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientDelegateQueue;
@property (nonatomic, retain) SUCoreConfig *coreConfig;
@property (nonatomic, retain) MAAsset *lastLocatedAsset;
@property (nonatomic, retain) NSDate *lastScanTime;
@property (nonatomic, retain) NSMutableDictionary *listenerDelegates;
@property (nonatomic, retain) NSDate *nextScanTime;
@property (nonatomic, retain) SUCorePersistedState *persistedState;
@property (nonatomic, retain) SUCoreFSM *stateMachine;
@property (nonatomic, retain) NSTimer *timer;
@property (nonatomic, retain) NSString *uuidString;

+ (id)_generateStateTable;
+ (id)allowedServerKeys;
+ (id)allowedServerProjects;
+ (id)persistedStateFilePath;
+ (id)sharedServerSettings;

- (void).cxx_destruct;
- (id)_nextScanTimeFromDate:(id)arg1;
- (id)_stateSafeDetermineNextScanTime;
- (id)_stateSafeDownloadOptions;
- (void)_stateSafeInformDelegatesOfConfiguration:(id)arg1 error:(id)arg2;
- (id)_stateSafeLoadUUIDString;
- (void)_stateSafeResetState;
- (id)_stateSafeSelectBestAssetFromArray:(id)arg1 error:(id*)arg2;
- (id)_stateSafeSelectBestAssetFromMultipleAssetArray:(id)arg1 bestAsset:(id*)arg2 selectionReason:(id*)arg3;
- (void)_stateSafeSendInstalledEventWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_stateSafeSendNewEvent:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_stateSafeSendScheduledEventWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_stateSafeUpdateState;
- (long long)actionConfigAdjustSettings:(id)arg1 error:(id*)arg2;
- (long long)actionConfigDownloadAsset:(id)arg1 error:(id*)arg2;
- (long long)actionConfigDownloadCatalog:(id)arg1 error:(id*)arg2;
- (long long)actionConfigQueryAsset:(id)arg1 error:(id*)arg2;
- (long long)actionConfigScheduleScan:(id)arg1 error:(id*)arg2;
- (long long)actionUnknownAction:(id)arg1 error:(id*)arg2;
- (id)clientDelegateQueue;
- (id)coreConfig;
- (void)dealloc;
- (id)init;
- (void)installServerSettings;
- (id)lastLocatedAsset;
- (id)lastScanTime;
- (void)listenForConfigChanges:(id)arg1 withName:(id)arg2;
- (id)listenerDelegates;
- (id)nextScanTime;
- (long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id*)arg6;
- (id)persistedState;
- (id)scheduledActivityName;
- (void)setClientDelegateQueue:(id)arg1;
- (void)setCoreConfig:(id)arg1;
- (void)setLastLocatedAsset:(id)arg1;
- (void)setLastScanTime:(id)arg1;
- (void)setListenerDelegates:(id)arg1;
- (void)setNextScanTime:(id)arg1;
- (void)setPersistedState:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setUuidString:(id)arg1;
- (id)stateMachine;
- (id)timer;
- (id)uuidString;

@end
