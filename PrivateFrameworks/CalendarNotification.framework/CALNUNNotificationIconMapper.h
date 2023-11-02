
@interface CALNUNNotificationIconMapper : NSObject {
    CALNNotificationIconCache * _notificationIconCache;
}

@property (nonatomic, readonly) CALNNotificationIconCache *notificationIconCache;

- (void).cxx_destruct;
- (id)iconIdentifierFromUNNotificationIcon:(id)arg1;
- (id)initWithNotificationIconCache:(id)arg1;
- (id)notificationIconCache;
- (id)unNotificationIconFromIconIdentifier:(id)arg1;

@end
