
@interface CALNCalendarAppBadgeUpdater : NSObject {
    UISApplicationState * _applicationState;
    CALNInboxNotificationMonitor * _inboxNotificationMonitor;
}

@property (nonatomic, readonly) UISApplicationState *applicationState;
@property (nonatomic, readonly) CALNInboxNotificationMonitor *inboxNotificationMonitor;

- (void).cxx_destruct;
- (id)applicationState;
- (void)handleNotificationsChangedNotification:(id)arg1;
- (id)inboxNotificationMonitor;
- (id)initWithInboxNotificationMonitor:(id)arg1;

@end
