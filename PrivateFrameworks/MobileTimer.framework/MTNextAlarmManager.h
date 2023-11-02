
@interface MTNextAlarmManager : NSObject {
    MTAlarmManager * _alarmManager;
    NSSet * _nextAlarms;
    <NAScheduler> * _serializer;
    id /* block */  _updateHandler;
}

@property (nonatomic, retain) MTAlarmManager *alarmManager;
@property (nonatomic, retain) NSSet *nextAlarms;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)_handleAlarmsDidChange;
- (id)alarmManager;
- (void)calculateNextAlarms;
- (id)init;
- (id)nextAlarms;
- (id)serializer;
- (void)setAlarmManager:(id)arg1;
- (void)setNextAlarms:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
