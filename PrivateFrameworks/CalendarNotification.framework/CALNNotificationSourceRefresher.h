
@interface CALNNotificationSourceRefresher : NSObject {
    CALNInboxNotificationMonitor * _inboxNotificationMonitor;
    bool  _needsRefreshOnNotificationsLoaded;
    <CALNNotificationManager> * _notificationManager;
    NSObject<OS_dispatch_queue> * _refreshQueue;
    NSArray<CALNNotificationSource> * _sources;
}

@property (nonatomic, readonly) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (nonatomic, readonly) <CALNNotificationManager> *notificationManager;
@property (nonatomic, readonly, copy) NSArray<CALNNotificationSource> *sources;

- (void).cxx_destruct;
- (void)_refreshNotifications:(id)arg1;
- (void)_withdrawExpiredNotificationsForSource:(id)arg1;
- (void)handleNotificationsChangedNotification:(id)arg1;
- (void)handleNotificationsLoadedNotification;
- (id)inboxNotificationMonitor;
- (id)initWithSources:(id)arg1 notificationMonitor:(id)arg2 notificationManager:(id)arg3;
- (id)notificationManager;
- (void)refreshNotifications;
- (id)sources;

@end
