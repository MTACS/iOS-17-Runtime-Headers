
@protocol CALNTriggeredEventNotificationDataSource

@required

- (void)acknowledgeEventWithSourceClientIdentifier:(NSString *)arg1 shouldMarkAsHavingReceivedLocation:(bool)arg2;
- (void)ceaseRouteMonitoringEventForSourceClientIdentifier:(NSString *)arg1;
- (void)ceaseRouteMonitoringEventWithEventID:(NSString *)arg1;
- (<CALNTriggeredEventNotificationDataSourceDelegate> *)delegate;
- (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(GEOPlannedDestination *)arg2 dismissalType:(unsigned long long)arg3;
- (NSString *)eventObjectIDForEventID:(NSURL *)arg1;
- (CALNTriggeredEventNotificationInfo *)fetchTriggeredEventNotificationInfoWithSourceClientIdentifier:(NSString *)arg1 isProtectedDataAvailable:(bool)arg2;
- (void)handleConferenceCallActionWithSourceClientIdentifier:(NSString *)arg1;
- (void)handleDirectionsActionWithSourceClientIdentifier:(NSString *)arg1 hypothesis:(EKTravelEngineHypothesis *)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(NSDate *)arg3;
- (void)handleMailOrganizerActionWithSourceClientIdentifier:(NSString *)arg1 hypothesis:(EKTravelEngineHypothesis *)arg2;
- (NSDate *)notificationExpirationDateForEventID:(NSString *)arg1 alarmID:(NSString *)arg2;
- (void)removeTimeToLeaveRefreshTimerForEventID:(NSString *)arg1;
- (void)removeTimeToLeaveRefreshTimerForSourceClientIdentifier:(NSString *)arg1;
- (void)sendFeedbackForAddedLeaveNowNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (void)sendFeedbackForAddedTravelAdvisoryNotificationWithSourceClientIdentifier:(NSString *)arg1 hypothesis:(EKTravelEngineHypothesis *)arg2 travelAdvisoryTimelinessPeriod:(unsigned long long)arg3;
- (void)setDelegate:(id <CALNTriggeredEventNotificationDataSourceDelegate>)arg1;
- (void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(NSDate *)arg1 eventID:(NSString *)arg2;
- (void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(NSDate *)arg1 sourceClientIdentifier:(NSString *)arg2;
- (bool)shouldRemoveNotificationMetaDataWithEventID:(NSString *)arg1;
- (bool)shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(NSDate *)arg1 eventID:(NSString *)arg2;
- (bool)shouldWithdrawNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (void)snoozeEventWithSourceClientIdentifier:(NSString *)arg1 snoozeType:(unsigned long long)arg2;

@end
