
@interface HDHRHeartbeatSeriesFeatureExclusivityManager : NSObject <HKFeatureStatusProvidingObserver> {
    id /* block */  ___unitTesting_postNotificationHandler;
    HKFeatureStatus * _aFibHistoryStatus;
    HKFeatureStatusManager * _aFibHistoryStatusManager;
    _HKDelayedOperation * _disableIrregularRhythmNotificationsIfAFibHistoryIsEnabledOperation;
    HKFeatureStatus * _irregularRhythmNotificationsStatus;
    HKFeatureStatusManager * _irregularRhythmNotificationsStatusManager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ __unitTesting_postNotificationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)__unitTesting_postNotificationHandler;
- (void)_fireSystemAlertBecauseIrregularRhythmNotificationsWereTurnedOff;
- (bool)_isFeatureStatusAvailableForUsageOrBlockedOnlyByMutualExclusivityRequirement:(id)arg1;
- (void)_queue_disableIrregularRhythmNotificationsIfAFibHistoryIsEnabled;
- (void)_scheduleInitialMaintenanceOperationWithProfile:(id)arg1;
- (void)dealloc;
- (void)featureStatusProviding:(id)arg1 didUpdateFeatureStatus:(id)arg2;
- (id)initWithIrregularRhythmNotificationsStatusManager:(id)arg1 aFibHistoryStatusManager:(id)arg2 profile:(id)arg3;
- (void)set__unitTesting_postNotificationHandler:(id /* block */)arg1;

@end
