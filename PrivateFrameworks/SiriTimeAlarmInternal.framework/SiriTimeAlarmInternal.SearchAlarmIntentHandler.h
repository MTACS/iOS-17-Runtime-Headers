
@interface SiriTimeAlarmInternal.SearchAlarmIntentHandler : NSObject <SearchAlarmIntentHandling> {
    void osLogObject;
    void siriAlarmManager;
}

- (void).cxx_destruct;
- (void)confirmSearchAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSearchAlarm:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveAlarmsForSearchAlarm:(id)arg1 withCompletion:(id /* block */)arg2;

@end
