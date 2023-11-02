
@interface CALNUNNotificationMapper : NSObject {
    CALNUNNotificationRequestMapper * _notificationRequestMapper;
}

@property (nonatomic, readonly) CALNUNNotificationRequestMapper *notificationRequestMapper;

- (void).cxx_destruct;
- (id)_calnNotificationFromUNNotification:(id)arg1;
- (id)calnNotificationFromUNNotification:(id)arg1;
- (id)calnNotificationsFromUNNotifications:(id)arg1;
- (id)initWithNotificationRequestMapper:(id)arg1;
- (id)notificationRequestMapper;

@end
