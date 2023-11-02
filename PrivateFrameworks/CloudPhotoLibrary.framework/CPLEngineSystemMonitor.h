
@interface CPLEngineSystemMonitor : NSObject <CPLBatteryMonitorDelegate, CPLEngineComponent, CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate> {
    bool  _allowBackgroundOperationsBoost;
    bool  _allowOperationsBoost;
    bool  _closed;
    CPLEngineLibrary * _engineLibrary;
    bool  _hasSetupBatteryMonitor;
    bool  _modifyingBudgetOverride;
    unsigned long long  _newBudgetsToOverride;
    unsigned long long  _newBudgetsToStopOverriding;
    bool  _overrideDataSystemBudgetPermanently;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _reasonsToOverrideSystemBudget;
    NSMutableDictionary * _scheduledOverrides;
    NSURL * _volumeURL;
    CPLNetworkWatcher * _watcher;
}

@property (readonly) bool canBoostBackgroundOperations;
@property (readonly) bool canBoostOperations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long diskPressureState;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long freeDiskSpaceSize;
@property (readonly) bool hasEnoughPowerForAutomaticOverride;
@property (readonly) unsigned long long hash;
@property (readonly) bool isDataBudgetOverriden;
@property (readonly) bool isNetworkConnected;
@property (readonly) bool isNetworkConstrained;
@property (readonly) bool isOnCellularOrUnknown;
@property (readonly) Class superclass;

+ (id)descriptionForBudget:(unsigned long long)arg1;
+ (id)descriptionForBudgets:(unsigned long long)arg1;
+ (void)enumerateSystemBudgets:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
+ (void)initialize;
+ (double)nextOverrideTimeIntervalForSystemBudgets:(unsigned long long)arg1;
+ (void)setShouldIgnoreLowDiskSpace:(bool)arg1;
+ (bool)shouldIgnoreLowDiskSpace;

- (void).cxx_destruct;
- (void)_attemptScheduleRecoveryOverride:(unsigned long long)arg1 withReason:(unsigned long long)arg2;
- (bool)_hasPermanentDataOverride;
- (double)_minimumBatteryLevelForAutoOverrideEnergyBudget;
- (void)_permanentDataOverrideHasChanged;
- (void)_startOverridingBudget:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (void)_startWatchingPermanentDataOverride;
- (void)_stopOverridingBudget:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (void)_stopWatchingPermanentDataOverride;
- (void)_withSystemBudgetOverride:(id /* block */)arg1;
- (void)batteryLevelDidChangeWithLevel:(double)arg1;
- (bool)canBoostBackgroundOperations;
- (bool)canBoostOperations;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (unsigned long long)diskPressureState;
- (id)engineLibrary;
- (unsigned long long)freeDiskSpaceSize;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (bool)hasEnoughPowerForAutomaticOverride;
- (id)initWithEngineLibrary:(id)arg1;
- (bool)isDataBudgetOverriden;
- (bool)isNetworkConnected;
- (bool)isNetworkConstrained;
- (bool)isOnCellularOrUnknown;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)scheduledOverrideDidEnd:(id)arg1;
- (void)startAutomaticOverridingSystemBudgets:(unsigned long long)arg1;
- (void)startOverridingSystemBudgets:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (void)startOverridingSystemBudgetsForClient:(unsigned long long)arg1;
- (void)stopAutomaticOverridingSystemBudgets:(unsigned long long)arg1;
- (void)stopOverridingSystemBudgets:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (void)stopOverridingSystemBudgetsForClient:(unsigned long long)arg1;
- (void)updateDiskPressureState;
- (void)watcher:(id)arg1 stateDidChangeToNetworkState:(id)arg2;

@end
