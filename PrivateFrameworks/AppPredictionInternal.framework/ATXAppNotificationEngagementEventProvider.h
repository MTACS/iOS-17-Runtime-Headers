
@interface ATXAppNotificationEngagementEventProvider : NSObject {
    NSCountedSet * _globalCountOfNotificationsCleared;
    NSCountedSet * _globalCountOfNotificationsReceived;
    NSCountedSet * _modeCountOfNotificationsCleared;
    NSCountedSet * _modeCountOfNotificationsReceived;
    <ATXModeEntityEventProviderProtocol> * _modeEventProvider;
    ATXModeEvent * _mostRecentModeEvent;
}

@property (nonatomic, readonly) ATXModeEvent *mostRecentModeEvent;

- (void).cxx_destruct;
- (double)classConditionalOfNotificationsClearedForBundleId:(id)arg1;
- (double)classConditionalOfNotificationsReceivedForBundleId:(id)arg1;
- (id)dateIntervalFromNotificationEvent:(id)arg1;
- (unsigned long long)globalCountOfNotificationsCleared;
- (unsigned long long)globalCountOfNotificationsClearedForBundleId:(id)arg1;
- (unsigned long long)globalCountOfNotificationsReceived;
- (unsigned long long)globalCountOfNotificationsReceivedForBundleId:(id)arg1;
- (double)globalNotificationsClearedRateForBundleId:(id)arg1;
- (double)globalPopularityOfNotificationsReceivedForBundleId:(id)arg1;
- (id)initWithModeEventProvider:(id)arg1;
- (double)localNotificationsClearedRateForBundleId:(id)arg1;
- (double)localPopularityOfNotificationsReceivedForBundleId:(id)arg1;
- (unsigned long long)modeCountOfNotificationsCleared;
- (unsigned long long)modeCountOfNotificationsClearedForBundleId:(id)arg1;
- (unsigned long long)modeCountOfNotificationsReceived;
- (unsigned long long)modeCountOfNotificationsReceivedForBundleId:(id)arg1;
- (id)mostRecentModeEvent;
- (bool)notificationEventOccurredWhileInMode:(id)arg1 modeTransitionEvent:(id)arg2;
- (double)ratioOfLocalToGlobalNotificationsClearedRateForBundleId:(id)arg1;
- (double)ratioOfLocalToGlobalPopularityOfNotificationsReceivedForBundleId:(id)arg1;
- (bool)successfullyCalculatedNotificationEvents;
- (void)trackNewModeEvent:(id)arg1;
- (void)trackNewNotificationEvent:(id)arg1 forInstalledApps:(id)arg2;

@end
