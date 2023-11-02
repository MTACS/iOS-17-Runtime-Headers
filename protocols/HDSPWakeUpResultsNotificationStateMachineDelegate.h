
@protocol HDSPWakeUpResultsNotificationStateMachineDelegate <HKSPPersistentStateMachineDelegate>

@required

- (void)executeQuery;
- (void)postResultsNotification;
- (void)scheduleRetryAttempt;
- (void)startObservingProtectedHealthDataAvailability;
- (void)stopObservingProtectedHealthDataAvailability;
- (void)unscheduleRetryAttempt;

@end
