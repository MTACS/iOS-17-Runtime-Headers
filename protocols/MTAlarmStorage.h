
@protocol MTAlarmStorage <NSObject>

@required

- (void)addAlarm:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: MTAlarm *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)alarmWithIdentifier:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTAlarm *, void*
- (NSArray *)alarms;
- (NSArray *)allAlarms;
- (void)dismissAlarmWithIdentifier:(void *)arg1 dismissAction:(void *)arg2 withCompletion:(void *)arg3 source:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)dismissAlarmWithIdentifier:(void *)arg1 dismissDate:(void *)arg2 dismissAction:(void *)arg3 withCompletion:(void *)arg4 source:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)getAlarmsWithCompletion:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, MTAlarm *, NSError *, void*
- (NSDate *)lastModifiedDate;
- (MTAlarm *)nextAlarm;
- (void)registerObserver:(id <MTAlarmObserver>)arg1;
- (void)removeAlarm:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: MTAlarm *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)removeAlarmWithIdentifier:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)removeAllAlarmsForSource:(id <MTSource>)arg1;
- (void)setAllAlarms:(NSArray *)arg1 sleepAlarms:(NSArray *)arg2 source:(id <MTSource>)arg3;
- (MTAlarm *)sleepAlarm;
- (NSArray *)sleepAlarms;
- (void)snoozeAlarmWithIdentifier:(void *)arg1 snoozeAction:(void *)arg2 withCompletion:(void *)arg3 source:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)snoozeAlarmWithIdentifier:(void *)arg1 snoozeDate:(void *)arg2 snoozeAction:(void *)arg3 withCompletion:(void *)arg4 source:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)updateAlarm:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: MTAlarm *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)updateAlarmWithIdentifier:(void *)arg1 changeSet:(void *)arg2 withCompletion:(void *)arg3 source:(void *)arg4; // needs 4 arg types, found 9: NSString *, MTChangeSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)updateSleepAlarms:(NSArray *)arg1 source:(id <MTSource>)arg2;
- (void)updateSleepAlarmsWithBlock:(void *)arg1 source:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTMutableAlarm *, void*, <MTSource> *

@end
