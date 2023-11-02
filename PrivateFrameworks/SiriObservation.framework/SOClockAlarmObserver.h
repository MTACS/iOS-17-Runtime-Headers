
@interface SOClockAlarmObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {
    SOClockAlarmManager * _alarmManager;
    AFClockAlarmSnapshot * _alarmSnapshot;
    NSObject<OS_dispatch_group> * _alarmSnapshotGroup;
    long long  _alarmSnapshotGroupDepth;
    AFClockItemStorage * _alarmStorage;
    NSUUID * _alarmsChangedToken;
    AFInstanceContext * _instanceContext;
    NSHashTable * _listeners;
    NSMutableOrderedSet * _notifiedFiringAlarmIDs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_alarmSnapshot;
- (void)_beginGroup;
- (void)_consolidateNotifiedFiringAlarms;
- (void)_endGroup;
- (void)_enumerateListenersUsingBlock:(id /* block */)arg1;
- (void)_fetchAlarmsForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleFetchAlarmsForReason:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleFetchAlarmsForReason:(id)arg1 result:(id)arg2 completion:(id /* block */)arg3;
- (void)_reset;
- (void)_setUp;
- (void)_tearDown;
- (void)addListener:(id)arg1;
- (void)alarmFired:(id)arg1;
- (void)alarmsAdded:(id)arg1;
- (void)alarmsChanged:(id)arg1;
- (void)alarmsRemoved:(id)arg1;
- (void)alarmsUpdated:(id)arg1;
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;
- (void)dealloc;
- (void)firingAlarmChanged:(id)arg1;
- (void)firingAlarmDismissed:(id)arg1;
- (void)getAlarmSnapshotWithCompletion:(id /* block */)arg1;
- (void)getFiringAlarmIDsWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithInstanceContext:(id)arg1;
- (void)invalidate;
- (void)removeListener:(id)arg1;
- (void)stateReset:(id)arg1;

@end
