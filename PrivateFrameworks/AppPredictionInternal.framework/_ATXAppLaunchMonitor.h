
@interface _ATXAppLaunchMonitor : NSObject {
    ATXAppClipUsageDuetContextUpdateListener * _appClipChangeListener;
    _ATXAppIconState * _appIconState;
    NSObject<OS_dispatch_queue> * _appLaunchHistoryQueue;
    _PASLock * _cdContext;
    _PASQueueLock * _history;
    NSObject<OS_dispatch_queue> * _logQueue;
    NSSet * _predictionUpdateBlacklist;
    <ATXPETEventTracker2Protocol> * _tracker;
    PETScalarEventTracker * _updateLaunchHistoryTracker;
    NSUserDefaults * _userDefaults;
}

+ (void)_logAppLaunch:(id)arg1 from:(unsigned long long)arg2;
+ (void)_logPredictionForBundleId:(id)arg1 poweringAppClipBundleId:(id)arg2 urlHash:(id)arg3 isClip:(bool)arg4 appLaunchReason:(id)arg5 appClipLaunchReason:(int)arg6 consumerType:(unsigned long long)arg7 consumerSubType:(unsigned char)arg8 context:(id)arg9;
+ (void)mergeAppLaunches:(id)arg1 andBacklightTransitions:(id)arg2 callingAppLaunchBlock:(id /* block */)arg3;
+ (int)petClipCaptureTypeFromDuetClipLaunchReason:(int)arg1;
+ (id)predictionUpdateBlacklistedBundleIds;

- (void).cxx_destruct;
- (void)_addLaunchWithLockWitness:(id)arg1 bundleId:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reason:(id)arg5 context:(id)arg6;
- (void)_logAppLaunchOverallCaptureRateForBundleId:(id)arg1 launchReason:(id)arg2;
- (void)_logAppPanelCaptureRateForBundleId:(id)arg1;
- (void)_logAppPanelLaunchRatioForBundleId:(id)arg1 launchReason:(id)arg2;
- (void)_syncForTests;
- (void)_updateAppIconStateForTests:(id)arg1;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reason:(id)arg4;
- (id)appIconState;
- (id)appInfoManager;
- (id)appLaunchHistogramManager;
- (id)appLaunchSequenceManager;
- (void)clearHistory;
- (void)clearIntentHistogramHistory;
- (id)dailyDose;
- (void)dealloc;
- (void)handleAppOrClipLaunchNotificationForBundleId:(id)arg1 poweringAppClipBundleId:(id)arg2 urlHash:(id)arg3 isClip:(bool)arg4 appLaunchReason:(id)arg5 appClipLaunchReason:(int)arg6 date:(id)arg7;
- (void)handleBacklightChangeNotificationWithValue:(int)arg1 date:(id)arg2;
- (id)init;
- (id)initWithAppInfoManager:(id)arg1 appLaunchHistogramManager:(id)arg2 appLaunchSequenceManager:(id)arg3 appDailyDose:(id)arg4 duetHelper:(id)arg5 contextBuilder:(id)arg6 tracker:(id)arg7;
- (id)initWithAppInfoManager:(id)arg1 appLaunchHistogramManager:(id)arg2 appLaunchSequenceManager:(id)arg3 appDailyDose:(id)arg4 duetHelper:(id)arg5 contextBuilder:(id)arg6 tracker:(id)arg7 predictionUpdateBlacklist:(id)arg8 heroPoiManager:(id)arg9;
- (id)initWithInMemoryStore;
- (bool)isValidAppLaunchBundleId:(id)arg1;
- (void)logAppLaunchForBundleId:(id)arg1 launchReason:(id)arg2;
- (void)processDonationsForPreviousAppSessionEndIfNeeded;
- (void)registerForAppChange;
- (void)registerForAppClipLaunch;
- (void)registerForBacklightChange;
- (void)start;
- (void)startDeltaRecording;
- (void)stop;
- (id)stopDeltaRecording;
- (void)swapDuetHelper:(id)arg1;
- (void)updateLaunchHistoryFromDuet:(double)arg1 callback:(id /* block */)arg2;

@end
