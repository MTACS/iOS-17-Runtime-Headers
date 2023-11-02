
@interface AFSiriAnnounceWorkoutReminderRequest : NSObject <AFSiriExternalRequest> {
    AFSiriWorkoutReminder * _workoutReminder;
}

+ (void)deactivateRequestForPredictionIdentifier:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)initWithWorkoutReminder:(id)arg1;
- (void)performRequestWithCompletion:(id /* block */)arg1;

@end
