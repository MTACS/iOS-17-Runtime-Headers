
@interface SOAlarmsPublisher : NSObject {
    MTAlarmManager * _alarmManager;
    SOAlarmsSnapshot * _alarmsSnapshot;
    NSMutableOrderedSet * _dismissedAlarms;
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _subscribers;
    NSString * _typeName;
}

@property (nonatomic, readonly) NSString *typeName;

- (void).cxx_destruct;
- (void)_createNewSnapshotWithCompletion:(id /* block */)arg1;
- (void)_notifySubscribersOfEvent:(long long)arg1;
- (void)_startObserving;
- (void)addSubscriber:(id)arg1;
- (void)alarmFired:(id)arg1;
- (void)alarmsAdded:(id)arg1;
- (void)alarmsRemoved:(id)arg1;
- (void)alarmsUpdated:(id)arg1;
- (void)dealloc;
- (void)firingAlarmChanged:(id)arg1;
- (void)firingAlarmDismissed:(id)arg1;
- (void)getCurrentSnapshotWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)removeSubscriber:(id)arg1;
- (void)stateReset:(id)arg1;
- (id)typeName;

@end
