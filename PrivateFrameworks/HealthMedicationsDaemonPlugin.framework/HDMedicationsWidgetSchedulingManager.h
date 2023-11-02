
@interface HDMedicationsWidgetSchedulingManager : NSObject <HDDataObserver, HDMedicationScheduleObserver, HDProfileReadyObserver> {
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSCountedSet * _queue_reloadReasons;
    _HKDelayedOperation * _reloadOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_reloadReasonsStringForReasons:(id)arg1;
+ (id)defaultMedicationsWidgetTimelineControllerForProfile:(id)arg1;

- (void).cxx_destruct;
- (void)_queue_reloadWidgets;
- (void)_reloadWidgetIfNecessaryWithDoseEvents:(id)arg1;
- (void)_runReloadOperationForReason:(long long)arg1;
- (void)_startObservingMedicationChanges;
- (void)_stopObservingMedicationChanges;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)scheduleManager:(id)arg1 didAddOrModifySchedules:(id)arg2;
- (void)scheduleManager:(id)arg1 didPruneScheduleItems:(id)arg2;
- (void)scheduleManagerDidRescheduleMedications:(id)arg1;

@end
