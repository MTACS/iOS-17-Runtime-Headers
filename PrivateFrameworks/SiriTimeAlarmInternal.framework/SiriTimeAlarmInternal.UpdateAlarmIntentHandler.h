
@interface SiriTimeAlarmInternal.UpdateAlarmIntentHandler : NSObject <UpdateAlarmIntentHandling> {
    void osLogObject;
    void siriAlarmManager;
}

- (void).cxx_destruct;
- (void)confirmUpdateAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleUpdateAlarm:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveAlarmForUpdateAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveProposedLabelForUpdateAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveProposedMeridiemSetByUserForUpdateAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveProposedTimeForUpdateAlarm:(id)arg1 withCompletion:(id /* block */)arg2;

@end
