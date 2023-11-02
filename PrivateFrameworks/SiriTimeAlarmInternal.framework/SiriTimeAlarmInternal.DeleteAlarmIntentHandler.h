
@interface SiriTimeAlarmInternal.DeleteAlarmIntentHandler : NSObject <DeleteAlarmIntentHandling> {
    void osLogObject;
    void siriAlarmManager;
}

- (void).cxx_destruct;
- (void)confirmDeleteAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDeleteAlarm:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveAlarmsForDeleteAlarm:(id)arg1 withCompletion:(id /* block */)arg2;

@end
