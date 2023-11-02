
@interface HDMCNotificationManager : NSObject <HDFeatureSettingsManagerObserver, HDMCAnalysisManagerObserver, HKMCSettingsManagerObserver> {
    HDMCAnalysisManager * _analysisManager;
    HDKeyValueDomain * _deviationDismissalKeyValueDomain;
    HDMCDeviceScopedStorageManager * _deviceScopedStorageManager;
    HDKeyValueDomain * _fertileWindowNotificationStateKeyValueDomain;
    HKMCAnalysis * _lastAnalysis;
    NSNumber * _lastDismissalDayIndex;
    HDMCNotificationSyncManager * _notificationSyncManager;
    HDMCOvulationConfirmationStateManager * _ovulationConfirmationStateManager;
    HDPrimaryProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDRestorableAlarm * _scheduler;
    HKMCSettingsManager * _settingsManager;
    HDKeyValueDomain * _unconfirmedDeviationStateKeyValueDomain;
    NSDate * _unitTest_currentDateOverride;
    id /* block */  _unitTest_didSkipNotificationForDueEventHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDRestorableAlarm *scheduler;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *unitTest_currentDateOverride;
@property (nonatomic, copy) id /* block */ unitTest_didSkipNotificationForDueEventHandler;

- (void).cxx_destruct;
- (id)_currentDate;
- (id)_notificationCategoriesWithBasicAnalytics;
- (id)_periodEventFromNotificationCategory:(id)arg1 notificationFireDayIndex:(long long)arg2;
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2;
- (void)_queue_notificationOrSensorInputSettingsDidChange;
- (void)_queue_removeAllScheduledNotificationsIfNotEnabled;
- (void)_queue_rescheduleNotificationsForAnalysis:(id)arg1;
- (id)_requestFromAlarmEvent:(id)arg1;
- (void)_triggerImmediateSyncWithReason:(id)arg1;
- (void)_unitTest_didSkipNotificationForDueEvent:(id)arg1 reason:(long long)arg2;
- (void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2;
- (void)featureSettingsManager:(id)arg1 didUpdateSettingsForFeatureIdentifier:(id)arg2;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3 deviceScopedStorageManager:(id)arg4 notificationSyncManager:(id)arg5;
- (void)invalidate;
- (id)scheduledNotificationsWithError:(id*)arg1;
- (id)scheduler;
- (void)setUnitTest_currentDateOverride:(id)arg1;
- (void)setUnitTest_didSkipNotificationForDueEventHandler:(id /* block */)arg1;
- (void)settingsManagerDidUpdateNotificationSettings:(id)arg1;
- (void)start;
- (id)unitTest_currentDateOverride;
- (id /* block */)unitTest_didSkipNotificationForDueEventHandler;

@end
