
@interface CALNUNNotificationRequestMapper : NSObject {
    CALNUNNotificationContentMapper * _notificationContentMapper;
    CALNUNNotificationIconMapper * _notificationIconMapper;
}

@property (nonatomic, readonly) CALNUNNotificationContentMapper *notificationContentMapper;
@property (nonatomic, readonly) CALNUNNotificationIconMapper *notificationIconMapper;

- (void).cxx_destruct;
- (id)calnNotificationRequestFromUNNotificationRequest:(id)arg1;
- (id)initWithNotificationContentMapper:(id)arg1 notificationIconMapper:(id)arg2;
- (id)notificationContentMapper;
- (id)notificationIconMapper;
- (id)unNotificationRequestFromCALNNotificationRequest:(id)arg1;

@end
