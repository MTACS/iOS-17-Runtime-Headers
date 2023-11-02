
@interface HDMCOvulationConfirmationStateManager : NSObject <HDFeatureSettingsManagerObserver, HKMCSettingsManagerObserver> {
    HKCalendarCache * _calendarCache;
    HDKeyValueDomain * _keyValueDomain;
    HDPrimaryProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HKMCSettingsManager * _settingsManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_daysWithWristTemperatureSamplesInDayIndexRange:(struct { long long x1; long long x2; })arg1 calendarCache:(id)arg2 error:(id*)arg3;
- (void)_queue_clearStateIfNecessary;
- (void)_triggerImmediateSyncWithReason:(id)arg1;
- (id)eventsToScheduleForAnalysis:(id)arg1 settingsManager:(id)arg2 scheduler:(id)arg3 error:(id*)arg4;
- (void)featureSettingsManager:(id)arg1 didUpdateSettingsForFeatureIdentifier:(id)arg2;
- (id)initWithProfile:(id)arg1 settingsManager:(id)arg2 queue:(id)arg3;
- (id)scheduledNotificationDaysShiftedFromCalendarMethodWithEvent:(id)arg1 error:(id*)arg2;
- (id)scheduledNotificationFertileWindowEndDayIndexWithEvent:(id)arg1 error:(id*)arg2;
- (void)settingsManagerDidUpdateNotificationSettings:(id)arg1;
- (bool)transitionToFiredNotificationStateWithRequest:(id)arg1 settingsManager:(id)arg2 error:(id*)arg3;

@end
