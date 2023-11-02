
@interface SiriTimeAlarmInternal.CreateAlarmIntentHandler : NSObject <CreateAlarmIntentHandling> {
    void osLogObject;
    void siriAlarmManager;
}

- (void).cxx_destruct;
- (void)confirmCreateAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleCreateAlarm:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveTimeForCreateAlarm:(id)arg1 withCompletion:(id /* block */)arg2;

@end
