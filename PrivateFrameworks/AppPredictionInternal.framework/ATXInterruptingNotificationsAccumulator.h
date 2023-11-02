
@interface ATXInterruptingNotificationsAccumulator : NSObject {
    NSArray * _allInterruptingAppSessions;
    BPSPublisher * _appLaunchPublisher;
    ATXInterruptingNotificationsHelper * _interruptingNotifications;
    BPSPublisher * _notificationPublisher;
}

@property (nonatomic, readonly, copy) NSArray *allInterruptingAppSessions;

- (void).cxx_destruct;
- (id)allInterruptingAppSessions;
- (id)init;
- (id)initWithNotificationPublisher:(id)arg1 appLaunchPublisher:(id)arg2;
- (bool)successfullyAccumulatedInterruptingSessions;

@end
