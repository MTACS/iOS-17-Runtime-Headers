
@interface ATXContactNotificationEngagementEventProvider : NSObject {
    NSCountedSet * _globalCountOfNotificationsCleared;
    NSCountedSet * _globalCountOfNotificationsReceived;
    NSCountedSet * _modeCountOfNotificationsCleared;
    NSCountedSet * _modeCountOfNotificationsReceived;
    <ATXModeEntityEventProviderProtocol> * _modeEventProvider;
    ATXModeEvent * _mostRecentModeEvent;
}

@property (nonatomic, readonly) ATXModeEvent *mostRecentModeEvent;

- (void).cxx_destruct;
- (double)classConditionalOfNotificationsClearedForContactId:(id)arg1;
- (double)classConditionalOfNotificationsReceivedForContactId:(id)arg1;
- (id)dateIntervalFromNotificationEvent:(id)arg1;
- (unsigned long long)globalCountOfNotificationsCleared;
- (unsigned long long)globalCountOfNotificationsClearedForContactId:(id)arg1;
- (unsigned long long)globalCountOfNotificationsReceived;
- (unsigned long long)globalCountOfNotificationsReceivedForContactId:(id)arg1;
- (double)globalNotificationsClearedRateForContactId:(id)arg1;
- (double)globalPopularityOfNotificationsReceivedForContactId:(id)arg1;
- (id)initWithModeEventProvider:(id)arg1;
- (double)localNotificationsClearedRateForContactId:(id)arg1;
- (double)localPopularityOfNotificationsReceivedForContactId:(id)arg1;
- (unsigned long long)modeCountOfNotificationsCleared;
- (unsigned long long)modeCountOfNotificationsClearedForContactId:(id)arg1;
- (unsigned long long)modeCountOfNotificationsReceived;
- (unsigned long long)modeCountOfNotificationsReceivedForContactId:(id)arg1;
- (id)mostRecentModeEvent;
- (bool)notificationEventOccurredWhileInMode:(id)arg1 modeTransitionEvent:(id)arg2;
- (double)ratioOfLocalToGlobalNotificationsClearedRateForContactId:(id)arg1;
- (double)ratioOfLocalToGlobalPopularityOfNotificationsReceivedForContactId:(id)arg1;
- (bool)successfullyCalculatedNotificationEvents;
- (void)trackNewModeEvent:(id)arg1;
- (void)trackNewNotificationEvent:(id)arg1;

@end
