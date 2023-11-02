
@interface ATXNotificationsEventProvider : NSObject {
    int  _notificationsClearedGloballyInLast1Day;
    int  _notificationsClearedGloballyInLastNDays;
    NSDictionary * _notificationsClearedInModeInLast1Day;
    NSDictionary * _notificationsClearedInModeInLastNDays;
    int  _notificationsReceivedGloballyInLast1Day;
    int  _notificationsReceivedGloballyInLastNDays;
    NSDictionary * _notificationsReceivedInModeInLast1Day;
    NSDictionary * _notificationsReceivedInModeInLastNDays;
    NSDate * _thresholdDateLastNDays;
}

- (void).cxx_destruct;
- (void)cacheGlobalNotificationStreamIfNecessary;
- (void)cacheModeNotificationStreamIfNecessary;
- (unsigned long long)globalCountOfNotificationsClearedWithinLast1Day;
- (unsigned long long)globalCountOfNotificationsClearedWithinLastNDays;
- (unsigned long long)globalCountOfNotificationsReceivedWithinLast1Day;
- (unsigned long long)globalCountOfNotificationsReceivedWithinLastNDays;
- (id)initWithLastNDays:(unsigned long long)arg1;
- (unsigned long long)modeCountOfNotificationsClearedWithinLast1DayForMode:(unsigned long long)arg1;
- (unsigned long long)modeCountOfNotificationsClearedWithinLastNDaysForMode:(unsigned long long)arg1;
- (unsigned long long)modeCountOfNotificationsReceivedWithinLast1DayForMode:(unsigned long long)arg1;
- (unsigned long long)modeCountOfNotificationsReceivedWithinLastNDaysForMode:(unsigned long long)arg1;

@end
