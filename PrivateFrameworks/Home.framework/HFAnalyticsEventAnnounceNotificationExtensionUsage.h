
@interface HFAnalyticsEventAnnounceNotificationExtensionUsage : HFAnalyticsEvent {
    NSNumber * _notificationUsageDuration;
}

@property (nonatomic, retain) NSNumber *notificationUsageDuration;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)notificationUsageDuration;
- (id)payload;
- (void)setNotificationUsageDuration:(id)arg1;

@end
