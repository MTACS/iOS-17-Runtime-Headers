
@interface SiriTimeAlarmInternal.ChangeAlarmStatusIntentHandler : NSObject <ChangeAlarmStatusIntentHandling> {
    void osLogObject;
    void siriAlarmManager;
}

- (void).cxx_destruct;
- (void)confirmChangeAlarmStatus:(id)arg1 completion:(id /* block */)arg2;
- (void)handleChangeAlarmStatus:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveAlarmsForChangeAlarmStatus:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveHandleSilentlyForChangeAlarmStatus:(id)arg1 withCompletion:(id /* block */)arg2;

@end
