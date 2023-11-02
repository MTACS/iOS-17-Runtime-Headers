
@interface ATXNotificationHandleSummaryMetrics : _ATXCoreAnalyticsMetric {
    unsigned long long  _acceptedNotificationCount;
    double  _acceptedNotificationTotalHandleTime;
    unsigned long long  _notificationsReceivedCount;
    unsigned long long  _rejectedNotificationCount;
    double  _rejectedNotificationTotalHandleTime;
    NSMutableDictionary * _unhandledReceivedNotifications;
}

@property (nonatomic, readonly) double acceptedNotificationAverageHandleTime;
@property (nonatomic, readonly) unsigned long long acceptedNotificationCount;
@property (nonatomic, readonly) double acceptedNotificationsPercentage;
@property (nonatomic, readonly) unsigned long long notificationsReceivedCount;
@property (nonatomic, readonly) double rejectedNotificationAverageHandleTime;
@property (nonatomic, readonly) unsigned long long rejectedNotificationCount;
@property (nonatomic, readonly) double rejectedNotificationsPercentage;
@property (nonatomic, readonly) double unhandledNotificationsPercentage;

- (void).cxx_destruct;
- (double)acceptedNotificationAverageHandleTime;
- (unsigned long long)acceptedNotificationCount;
- (double)acceptedNotificationsPercentage;
- (id)coreAnalyticsDictionary;
- (void)handleNotificationEvent:(id)arg1;
- (void)handleTelemetryResult:(id)arg1;
- (id)initWithDimensions:(id)arg1;
- (id)metricName;
- (unsigned long long)notificationsReceivedCount;
- (id)popReceiveEventForNotification:(id)arg1;
- (double)rejectedNotificationAverageHandleTime;
- (unsigned long long)rejectedNotificationCount;
- (double)rejectedNotificationsPercentage;
- (double)unhandledNotificationsPercentage;

@end
