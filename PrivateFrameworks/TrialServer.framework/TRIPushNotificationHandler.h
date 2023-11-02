
@interface TRIPushNotificationHandler : NSObject <TRIPushServiceConnectionDelegate> {
    <TRIHotfixRolloutTargetingSchedulerProtocol> * _hotfixScheduler;
    <TRINotificationReactionCheckerProtocol> * _notificationChecker;
    <TRIUrgentRollbackSchedulerProtocol> * _rollbackScheduler;
}

@property (nonatomic, readonly) <TRIHotfixRolloutTargetingSchedulerProtocol> *hotfixScheduler;
@property (nonatomic, readonly) <TRINotificationReactionCheckerProtocol> *notificationChecker;
@property (nonatomic, readonly) <TRIUrgentRollbackSchedulerProtocol> *rollbackScheduler;

- (void).cxx_destruct;
- (void)_handleDeploymentNotification:(id)arg1;
- (void)_handleRollbackNotification:(id)arg1;
- (bool)_isMissingNotificationFields:(id)arg1;
- (void)didReceivePushNotification:(id)arg1;
- (id)hotfixScheduler;
- (id)initWithNotificationChecker:(id)arg1 hotfixScheduler:(id)arg2 rollbackScheduler:(id)arg3;
- (id)notificationChecker;
- (id)rollbackScheduler;

@end
